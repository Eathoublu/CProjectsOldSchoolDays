////
//// Created by 蓝一潇 on 2018/6/15.
////
//
////#include<stdio.h>
////int main()
////{
////    int i;
////    if (freopen ("output.txt", "w", stdout) == NULL){
////        fprintf(stderr, "error redirecting stdout\n");
////    }
////    for (i = 0; i < 10; i++)
////        printf("%3d", i);
////    printf("\n");
////    fclose(stdout);
////    return 0;
////}
//
////#include<stdio.h>
////int main()
////{
////    int a, b;
////    freopen("in.txt","r",stdin);
////    /* 如果in.txt不在连接后的exe的目录，需要指定路径如D:\in.txt */
////    freopen("out.txt","w",stdout); /*同上*/
////    while (scanf("%d %d", &a, &b) != EOF)
////    {
////        printf("dsfsdf");
////        printf("%d\n",a+b);
////    }
////
////    fclose(stdin);
////    fclose(stdout);
////    return 0;
////}
//
////#include <stdio.h>
////#include <stdlib.h>
////int main(void)
////{
////    FILE *stream;
////    char a[100] = {};
////    if ((stream = freopen("file.txt", "r", stdin)) == NULL)
////    { exit(-1);}
////    scanf("%s", &a);
////    printf("%sf\n", &a);
////    printf("this is stdout output\n");
//////    stream = freopen("/dev/tty","w",stdout);
////    /*stdout是向程序的末尾的控制台重定向*/
////    printf("And now back to the console once again\n");
////    return 0;
////}
//
////#include <stdio.h>
////int main(void)
////{
////    FILE *fp = NULL;
////    char tmp[100];
////    fp = fopen("tmp.txt", "r");
////    if (NULL == fp)
////    {
////        printf("File open fail!\n");
////        return -1;
////    }
////    fread(tmp, 1, 100, fp);
////    printf("%s\n", tmp);
////    fclose(fp);
////    fp = NULL;
////    return 0;
////}
////
////#include <stdio.h>
////#include <stdlib.h> /* 为了使用exit() */
////
////int main(void)
////{
////    int i = 0; /* 用于 putchar & getc 的数据接收 */
////    char *ch = "";
////    char c;
////    int d;
////    FILE *fp = NULL;
////    //  char fname[50]; /* 用于存放文件名 */
////    fp = fopen("tmp.txt", "r"); /* 只供读取 */
////    if (fp == NULL) /* 如果失败了 */
////    {
////        printf("错误！");
////        exit(1); /* 中止程序 */
////    }
////
////    char buf[101];
//////    fp = fopen("in.txt", "r");//打开文件
////        while(fgets(buf, sizeof(buf), fp))//每次读取一行数据，直到读取失败。
////        {
//////            fputs(buf, stdout);
////            printf("%s\n", buf); //打印该行。
////        }
//////    fclose(fp);//关闭文件。
////
//////    printf("123123\n");
//////    char str[100];
//////    while (fgets(fp, str, stdin) != NULL)
//////    {
//////        putchar(str[i]);
//////        i++;
//////    }
//////    scanf("%d", &d);
//////    fgets(fp , str, stdin);
//////    printf("dve\n");
////
////
//////    fclose(fp); /* 关闭文件 */
//////    fp = NULL; /* 需要指向空，否则会指向原打开文件地址 */
////    return 0;
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////#include<conio.h>
//#include<stdbool.h>
//void inputinf_();
//void scanhouseinf_();
//void searchhouseinf_();
//void withdrawhouse();
//void empty_message();
//void searchnum();
//void searchused();
//void searchID();
//
//struct House{
//    //   int i;
//    int num_;
//    int price;
//    int used;
//    char ID[20];
//    char name[20];
//    char contact[20];
//}house[100];
//int total=5; //房间总数量
//
//void Menushow(){
//    printf("\n");
//    printf("\t\t            欢迎进入房屋寻租系统             \n");
//    printf("请选择您的功能：                     \n");
//    printf("0.我要选择租房\n");
//    printf("1.房屋信息浏览\n");
//    printf("2.房屋信息查询\n");
//    printf("3.我要选择退房\n");
//    printf("4.退出寻租系统\n");
//    printf("\n");
//}
//
//
////读取数据
//void loadData()
//{
//    int i=0;
//    FILE *scan= fopen("house.txt","r");
//    char buf[101];
//    if (scan == NULL){
//        printf("alllalala\n");
//    }
////    printf("succeed\n");
////    while(fgets(buf, sizeof(buf), scan)) {
//////        fgets(scan, house[i].ID, stdin);
//////        fgets(scan,house[i].price, stdin);
//////        fgets(scan,house[i].used, stdin);
//////        fgets(scan,house[i].name, stdin);
//////        fgets(scan,house[i].ID, stdin);
//////        fgets(scan,house[i].contact, stdin);
////
////        i++;
////        printf("%s", buf);
////    }
//        while(fscanf(scan,"%s",&house[i].ID)!= EOF){
//        fscanf(scan,"%d",&house[i].price);
//        fscanf(scan,"%d",&house[i].used);
//        fscanf(scan,"%s",&house[i].name);
//        fscanf(scan,"%s",&house[i].ID);
//        fscanf(scan,"%s",&house[i].contact);
//        i++;
//}
////    fscanf(scan,"%d %s %s",&house[i].num_, &house[i].ID, &house[i].contact);
////    printf("%d %s %s",house[i].num_, house[i].ID, house[i].contact);
////    FILE *fp = NULL;
////    char buff[255];
////    fp = fopen("test.txt", "r");
////    fscanf(fp, "%s", buff);
////    printf("1: %s\n", buff );
//    fclose(scan);
//    total=i;
//}
//
////保存数据
////void saveData()
////{
////    int c=total;
////    FILE *fp;
////    fp=fopen("house.txt","w+");
////    int i;
////    i = 0;
////    c = 1;
////    house[i].num_ = 234;
//////    strcpy(house[i].price, "9000");
////    for(i=0;i<c;i++){
////        if (i!=c-1)
////        {
////            fprintf(fp,"%d ",house[i].num_);
////            fprintf(fp,"%s ",house[i].price);
////
////        }
////        else
////        {
////            fprintf(fp,"%d ",house[i].num_);
////            fprintf(fp,"%s ",house[i].price);
////
////        }
////    }
////    fclose(fp);
////}
//void saveData()
//{
//    int c=total;
//    FILE *fp;
//    fp=fopen("house.txt","w+");
//    int i;
//    for(i=0;i<c;i++){
//        if (i!=c-1)
//        {
//            fprintf(fp,"%d ",house[i].num_);
//            fprintf(fp,"%d ",house[i].price);
//            fprintf(fp,"%d ",house[i].used);
//            fprintf(fp,"%s ",house[i].name);
//            fprintf(fp,"%s ",house[i].ID);
//            fprintf(fp,"%s\n",house[i].contact);
//        }
//        else
//        {
//            fprintf(fp,"%d ",house[i].num_);
//            fprintf(fp,"%d ",house[i].price);
//            fprintf(fp,"%d ",house[i].used);
//            fprintf(fp,"%s ",house[i].name);
//            fprintf(fp,"%s ",house[i].ID);
//            fprintf(fp,"%s\n",house[i].contact);
//        }
//    }
//    fclose(fp);
//}
//
//
//void scanhouseinf_(){
//    int i=0;
//
//    printf("房号  价格  可租否  姓名  ID号码  联系方式\n");
//    for(i=0;i<total;i++)
//    {
//        printf("%4d",house[i].num_);
//        printf("%9d",house[i].price);
//        printf("%9d",house[i].used);
//        printf("%10s",house[i].name);
//        printf("%10s",house[i].ID);
//        printf("%20s\n",house[i].contact);
//    }
//    system("pause");
//    system("cls");
//}
//
//void inputinf_(){
//    int yournum,b;
//    printf("现在可租的房屋信息为：\n");
//    empty_message();
//    printf("请输入看中的房屋的编号：");
//    scanf("%d",&yournum);
//    int c;
//    c=0;
//
//    bool isOk=false;
//    for( c=0;c<total;c++){
//        if((house[c].num_==yournum)&&(house[c].used==0)){
//            b=c;
//            c++;
//            isOk=true;
//        }
//    }
//    if (!isOk)
//    {
//        printf("未找到该房间信息\n");
//        return;
//    }
//
//    printf("确认选择该套房？\n");
//    printf("\t\t是[1] 否[2]\n");
//    printf("\t\tq请输入您的选择(1/2)\n");
//    int yourchoose;
//    scanf("%d",&yourchoose);
//    if(yourchoose==2){
//        return;
//    }
//    printf("请输入您的个人信息\n");
//    printf("请输入您的姓名：\n");
//    scanf("%s",&house[b].name);
//    printf("请输入您的身份证号码:\n");
//    scanf("%s",&house[b].ID);
//    printf("请输入您的联系方式(手机号）:\n");
//    scanf("%s",&house[b].contact);
//    house[b].used=1;
//    printf("租房成功！\n");
//    saveData();
//    system("pause");
//    system("cls");
//}
//
//void withdrawhouse(){
//    int yournum,b;
//
//    printf("请输入您的房号：\n");
//    scanf("%d",&yournum);
//    int c=0;
//
//
//    bool isOk=false;
//    for(c=0;c<total;c++){
//        if((house[c].num_==yournum)&&(house[c].used==1)){
//            b=c;
//            c++;
//            isOk=true;
//        }
//    }
//    if (isOk)
//    {
//        strcpy(house[b].name,"空\0");
//        strcpy(house[b].ID," 空\0");
//        strcpy(house[b].contact,"空\0");
//        house[b].used=0;
//        printf("退房成功！\n");
//        saveData();
//    }
//    else
//    {
//        printf("未找到该房间信息\n");
//    }
//    system("pause");
//    system("cls");
//
//}
//
//void searchhouseinf_(){
//
//
//    int i;
//
//    printf("请输入您要选择的功能：\n");
//    printf("(1)按照房间号查找\n");
//    printf("(2)按照未租出查找\n");
//    printf("(3)按照ID号码查找\n");
//    scanf("%d",&i);
//    switch(i){
//        case 1:searchnum();break;
//        case 2:searchused();break;
//        case 3:searchID();break;
//        case 4:break;
//    }
//
//
//
//}
//
//void searchused()
//{
//
//    printf("空房间是:\n");
//    printf("房号  价格  可租否  姓名  ID号码  联系方式\n");
//    int k;
//    bool isOk=false;
//    for(k=0;k<total;k++)
//    {
//        if(house[k].used==0)
//        {
//            isOk=true;
//            printf("%4d",house[k].num_);
//            printf("%10d",house[k].price);
//        }
//    }
//    if (!isOk)
//    {
//        printf("未找到空房间信息，全部已满\n");
//    }
//
//    system("pause");
//    system("cls");
//}
//void searchnum()
//{
//    int n;
//    printf("请输房间号:\n");
//    scanf("%d",&n);
//    int k;
//    bool isOk=false;
//    for(k=0;k<total;k++)
//    {
//        if(house[k].num_==n)
//        {
//            printf("房号  价格  可租否  姓名  ID号码  联系方式\n");
//            printf("%4d",house[k].num_);
//            printf("%9d",house[k].price);
//            printf("%9d",house[k].used);
//            printf("%10s",house[k].name);
//            printf("%10s",house[k].ID);
//            printf("%20s",house[k].contact);
//            isOk=true;
//            break;
//        }
//    }
//    if (!isOk)
//    {
//        printf("未找到该房间信息\n");
//    }
//    system("pause");
//    system("cls");
//
//}
//void searchID()
//{
//
//    char n[20];
//    printf("请输入ID: \n");
//    scanf("%s",n);
//    int k;
//    bool isOk=false;
//    for(k=0;k<total;k++)
//    {
//        if(strcmp(house[k].ID,n)==0)
//        {
//            printf("房号  价格  可租否  姓名  ID号码  联系方式\n");
//            printf("%4d",house[k].num_);
//            printf("%9d",house[k].price);
//            printf("%9d",house[k].used);
//            printf("%10s",house[k].name);
//            printf("%10s",house[k].ID);
//            printf("%20s",house[k].contact);
//            isOk=true;
//            break;
//        }
//    }
//    if (!isOk)
//    {
//        printf("未找到该房间信息\n");
//    }
//    system("pause");
//    system("cls");
//}
//
//void empty_message()
//{
//
//    int i=0;
//    printf("房号  价格  可租否  姓名  ID号码  联系方式\n");
//    for( i=0;i<total;i++)
//    {
//        if(house[i].used==0)
//            printf("%4d",house[i].num_);
//        printf("%10d\n",house[i].price);
//    }
//}
//
//
//
//int main() {
//
//    int option;
//    Menushow();
//    loadData();
//     saveData();
//    while(1){
//    scanf("%d", &option);
//    switch (option) {
//        case 0:
//            inputinf_();
//            break;
//        case 1:
//            scanhouseinf_();
//            break;
//        case 2:
//            searchhouseinf_();
//            break;
//        case 3:
//            withdrawhouse();
//            break;
//        case 4:
//            return 0;
//        default:
//            printf("404 not found\n");
//            return 0;
//    }
//    Menushow();}
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//#include<string.h>
//#define LEN sizeof(struct student)
//struct student{    //学生成绩结构体
//    int num;
//    char name[20];
//    double req;  //必修课
//    double opt;   //选修课
//    double clan;  //C语言实验课
//    double sum;   //总分
//}stu[50];
//void add(); //初始录入信息
//void del(); //删除
//void change(); //修改
//void show();
//void first(); //界面
//void sums();
//void search();
//void order();
//void addanew();//插入
//
//void first(){
//    printf("|-------------------------------------------|\n");
//    printf("|           学生成绩信息管理系统            |\n");
//    printf("|-------------------------------------------|\n");
//    printf("|           1.录入学生成绩信息              |\n");
//    printf("|           2.插入学生成绩信息              |\n");
//    printf("|           3.修改信息                      |\n");
//    printf("|           4.删除信息                      |\n");
//    printf("|           5.查找信息                      |\n");
//    printf("|           6.显示信息                      |\n");
//    printf("|           7.成绩排序                      |\n");
//    printf("|           8.学生信息总数                  |\n");
//    printf("|           9.退出系统                      |\n");
//    printf("|-------------------------------------------|\n");
//    printf("您想要进行的操作是（输入操作序号）:\n");
//}
//
//void add(){
//    int a;
//    int in=0;
//    char i;
//    FILE *fp;
//    if((fp=fopen("student.txt","a+"))==NULL)
//    {printf("无法打开\n");
//        return;
//    }
//    while(!feof(fp))
//    { if(fread(&stu[in],LEN,1,fp)==1)  //书本加网上学习  指向数据指针 数据大小 数据个数 文件指针
//            in++;   //记录现在的条数 如果已经有数据了 接着下一个录入
//    }
//    fclose(fp);
//    if(in==0) printf("没有信息记录\n");
//    else{
//        system("cls");
//        show();
//    }
//    if((fp=fopen("student.txt","wb"))==NULL)
//    {printf("无法打开\n");
//        return;   //跳出函数
//    }
//    for(a=0;a<in;a++) fwrite(&stu[a],LEN,1,fp); //磁盘录入
//    printf("请问是要进行录入（输入y【开始录入】或n【不再录入】）:");
//    scanf("%c",&i);
//    while((i=='Y')||(i=='y')){
//        printf("学号：");
//        scanf("%d",&stu[in].num);
//        for(a=0;a<in;a++)
//        {
//            if(stu[a].num==stu[in].num)
//            { printf("学号重复，任意键返回！");
//                getch();  //无回显
//                fclose(fp);
//                return;    //可以跳出函数
//            }
//        }
//        printf("姓名：");
//        scanf("%s",stu[in].name);
//        printf("必修课成绩：");
//        scanf("%lf",&stu[in].req);
//        printf("选修课成绩：");
//        scanf("%lf",&stu[in].opt);
//        printf("c语言实验课成绩：");
//        scanf("%lf",&stu[in].clan);
//        stu[in].sum=stu[in].req+stu[in].opt+stu[in].clan;
//        if(fwrite(&stu[in],LEN,1,fp)!=1)
//        {  printf("无法保存！");
//            getch();
//        }
//        else {printf("%s的成绩信息已经保存了！\n",stu[in].name);
//            in++;
//        }
//        printf("是否继续录入（输入y【继续录入】或n【不再录入】）？");
//        scanf("%c",&i);
//    }
//    fclose(fp);
//    printf("录入完毕啦！\n");
//}
//void show(){
//    FILE *fp;
//    int a;
//    int in=0;
//    fp=fopen("student.txt","rb");
//    while(!feof(fp))
//    {
//        if(fread(&stu[in],LEN,1,fp)==1)
//            in++;
//    }
//    fclose(fp);
//    printf("学号  姓名           必修课成绩    选修课成绩  C实验成绩    总分\t\n");
//    for(a=0;a<in;a++)
//    {
//        printf("%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n",stu[a].num,stu[a].name,stu[a].req,stu[a].opt,stu[a].clan,stu[a].sum);
//    }
//}
//void del(){
//    FILE *fp;
//    int number,i,j;
//    int in=0;
//    char ch;
//
//    if((fp=fopen("student.txt","r+"))==NULL)
//    {
//        printf("无法打开\n");
//        return;
//    }
//    while(!feof(fp))
//    {
//        if(fread(&stu[in],LEN,1,fp)==1)
//            in++;
//    }
//    fclose(fp);
//    if(in==0){
//        printf("没有信息记录\n");
//        return;
//    }
//    printf("请输入想要删除信息的学号：");
//    scanf("%d",&number);
//    for(i=0;i<in;i++) {if(number==stu[i].num) {
//            printf("找到您要删除的信息了，确认要删除吗？（输入字母y确认删除，输入n则取消删除）");
//            scanf("%c",&ch);
//            if((ch=='Y')||(ch=='y'))
//            {for(j=i;j<in;j++)  //重新写入
//                {stu[j]=stu[j+1];}
//                in--;}
//            else if((ch=='N')||(ch=='n'))
//            { printf("您已取消删除！\n");
//                return;
//            }
//            break;
//        }
//    }
//    if(i==in) {printf("没有找到您想要删除的学号！\n");
//        return;}
//    if((fp=fopen("student.txt","wb"))==NULL)
//    {
//        printf("无法打开\n");
//        return;
//    }
//    for(j=0;j<in;j++)
//        if(fwrite(&stu[j],LEN,1,fp)!=1)
//        {
//            printf("无法保存！\n");
//            getch();  //没有返回显示的输入
//        }
//    fclose(fp);
//    printf("已经删除了您要删除的信息！\n");
//}
//void search(){
//    FILE *fp;
//    int number,a;
//    int in=0;
//    char i;
//    if((fp=fopen("student.txt","rb"))==NULL)
//    {
//        printf("无法打开\n");
//        return;
//    }
//    while(!feof(fp))
//    {
//        if(fread(&stu[in],LEN,1,fp)==1)
//            in++;
//    }
//    fclose(fp);
//    if(in==0){
//        printf("没有信息记录\n");
//        return;
//    }
//    printf("请输入您要查找的学号：");
//    scanf("%d",&number);
//    for(a=0;a<in;a++)
//    { if(number==stu[a].num){
//            printf("找到该学生的成绩信息了，是否要进行显示？（输入字母y进行显示，输入n则取消显示）");
//            scanf("%c",&i);
//            if((i=='Y')||(i=='y')) {
//                printf("学号  姓名           必修课成绩    选修课成绩  C实验成绩    总分\t\n");
//                printf("%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n",stu[a].num,stu[a].name,stu[a].req,stu[a].opt,stu[a].clan,stu[a].sum);
//            }
//            else if((i=='N')||(i=='n')){
//                printf("您已经取消了显示！\n");
//                return;
//            }
//            break;
//        }
//    }
//    if(a==in) printf("没有找到您想要显示的信息！\n");
//}
//void change(){
//    FILE *fp;
//    int number,a,b;
//    int in=0;
//    if((fp=fopen("student.txt","r+"))==NULL)
//    {
//        printf("无法打开\n");
//        return;
//    }
//    while(!feof(fp))
//    {
//        if(fread(&stu[in],LEN,1,fp)==1)
//            in++;
//    }
//    fclose(fp);
//    if(in==0){
//        printf("没有信息记录\n");
//        return;
//    }
//    printf("请输入你想要修改信息的学生的学号：");
//    scanf("%d",&number);
//    for(a=0;a<in;a++)
//    {if(number==stu[a].num) {
//            printf("找到该信息，可以开始修改！\n");
//            printf("姓名:");
//            scanf("%s",stu[a].name);
//            printf("必修课成绩：");
//            scanf("%lf",&stu[a].req);
//            printf("选修课成绩：");
//            scanf("%lf",&stu[a].opt);
//            printf("c语言实验课成绩：");
//            scanf("%lf",&stu[a].clan);
//            stu[a].sum=stu[a].req+stu[a].opt+stu[a].clan;
//            if((fp=fopen("student.txt","wb"))==NULL){
//                printf("无法打开\n");
//                return;
//            }
//            for(b=0;b<in;b++)
//                if(fwrite(&stu[b],LEN,1,fp)!=1)
//                {  printf("无法保存!\n");
//                    getch();
//                }
//            fclose(fp);
//            break;
//        }
//    }
//    if(a==in) printf("并没有找到这条信息！\n");
//}
//void sums(){
//    FILE *fp;
//    int in=0;
//    if((fp=fopen("student.txt","r+"))==NULL)
//    {
//        printf("无法打开！\n");
//        return;
//    }
//    while(!feof(fp))
//        if(fread(&stu[in],LEN,1,fp)==1) in++;
//    if(in==0) {printf("没有信息记录！\n");
//        fclose(fp);
//        return;
//    }
//    printf("共有%d条学生信息记录！\n",in);
//    fclose(fp);
//}
//void addanew(){
//    FILE *fp;
//    int number,a,b,c;
//    int in=0;
//    if((fp=fopen("student.txt","r+"))==NULL)
//    {
//        printf("无法打开！\n");
//        return;
//    }
//    while(!feof(fp))
//        if(fread(&stu[in],LEN,1,fp)==1) in++;
//    if(in==0) {printf("没有信息记录！\n");
//        fclose(fp);
//        return;
//    }
//    printf("请输入你想在哪个地方添加一条新信息？（输入数字）\n");
//    scanf("%d",&number);           //a后插入
//    for(a=0;a<in;a++)
//        if(number==stu[a].num) break;
//
//    for(b=in-1;b>a;b--)
//        stu[b+1]=stu[b];
//    printf("输入您想要插入的新信息!\n");
//    printf("学号：");
//    scanf("%d",&stu[a+1].num);
//    for(c=0;c<in;c++)
//        if(stu[c].num==stu[a+1].num){
//            printf("抱歉，学号重复，按任意键退出!\n");
//            getch();
//            fclose(fp);
//            return;
//        }
//    printf("姓名:");
//    scanf("%s",stu[a+1].name);
//    printf("必修课成绩：");
//    scanf("%lf",&stu[a+1].req);
//    printf("选修课成绩：");
//    scanf("%lf",&stu[a+1].opt);
//    printf("c语言实验课成绩：");
//    scanf("%lf",&stu[a+1].clan);
//    stu[a+1].sum=stu[a+1].req+stu[a+1].opt+stu[a+1].clan;
//    if((fp=fopen("student.txt","wb"))==NULL)
//    {
//        printf("无法打开!\n");
//        return;
//    }
//    for(c=0;c<in;c++)
//        if(fwrite(&stu[c],LEN,1,fp)!=1) {printf("无法保存！\n");
//            getch();
//            fclose(fp);
//            return;
//        }
//
//
//}
//void order(){
//    FILE *fp;
//    struct student t;
//    int a,b;
//    int in=0;
//    if((fp=fopen("student.txt","r+"))==NULL)
//    {
//        printf("无法打开！\n");
//        return;
//    }
//    while(!feof(fp))
//        if(fread(&stu[in],LEN,1,fp)==1) in++;
//    fclose(fp);
//    if(in==0){
//        printf("没有信息记录！\n");
//        return;
//    }
//    if((fp=fopen("student.txt","wb"))==NULL)
//    {
//        printf("无法打开！\n");
//        return;
//    }
//    for(a=0;a<in-1;a++)
//        for(b=a+1;b<in;b++)
//            if(stu[a].num<stu[b].num)
//            {   t=stu[a];
//                stu[a]=stu[b];
//                stu[b]=t;
//            }
//    if((fp=fopen("student.txt","wb"))==NULL)
//    {
//        printf("无法打开！\n");
//        return;
//    }
//    for(a=0;a<in;a++)
//        if(fwrite(&stu[a],LEN,1,fp)!=1)
//        {
//            printf("无法保存！\n");
//            getch();
//        }
//    fclose(fp);
//    printf("已保存!\n");
//}
//int main()
//{
//    int k;
//    system("cls");
//    first();
//    scanf("%d\n",&k);
//    while(k)
//    {
//        if(k==1) {system("cls");add();}
//        else if(k==2) {system("cls");show();addanew();}
//        else if(k==3) {system("cls");show();change();}
//        else if(k==4) {system("cls");show();del();}
//        else if(k==5) {system("cls");search();}
//        else if(k==6) {system("cls");show();}
//        else if(k==7) {system("cls");order();}
//        else if(k==8) {system("cls");sums();}
//        else if(k==9) {exit(0);}
////        getch();
//        system("pause");
//        system("cls");
//        first();
//        scanf("%d\n",&k);
//    }
//}


