
#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
//#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
//#include<conio.h>
using namespace std;
ofstream out;
ifstream in;
int i=0;
int tru=0;
int fal=1;
int wan=0;
void ouser(int which);
void FIRST();
void deleteaori();
void changepassword();
void ShowList();
void setOrdinary();
void firstsetOrdinary();
void before();
void auser();
void inputinf_();
void scanhouseinf_();
void searchhouseinf_();
void withdrawhouse();
void empty_message();
void searchnum();
void searchused();
void searchID();
void getnewone(); //添加一个房源信息
void change(); //更改房源信息
void deletearoom(); //删除房源信息
void loadinf();
void saveinf();
int _global;
struct House{
public:
    int i;
    string num;
    string price;
    int used;
    string ID;
    string name;
    string contact;
    void Settle(string n,string p,int u,string i,string nna,string c){
        num=n;
        price=p;
        used=u;
        ID=i;
        name=nna;
        contact=c;
    }
    string getnum(){return num;}
    int getused(){return used;}
    string getID(){return ID;}
    string getname(){return name;}
    string getcontact(){return contact;}
    string getprice(){return price;}
    void setnum(string n){num=n;}
    void setused(int u){used=u;}
    void setID(string id){ID=id;}
    void setname(string n){name=n;}
    void setcontact(string c){contact=c;}
    void changecontact(string newcontact)
    {
        contact=newcontact;
    }
    void changeprice(string newprice){
        price=newprice;
    }
}house[100];


class User{
public:
    string name;
    string password;
    User(){}
    User(string name,string password):name(name),password(password){}
    ~User(){}
    void setname(string n){name=n;}
    void setpassword(string p){password=p;}
    string getname(){return name;}
    string getpassword(){return password;}
    int login(string n,string p);
    void change(string newpassword);
};
void User::change(string newpassword){
    password=newpassword;
}                     //修改密码
class Ordinary:public User{
public:
    Ordinary(){}
    Ordinary(string name,string password)
    {setname(name);
        setpassword(password);
    }
    ~Ordinary(){}
    void SettleOrdinary(string n,string p){
        setname(n);
        setpassword(p);}
    int login(string n,string p){
        if(getname()==n){
            if(getpassword()==p) return 1;
            else return 2;
        }

    }
};

class Admin:public User{
public:
    string name;
    string password;
    Admin():User("admin","000000"){}
    Admin(string name,string password)
    {setname(name);
        setpassword(password);
    }
    ~Admin(){}
    int login(string n,string p){
        if(n=="admin"){
            if(p=="000000") return 4;
            else return 5;
        }
    }
};
Ordinary olist[10];

int total=5; //房间总数量
int total1=10 ;

void Menushow(){
    cout<<endl;
    cout<<"\t\t            欢迎进入房屋寻租系统             "<<endl;
    cout<<"请选择您的功能：                     "<<endl;
    cout<<"0.我要选择租房"<<endl;
    cout<<"1.房屋信息浏览"<<endl;
    cout<<"2.房屋信息查询"<<endl;
    cout<<"3.我要选择退房"<<endl;
    cout<<"4.退出寻租系统"<<endl;
    cout<<endl;
}


//读取数据
void loadData()
{
    int i=0;
    ifstream scan("house.txt",ios::in);
//    if(scan==NULL){
//        cerr<<"No valuable text!"<<endl;
//        return;
//    }
    while(!scan.eof()){
        scan>>house[i].num>>
            house[i].price>>house[i].used
            >>house[i].name>>house[i].ID
            >>house[i].contact;
        i++;
    }
    scan.close();
    total=i;
}

