#include <stdio.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
//蓝一潇 20174899 电子1701
int counts = 0; //统计出现次数
char word[4]="NEU"; //关键词设置为NEU
int count(char new_str[1000], int len){ //统计关键词出现次数
	for (int i=0;i<=len;i++){
		if (new_str[i]==word[0]){
			if(new_str[i+1]==word[1]){
				if(new_str[i+2]==word[2]){
					counts++;
				}
			}
		}
	}
}
int main(int argc,char *argv[]) //接受一个参数，即端口号
{

	if(argc != 2)
	{
		printf("请传递一个端口号~\n");
		return -1;
	}
 
	//将接收端口号并转换为int
	int port = atoi(argv[1]);
	if( port<1025 || port>65535 )//0~1024一般给系统使用 最大应该是65535
	{
		return -1;
	}
	
	// 创建udp通信socket
	int udp_socket_fd = socket(AF_INET,SOCK_DGRAM,0); //初始化
	if(udp_socket_fd < 0 )
	{
		perror("创建失败？？？\n");
		return -1;
	}
 
	//设置UDP的地址并绑定 
	struct sockaddr_in  local_addr = {0};
	local_addr.sin_family  = AF_INET; //使用IPv4协议
	local_addr.sin_port	= htons(port);   //网络通信都使用大端格式
	local_addr.sin_addr.s_addr = INADDR_ANY;//这个可以让系统检测本地网卡，自动绑定本地IP
 
	int ret = bind(udp_socket_fd,(struct sockaddr*)&local_addr,sizeof(local_addr)); //绑定
	if(ret < 0) //监测绑定是否成功
	{
		perror("绑定失败！");
		close(udp_socket_fd);
		return -1;
	}
	else
	{
		printf("欢迎使用NEU UDP客户端，可以开始接收了～\n");
	}
	
 
	struct sockaddr_in  src_addr = {0};  //用来存放对方(信息的发送方)的IP地址信息
	int len = sizeof(src_addr);	//地址信息的大小
	char buf[1024] = {0};//消息缓冲区
	
	//循环接收客户发送过来的数据  
	while(1)
	{
		ret = recvfrom(udp_socket_fd, buf, sizeof(buf), 0, (struct sockaddr *)&src_addr, &len);
		if(ret == -1)
		{
			break;
		}
		printf("[%s:%d]",inet_ntoa(src_addr.sin_addr),ntohs(src_addr.sin_port));//打印消息发送方的ip与端口号
		printf("说：%s\n",buf);
		count(buf, 100);
		if (counts>3){
			printf("警告！关键词NEU出现大于阈值！！");
		}
		if(strcmp(buf, "exit") == 0) //退出条件
		{
			break;
		}
		memset(buf, 0, sizeof(buf));//清空存留消息
 
	}
	
	//关闭通信socket
	close(udp_socket_fd);
}


