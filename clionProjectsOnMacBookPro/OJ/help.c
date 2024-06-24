////
//// Created by 蓝一潇 on 2018/6/11.
////
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
//    int i;
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
//    while(fread()){
//        fscanf(scan,"%s",&house[i].ID);
//        fscanf(scan,"%d",&house[i].price);
//        fscanf(scan,"%d",&house[i].used);
//        fscanf(scan,"%s",&house[i].name);
//        fscanf(scan,"%s",&house[i].ID);
//        fscanf(scan,"%s",&house[i].contact);
//        i++;
//}
//FILE *fp = NULL;
//char buff[255];
//fp = fopen("test.txt", "r");
//fscanf(fp, "%s", buff);
//printf("1: %s\n", buff );
//    fclose(scan);
//    total=i;
//}
//
////保存数据
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
//int main()
//{
//
//    int option;
//    Menushow();
//    loadData();
////    scanf("%d",&option);
////    switch(option){
////        if(option!=4){
////            case 0:inputinf_();break;
////            case 1:scanhouseinf_();break;
////            case 2:searchhouseinf_();break;
////            case 3:withdrawhouse();break;
////            case 4:return 0;
////            default:printf("404 not found\n");return 0;
////        }
////    }
////    Menushow();
//    return 0;
//}