void loadinf()
{
    int i=0;
    ifstream scan("olist.txt",ios::in);
//    if(scan==NULL){
//        cerr<<"No valuable text!"<<endl;
//        return;
//    }

    while(!scan.eof()){
        scan>>olist[i].name>> olist[i].password;
        //  cout<<olist[i].name<< olist[i].password<<endl;
        i++;
    }
    //  cout<<i<<"loadinfnum+1"<<endl;
    scan.close();
    total1=i;
}
//保存数据
void saveData()
{
    int c=total;
//    cout<<"enter"<<endl;
    ofstream fout("house.txt",ios::out);
    for(int i=0;i<=c;i++){
        if(house[i].used==2){
            continue;
        }
        if (i!=c&&house[i+1].used!=2)
        {
            fout<<house[i].num<<" "
                <<house[i].price<<" "<<house[i].used<<" "
                <<house[i].name<<" "<<house[i].ID<<" "<<
                house[i].contact<<endl;
            cout<<house[i].num<<" "
                <<house[i].price<<" "<<house[i].used<<" "
                <<house[i].name<<" "<<house[i].ID<<" "<<
                house[i].contact<<endl;
        }
        else
        {
            fout<<house[i].num<<" "
                <<house[i].price<<" "<<house[i].used<<" "
                <<house[i].name<<" "<<house[i].ID<<" "<<
                house[i].contact;
            cout<<house[i].num<<" "
                <<house[i].price<<" "<<house[i].used<<" "
                <<house[i].name<<" "<<house[i].ID<<" "<<
                house[i].contact;
        }
    }
    fout.close();
}
void saveinf()
{
    int c=total1;
    //  cout<<c<<"ttt"<<endl;
    ofstream fout("olist.txt",ios::out);
    for(int i=0;i<=c;i++){
        //    cout<<"bbb"<<i<<endl;
        if(olist[i].name=="0000"){
            continue;
        }
        if (i!=c)
        {
            fout<<olist[i].name<<" " <<olist[i].password<<endl;

        }
        else
        {
            fout<<olist[i].name<<" " <<olist[i].password;

        }

    }
    fout.close();
}

void scanhouseinf_(){
    int i=0;

    cout<<"房号"<<"    "<<"价格"<<
        "    "<<"可租否"<<"    "<<"姓名"<<
        "    "<<"ID号码"<<"      "<<"联系方式"<<endl;
    for(i=0;i<total;i++)
    {
        if (house[i].used == 2){
            continue;
        }

        cout<<setw(4)<<house[i].num<<
            setw(9)<<house[i].price<<setw(9)<<
            house[i].used<<setw(10)<<house[i].name
            <<setw(10)<<house[i].ID<<setw(20)<<
            house[i].contact;
        cout<<"                                              "
            <<endl;
    }
}

void inputinf_(){
    string yournum;
    int b;
    cout<<"现在可租的房屋信息为："<<endl;
    empty_message();
    cout<<"请输入看中的房屋的编号："<<endl;
    cin>>yournum;
    int c=0;
    bool isOk=false;
    for( c=0;c<total;c++){
        if((house[c].num==yournum)&&(house[c].used==tru)){
            b=c;
            c++;
            isOk=true;
        }
    }
    if (!isOk)
    {
        cout<<"未找到该房间信息"<<endl;
        return;
    }

    cout<<"确认选择该套房？"<<endl;
    cout<<"\t\t是[1] 否[2]"<<endl;
    cout<<"\t\tq请输入您的选择(1/2)"<<endl;
    int yourchoose;
    cin>>yourchoose;
    if(yourchoose==2){
        return;
    }
    cout<<"请输入您的个人信息"<<endl;
    cout<<"请输入您的姓名："<<endl;
    cin>>house[b].name;
    cout<<"请输入您的身份证号码:"<<endl;
    cin>>house[b].ID;
    cout<<"请输入您的联系方式(手机号）:"<<endl;
    cin>>house[b].contact;
    house[b].used=1;
    cout<<"租房成功！"<<endl;
    saveData();
}

void withdrawhouse(){
    string yournum;
    int b;

    cout<<"请输入您的房号："<<endl;
    cin>>yournum;
    int c=0;


    bool isOk=false;
    for(int c=0;c<total;c++){
        if((house[c].num==yournum)&&(house[c].used==1)){
            b=c;
            c++;
            isOk=true;
        }
    }
    if (isOk)
    {
        house[b].setname("空\0");
        house[b].setID("空\0");
        house[b].setcontact("空\0");
        house[b].setused(0);
        cout<<"退房成功！"<<endl;
        saveData();
    }
    else
    {
        cout<<"未找到该房间信息"<<endl;
    }

}

void searchhouseinf_(){


    int i;

    cout<<"请输入您要选择的功能："<<endl;
    cout<<"(1)按照房间号查找"<<endl;
    cout<<"(2)按照未租出查找"<<endl;
    cout<<"(3)按照ID号码查找"<<endl;
    cin>>i;
    switch(i){
        case 1:searchnum();break;
        case 2:searchused();break;
        case 3:searchID();break;
        case 4:break;
    }



}

