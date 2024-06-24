//
// Created by 蓝一潇 on 2018/6/15.
//

#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<string.h>
#define LEN sizeof(struct student)
struct student{    //学生成绩结构体
    int num;
    char name[20];
    double req;  //必修课
    double opt;   //选修课
    double clan;  //C语言实验课
    double sum;   //总分
}stu[50];
void add(); //初始录入信息
void del(); //删除
void change(); //修改
void show();
void first(); //界面
void sums();
void search();
void order();
void addanew();//插入

void first(){
    printf("|-------------------------------------------|\n");
    printf("|           学生成绩信息管理系统            |\n");
    printf("|-------------------------------------------|\n");
    printf("|           1.录入学生成绩信息              |\n");
    printf("|           2.插入学生成绩信息              |\n");
    printf("|           3.修改信息                      |\n");
    printf("|           4.删除信息                      |\n");
    printf("|           5.查找信息                      |\n");
    printf("|           6.显示信息                      |\n");
    printf("|           7.成绩排序                      |\n");
    printf("|           8.学生信息总数                  |\n");
    printf("|           9.退出系统                      |\n");
    printf("|-------------------------------------------|\n");
    printf("您想要进行的操作是（输入操作序号）:\n");
}

void add(){
    int a;
    float b;
    int in=0;
    char i[2];
    FILE *fp;
    if((fp=fopen("student.txt","r"))==NULL)
    {printf("无法打开\n");
        return;
    }
    while(fscanf(fp, "%d", &stu[in].num)!=EOF){
        fscanf(fp, "%s", stu[in].name);
        fscanf(fp, "%lf", &stu[in].req);
        fscanf(fp, "%lf", &stu[in].opt);
        fscanf(fp, "%lf", &stu[in].clan);
        fscanf(fp, "%lf", &stu[in].sum);
        in++;
    }
    fclose(fp);
    if(in==0) printf("没有信息记录\n");
    else{
        system("cls");
        show();
    }
    if((fp=fopen("student.txt","a+"))==NULL)
    {
        printf("无法打开\n");
        return;   //跳出函数
    }
    printf("请问是要进行录入（输入y【开始录入】或n【不再录入】）:");
    scanf("%s",i);
    while(strcmp(i,"y")==0||strcmp(i,"Y")==0){
        printf("学号：");
        printf("%d", stu[in].num);
        for(a=0;a<in;a++)
        {
            if(stu[a].num==stu[in].num)
            { printf("学号重复，任意键返回！");
                getch();  //无回显
                fclose(fp);
                return;    //可以跳出函数
            }
        }
        printf("姓名：");
        scanf("%s",stu[in].name);
        printf("必修课成绩：");
        scanf("%lf",&stu[in].req);
        printf("选修课成绩：");
        scanf("%lf",&stu[in].opt);
        printf("c语言实验课成绩：");
        scanf("%lf",&stu[in].clan);
        stu[in].sum=stu[in].req+stu[in].opt+stu[in].clan;
        fprintf(fp, "%d %s %lf %lf %lf %lf\n", stu[in].num, stu[in].name, stu[in].req, stu[in].opt, stu[in].clan, stu[in].sum);
        printf("是否继续录入（输入y【继续录入】或n【不再录入】）？");
        scanf("%s",i);
    }
    fclose(fp);
    printf("录入完毕啦！\n");
    return;
}
void show(){
    FILE *fp;
     int a;
    int in=0;
    fp=fopen("student.txt","rb");
    while(fscanf(fp, "%d", &stu[in].num)!=EOF){
        fscanf(fp, "%s", stu[in].name);
        fscanf(fp, "%lf", &stu[in].req);
        fscanf(fp, "%lf", &stu[in].opt);
        fscanf(fp, "%lf", &stu[in].clan);
        fscanf(fp, "%lf", &stu[in].sum);
        in++;
    }
    fclose(fp);
    printf("学号  姓名           必修课成绩    选修课成绩  C实验成绩    总分\t\n");
    for(a=0;a<in;a++)
    {
        printf("%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n",stu[a].num,stu[a].name,stu[a].req,stu[a].opt,stu[a].clan,stu[a].sum);
    }

}
void del(){
    FILE *fp;
    int number,i,j;
    int in=0;
    char ch[2];

    if((fp=fopen("student.txt","r+"))==NULL)
    {
        printf("无法打开\n");
        return;
    }
    while(!feof(fp))
    {
        if(fread(&stu[in],LEN,1,fp)==1)
            in++;
    }
    fclose(fp);
    if(in==0){
        printf("没有信息记录\n");
        return;
    }
    printf("请输入想要删除信息的学号：");
    scanf("%d",&number);
    for(i=0;i<in;i++) {if(number==stu[i].num) {
            printf("找到您要删除的信息了，确认要删除吗？（输入字母y确认删除，输入n则取消删除）");
            scanf("%s",ch);
            if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
            {for(j=i;j<in;j++)  //重新写入
                {stu[j]=stu[j+1];}
                in--;}
            else if(strcmp(ch,"n")==0||strcmp(ch,"N")==0)
            { printf("您已取消删除！\n");
                return;
            }
            break;
        }
    }
    if(i==in) {printf("没有找到您想要删除的学号！\n");
        return;}
    if((fp=fopen("student.txt","wb"))==NULL)
    {
        printf("无法打开\n");
        return;
    }
    for(j=0;j<in;j++)
        if(fwrite(&stu[j],LEN,1,fp)!=1)
        {
            printf("无法保存！\n");
            //getch();  //没有返回显示的输入
        }
    fclose(fp);
    printf("已经删除了您要删除的信息！\n");
}
void search(){
    FILE *fp;
    int number,a;
    int in=0;
    char i[2];
    if((fp=fopen("student.txt","rb"))==NULL)
    {
        printf("无法打开\n");
        return;
    }
    while(!feof(fp))
    {
        if(fread(&stu[in],LEN,1,fp)==1)
            in++;
    }
    fclose(fp);
    if(in==0){
        printf("没有信息记录\n");
        return;
    }
    printf("请输入您要查找的学号：");
    scanf("%d",&number);
    for(a=0;a<in;a++)
    { if(number==stu[a].num){
            printf("找到该学生的成绩信息了，是否要进行显示？（输入字母y进行显示，输入n则取消显示）");
            scanf("%s",i);
            if(strcmp(i,"y")==0||strcmp(i,"Y")==0) {
                printf("学号  姓名           必修课成绩    选修课成绩  C实验成绩    总分\t\n");
                printf("%-8d%-15s%-12.1lf%-12.1lf%-12.1lf%-12.1lf\n",stu[a].num,stu[a].name,stu[a].req,stu[a].opt,stu[a].clan,stu[a].sum);
            }
            else if(strcmp(i,"n")==0||strcmp(i,"N")==0){
                printf("您已经取消了显示！\n");
                return;
            }
            break;
        }
    }
    if(a==in) printf("没有找到您想要显示的信息！\n");
}
void change(){
    FILE *fp;
    int number,a,b;
    int in=0;
    if((fp=fopen("student.txt","r+"))==NULL)
    {
        printf("无法打开\n");
        return;
    }
    while(!feof(fp))
    {
        if(fread(&stu[in],LEN,1,fp)==1)
            in++;
    }
    fclose(fp);
    if(in==0){
        printf("没有信息记录\n");
        return;
    }
    printf("请输入你想要修改信息的学生的学号：");
    scanf("%d",&number);
    for(a=0;a<in;a++)
    {if(number==stu[a].num) {
            printf("找到该信息，可以开始修改！\n");
            printf("姓名:");
            scanf("%s",stu[a].name);
            printf("必修课成绩：");
            scanf("%lf",&stu[a].req);
            printf("选修课成绩：");
            scanf("%lf",&stu[a].opt);
            printf("c语言实验课成绩：");
            scanf("%lf",&stu[a].clan);
            stu[a].sum=stu[a].req+stu[a].opt+stu[a].clan;
            if((fp=fopen("student.txt","wb"))==NULL){
                printf("无法打开\n");
                return;
            }
            for(b=0;b<in;b++)
                if(fwrite(&stu[b],LEN,1,fp)!=1)
                {  printf("无法保存!\n");
                    //getch();
                }
            fclose(fp);
            break;
        }
    }
    if(a==in) printf("并没有找到这条信息！\n");
}
void sums(){
    FILE *fp;
    int in=0;
    if((fp=fopen("student.txt","r+"))==NULL)
    {
        printf("无法打开！\n");
        return;
    }
    while(!feof(fp))
        if(fread(&stu[in],LEN,1,fp)==1) in++;
    if(in==0) {printf("没有信息记录！\n");
        fclose(fp);
        return;
    }
    printf("共有%d条学生信息记录！\n",in);
    fclose(fp);
}
void addanew(){
    FILE *fp;
    int number,a,b,c,nunum;
    int in=0;
    if((fp=fopen("student.txt","r"))==NULL)
    {
        printf("无法打开！\n");
        return;
    }

//    while(!feof(fp))
//        if(fread(&stu[in],LEN,1,fp)==1) in++;


    if(in==0) {printf("没有信息记录！\n");

        fclose(fp);
        //return;
    }


    printf("请输入你想在哪个地方添加一条新信息？（输入数字）\n");
    scanf("%d",&number);           //a后插入
    for(a=0;a<in;a++)
        if(number==stu[a].num) break;
    if(a==in) {
        printf("没有该项学号可供辨认插入！\n");
        return;
    }
    for(b=in-1;b>a;b--)
        stu[b+1]=stu[b];
    printf("输入您想要插入的新信息!\n");
    printf("学号：");
    scanf("%d",&nunum);
    for(c=0;c<=in;c++)
        if(stu[c].num==nunum){
            printf("抱歉，学号重复，按任意键退出!\n");
            //getch();
            fclose(fp);
            return;
        }
    stu[a+1].num=nunum;
    printf("姓名:");
    scanf("%s",stu[a+1].name);
    printf("必修课成绩：");
    scanf("%lf",&stu[a+1].req);
    printf("选修课成绩：");
    scanf("%lf",&stu[a+1].opt);
    printf("c语言实验课成绩：");
    scanf("%lf",&stu[a+1].clan);
    stu[a+1].sum=stu[a+1].req+stu[a+1].opt+stu[a+1].clan;
    if((fp=fopen("student.txt","a+"))==NULL)
    {
        printf("无法打开!\n");
        return;
    }
    for(c=0;c<=in;c++)
        if(fwrite(&stu[c],LEN,1,fp)!=1) {printf("无法保存！\n");
            //getch();
            fclose(fp);
            return;
        }


}
void order(){
    FILE *fp;
    struct student t;
    int a,b;
    int in=0;
    if((fp=fopen("student.txt","r+"))==NULL)
    {
        printf("无法打开！\n");
        return;
    }
    while(!feof(fp))
        if(fread(&stu[in],LEN,1,fp)==1) in++;
    fclose(fp);
    if(in==0){
        printf("没有信息记录！\n");
        return;
    }
    if((fp=fopen("student.txt","wb"))==NULL)
    {
        printf("无法打开！\n");
        return;
    }
    for(a=0;a<in-1;a++)
        for(b=a+1;b<in;b++)
            if(stu[a].num>stu[b].num)
            {   t=stu[a];
                stu[a]=stu[b];
                stu[b]=t;
            }
    if((fp=fopen("student.txt","wb"))==NULL)
    {
        printf("无法打开！\n");
        return;
    }
    for(a=0;a<in;a++)
        if(fwrite(&stu[a],LEN,1,fp)!=1)
        {
            printf("无法保存！\n");
//            getch();
        }
    fclose(fp);
    printf("已保存!\n");
}
int main()
{
    int k;
    system("cls");
    first();
    scanf("%d",&k);
    while(k)
    {
        if(k==1) {system("cls");add();}
        else if(k==2) {system("cls");show();addanew();}
        else if(k==3) {system("cls");show();change();}
        else if(k==4) {system("cls");show();del();}
        else if(k==5) {system("cls");search();}
        else if(k==6) {system("cls");show();}
        else if(k==7) {system("cls");order();}
        else if(k==8) {system("cls");sums();}
        else if(k==9) {exit(0);}
//        getch();
//        system("pause");
//        system("cls");
        first();
        scanf("%d",&k);
    }
    return 0;
}