void searchused()
{

    cout<<"空房间是:"<<endl;
    cout<<"房号"<<"    "<<"价格"<<endl;


    bool isOk=false;
    for(int k=0;k<total;k++)
    {
        if(house[k].used==0)
        {
            isOk=true;
            cout<<setw(4)<<house[k].num<<setw(7)<<house[k].price<<endl;
        }
    }
    if (!isOk)
    {
        cout<<"未找到空房间信息，全部已满"<<endl;
    }

}
void searchnum()
{
    string n;
    cout<<"请输房间号:";
    cin>>n;

    bool isOk=false;
    for(int k=0;k<total;k++)
    {
        if(house[k].num==n)
        {
            cout<<"房号"<<"    "<<"价格"<<
                "    "<<"可租否"<<"    "<<"姓名"<<
                "    "<<"ID号码"<<"      "<<"联系方式"<<endl;
            cout<<setw(4)<<house[k].num<<setw(7)<<
                house[k].price<<setw(7)<<
                house[k].used<<setw(11)<<house[k].name
                <<setw(11)<<house[k].ID<<setw(11)
                <<house[k].contact;
            isOk=true;
            break;
        }
    }
    if (!isOk)
    {
        cout<<"未找到该房间信息"<<endl;
    }

}
void searchID()
{

    string n;
    cout<<"请输入ID: ";
    cin>>n;


    bool isOk=false;
    for(int k=0;k<total;k++)
    {
        house[k].setID(n);
        if(house[k].getID()=="0")
        {
            cout<<"房号"<<"    "<<"价格"<<
                "    "<<"可租否"<<"    "<<"姓名"<<
                "    "<<"ID号码"<<"      "<<"联系方式"<<endl;
            cout<<setw(4)<<house[k].num<<setw(7)<<
                house[k].price<<setw(7)<<
                house[k].used<<setw(11)<<house[k].name
                <<setw(11)<<house[k].ID<<setw(11)<<
                house[k].contact;
            isOk=true;
            break;
        }
    }
    if (!isOk)
    {
        cout<<"未找到该房间信息"<<endl;
    }
}

void empty_message()
{

    int i=0;
    cout<<"房号"<<"    "<<"价格"<<endl;


    for( i=0;i<total;i++)
    {
        if(house[i].used==0)
            cout<<setw(4)<<house[i].num<<setw(9)<<house[i].price<<endl;
    }
}
void getnewone(){
    loadData();
    string nn,np,nna,ni,nc;
    int nu;
    int c;
    cout<<"请输入房号："<<endl;
    cin>>nn;
    cout<<"请输入房租："<<endl;
    cin>>np;
    do{
        cout<<"请输入可租情况(0可租 1不可租)："<<endl;
        cin>>nu;
        c=0;
        if((nu!=tru)&&(nu!=fal)) {c++;
            cout<<"您的输入似乎不符合要求，请重新输入可租或不可租！"<<endl;
        }
    }while(c!=0);
    cout<<"请输入姓名："<<endl;
    cin>>nna;
    cout<<"请输入ID号码："<<endl;
    cin>>ni;
    cout<<"请输入联系方式："<<endl;
    cin>>nc;
    int j = total;

//    for(i=0;i<total1&&house[i].num!="\0";i++){j=i;}
    house[j].num = nn;
    house[j].price = np;
    house[j].used=nu;
    house[j].name=nna;
    house[j].ID=ni;
    house[j].contact=nc;
    saveData();

    system("pause");
    system("cls");
    saveData();
}


void firstsetOrdinary(){
    string Orname;
    string OrdinaryPassword;
    int cl;
    int p;

    do{
        cout<<"请输入想要注册的用户名："<<endl;
        cin>>Orname;
        p=0;
        loadinf();
        for(int m=0;m<=total1;m++){
            if(Orname==olist[m].getname())   p++;
        }
        if(p!=0) {cout<<"对不起，您的用户名与他人重复，请重新输入！"<<endl;
            system("pause");
            system("cls");
        }
    }while(p!=0);
    do{cout<<"请输入您的密码（不要超过20位）："<<endl;
        cin>>OrdinaryPassword;
        cout<<"您的密码为"<<OrdinaryPassword<<",是否更改(确定则输入数字1，重新设置请输入数字2)"<<endl;
        cin>>cl;
        if((cl!=1)&&(cl!=2)) {cout<<"您的操作似乎有误！将返回菜单";
            system("pause");
            system("cls");
            before();
        }
    }while(cl==2);
//    int i;
    int j;
    loadinf();
//    for(i=0;i<total1&&olist[i].name!="\0";i++){j=i;}
    //   cout<<total1<<"tt"<<endl;
//    for(i =0;i<=total1;i++){
//        cout<<olist[i].name<<olist[i].password<<endl;
//    }
    j = total1;
    olist[j].name=Orname;
    olist[j].password=OrdinaryPassword;
    //   cout<<olist[j].name<<olist[j].password<<"jj"<<j<<endl;
//    total1 = j;
    saveinf();
    cout<<"设置完毕"<<endl;
    system("pause");
    system("cls");
    before();
}
void setOrdinary(){
    string Orname;
    string Orpassword;
    int cs;
    int p;
    do{
        cout<<"请输入想要注册的用户名："<<endl;
        cin>>Orname;
        p=0;
        loadinf();
        for(int m=0;m<=total1;m++){
            if(Orname==olist[m].getname())   p++;
        }
        if(p!=0) {cout<<"对不起，您的用户名与他人重复，请重新输入！"<<endl;
            system("pause");
            system("cls");
        }
    }while(p!=0);
    do{cout<<"请输入您的密码（不要超过20位）："<<endl;
        cin>>Orpassword;
        cout<<"您的密码为"<<Orpassword<<",是否更改(确定则输入数字1，重新设置请输入数字2)"<<endl;
        cin>>cs;
        if((cs!=1)&&(cs!=2)) {cout<<"您的操作似乎有误！将返回菜单";
            system("pause");
            system("cls");
            before();
        }
    }while(cs==2);
    //  cout<<"i"<<i<<endl;
    i = total1;
    olist[i].SettleOrdinary(Orname,Orpassword);
    cout<<"设置完毕"<<endl;
    saveinf();
    system("pause");
    system("cls");

    auser();

}                //添加用户

void ShowList(){
    int i=0;
    cout<<"用户名"<<"      "<<"密码"<<endl;
    for(i=0;i<total;i++)
    {
        cout<<setw(4)<<olist[i].name<<
            setw(9)<<olist[i].password;
        cout<<"                                              "
            <<endl;
    }
}            //显示用户名单

void changepassword(int which){
    loadinf();
    string old;
    int sure;
    cout<<"请输入您的原密码："<<endl;
    cin>>old;
    if(old==olist[which].getpassword()) {
        cout<<"密码正确！"<<endl;
        system("pause");
        system("cls");
        do{string newone;
            cout<<"请输入新密码:"<<endl;
            cin>>newone;
            cout<<"您的新密码是"<<newone<<",确定要设定为新密码吗？(确定则输入数字1，重新设置请输入数字2)"<<endl;
            cin>>sure;
            if(sure==1) {olist[which].change(newone);
                cout<<"您已设置了新密码！"<<endl;
                saveinf();
                system("pause");
                system("cls");
                ouser(which);
            }
            else if((sure!=1)&&(sure!=2)) {cout<<"您的操作似乎有误，将返回主界面！"<<endl;
                system("pause");
                system("cls");
                ouser(which);
            }
        }while(sure==2);
    }
    else {
        cout<<"您输入的密码有误！"<<endl;
        system("pause");
        system("cls");
        ouser(which);
    }

}                      //改密码

void deleteaori(){
    loadinf();

    for(int le=0;le<=total1;le++)
    {
        cout<<olist[le].getname()<<" "<<olist[le].getpassword()<<endl;

    }
    cout<<"您想要删除的用户信息是哪一条？"<<endl;
    int one;
    cin>>one;
    cout<<"您想要删除的是第"<<one<<"条用户信息："<<endl;
    cout<<olist[one-1].getname()<<" "<<olist[one-1].getpassword()<<endl;
    int surer;
    cout<<"确认要删除该信息吗？（确认请输入数字1，不确定请输入数字2）"<<endl;
    cin>>surer;
    if(surer==1){
        olist[one-1].name="0000";
        cout<<olist[one-1].name;
        saveinf();
        cout<<olist[one-1].name;
        system("pause");
        system("cls");
        auser();
    }
    else if(surer==2){cout<<"取消删除，将为您返回界面！"<<endl;
        system("pause");
        system("cls");
        auser();
    }
    else if((surer!=1)&&(surer!=2)){cout<<"您的输入似乎有误，将为您返回界面！"<<endl;
        system("pause");
        system("cls");
        auser();
    }
    //删除用户   即用下一个数组信息替代上一个  然后i相应减小  不显示
}
void change(){
    loadData();
    scanhouseinf_();
    string choose;
    int f,surep,surepr;
    cout<<"您想要改动第几行的数据？（输入行数）"<<endl;
    cin>>f;
    cout<<"您想要改动的是哪一项信息？（改动联系方式：输入“contact”；改动房租：输入“price”）"<<endl;
    cin>>choose;
    if(choose=="contact") {
        cout<<"您要改动的是第"<<f<<"行的联系方式!"<<endl;
        cout<<"这一行的原始联系方式情况为："<<house[f-1].getcontact()<<endl;
        do{
            string newcontact;
            cout<<"请输入您要更改的新联系方式信息："<<endl;
            cin>>newcontact;
            cout<<"您的新联系方式设置为："<<newcontact<<",确认要设定为新信息吗？（确定则输入数字1，重新设置请输入数字2）"<<endl;
            cin>>surep;
            if(surep==1) {house[f-1].changecontact(newcontact);
                cout<<"您已设置了新的联系方式！"<<endl;
            }
            else if((surep!=1)&&(surep!=2)) {cout<<"您的操作似乎有误，将返回主界面！"<<endl;
                system("pause");
                system("cls");
            }
        }while(surep==2);
    }
    else if(choose=="price") {
        cout<<"您要改动的是第"<<f<<"行的房租价格!"<<endl;
        cout<<"这一行的原始房租价格为："<<house[f-1].getprice()<<endl;
        do{
            string newprice;
            cout<<"请输入您要更改的新房租价格信息："<<endl;
            cin>>newprice;
            cout<<"您的新房租价格设置为："<<newprice<<",确认要设定为新信息吗？（确定则输入数字1，重新设置请输入数字2）"<<endl;
            cin>>surepr;
            if(surepr==1) {house[f-1].changeprice(newprice);
                cout<<"您已设置了新的房租价格！"<<endl;
            }
            else if((surepr!=1)&&(surepr!=2)) {cout<<"您的操作似乎有误，将返回主界面！"<<endl;
                system("pause");
                system("cls");
            }
        }while(surepr==2);
    }
    saveData();
}
void deletearoom(){
    loadData();
    scanhouseinf_();
    cout<<"您想要删除的房源信息是哪一条？"<<endl;
    int one;
    cin>>one;
    cout<<"您想要删除的是第"<<one<<"条房源信息："<<endl;
    cout<<house[one-1].getnum()<<" "<<house[one-1].getprice()<<" "<<house[one-1].getused()<<" "<<house[one-1].getname()<<" "<<house[one-1].getID()<<" "<<house[one-1].getcontact()<<endl;
    int surer;
    cout<<"确认要删除该信息吗？（确认请输入数字1，不确定请输入数字2）"<<endl;
    cin>>surer;
    if(surer==1){

        house[one-1].used=2;
        total--;

    }
    else if(surer==2){cout<<"取消删除，将为您返回界面！"<<endl;
        system("pause");
        system("cls");
    }
    else if((surer!=1)&&(surer!=2)){cout<<"您的输入似乎有误，将为您返回界面！"<<endl;
        system("pause");
        system("cls");
    }
    saveData();
}
void FIRST(){
    cout<<"****************************************"<<endl;
    cout<<"               登录系统                 "<<endl;
    cout<<"****************************************"<<endl;
}

void ouser(int num){
    int p;
    cout<<"(1)修改密码"<<endl;
    cout<<"(2)进入寻租系统"<<endl;
    cout<<"(3)返回系统界面"<<endl;
    cout<<"请输入您想操作的功能序号："<<endl;
    cin>>p;
    if(p==1) {
        system("pause");
        system("cls");
        changepassword(num);
        system("pause");
        system("cls");
        ouser(num);
    }
    else if(p==2){
        int option;
        Menushow();
        loadData();
        while(cin>>option){
            switch(option){
                if(option!=4){
                    case 0:inputinf_();break;
                    case 1:scanhouseinf_();break;
                    case 2:searchhouseinf_();break;
                    case 3:withdrawhouse();break;
                    case 4:ouser(1);break;
                    default:cout<<"404 not found"<<endl;break;
                }
            }
            Menushow();
        }
    }
    else if(p==3) {
        system("pause");
        system("cls");
        before();
    }
    else {
        cout<<"您的操作似乎有误！"<<endl;
        system("pause");
        system("cls");
        ouser(num);
    }               // 用户的界面
}
void auser(){
    cout<<"(1)添加用户"<<endl;
    cout<<"(2)删除用户"<<endl;
    cout<<"(3)查看用户"<<endl;
    cout<<"(4)添加房源信息"<<endl;
    cout<<"(5)显示房源信息"<<endl;
    cout<<"(6)修改房源信息"<<endl;
    cout<<"(7)删除房源信息"<<endl;
    cout<<"(8)返回系统界面"<<endl;
    cout<<"您想要使用的功能是？"<<endl;
    loadData();
    int chose;
    while(cin>>chose){
        switch(chose){
            if(chose!=8){
                case 1:setOrdinary();
                system("pause");
                system("cls");
                auser();break;
                case 2:deleteaori();
                system("pause");
                system("cls");
                auser();break;
                case 3:ShowList();
                system("pause");
                system("cls");
                auser();break;
                case 4:getnewone();
                system("pause");
                system("cls");
                auser();break;
                case 5:scanhouseinf_();
                system("pause");
                system("cls");
                auser();break;
                case 6:change();
                system("pause");
                system("cls");
                auser();break;
                case 7:deletearoom();
                system("pause");
                system("cls");
                auser();break;
                case 8:before();
                system("pause");
                system("cls");
                before();break;
                default:cout<<"您的操作似乎有误！"<<endl;
                system("pause");
                system("cls");
                auser();break;

            }
        }
    }
    saveData();
}
void before(){
    int time=0;
    cout<<"欢迎登录系统"<<endl;
    cout<<"1.登录"<<endl;
    cout<<"2.注册新用户"<<endl;
    int a;
    int n;
    cin>>a;
    if(a==2){
        system("pause");
        system("cls");
        if(i==0) firstsetOrdinary();
        else setOrdinary();
    }
    else if(a==1){
        system("pause");
        system("cls");
//        cout<<"fff"<<endl;
        FIRST();
        loadinf();
        int ck;
        string nameone;
        cout<<"用户名：";
        cin>>nameone;
        char ch, p[20];
        string password;
        cout<<"密码：";
        do{int k= 0;
//            while((ch=getch())!='\r')
//            {
//                if(ch=='\b')
//                {
//                    if(k>0)
//                    {
//                        k--;
//                        printf("\b \b");// 密码支持退格的实现
//                    }
//                    else
//                        putchar(7);
//                }
//                else
//                {
//                    p[k++]=ch;
//                    printf("*");
//                }
//            }
//            p[k]='\0';
//
//            cout<<endl;
            password=string(p);
            cin>>password;
            system("pause");
            if(nameone=="admin"){
                Admin A;
                ck=A.login(nameone,password);
            }
            for(n=0;n<=total1;n++){
                if(olist[n].getname()==nameone) {
                    ck=olist[n].login(nameone,password);
                    break;
                }}
            if(ck==1){
                cout<<"用户登录成功！"<<endl;
                system("pause");
                system("cls");
                ouser(n);
            }
            else if(ck==4){
                cout<<"管理员登录成功！"<<endl;
                system("pause");
                system("cls");
                auser();
            }
            else if((ck!=1)&&(ck!=4)) {cout<<"您的密码输入错误！请重新输入！"<<endl;
                time++;
                system("pause");
                system("cls");
                if(time>3){cout<<"密码输入错误超过三次!"<<endl;
                    system("pause");
                    system("cls");
                    before();
                }
            }
        }while((ck==2)||(ck==5));
    }
}
int main()
{
    before();
    return 0;
}
