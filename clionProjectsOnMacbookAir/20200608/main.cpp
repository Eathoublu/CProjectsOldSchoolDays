//#include<QtWidgets/QApplication>
//#include<QtWidgets/QLabel>
//
//int main(int args,char** argv)
//{
//    QApplication app(args,argv);
//    QWidget w;
//    w.setGeometry(500, 200, 320, 240);
//    QLabel *hello=new QLabel("<font color-red>Hello <i>World!</i>""</font>",0);
//    hello->show();
//    return app.exec();
//}

#include <QApplication>
#include "mainform.h"
#include "loginform.h"
#include "login2.h"

int main(int argc,char** argv)
{
    QApplication app(argc,argv);


    LoginForm login;
    LoginForm2 login2;
    int res;
    res = login.exec();

    if(res == 1){
        login2.exec();
    } else if(res==2){
        //login2.exec();
        return 0;
    }

    //MainForm *main = new MainForm();
    //main->setWindowTitle("欢迎使用NEU-CSE考试系统");//设置窗体标题
    //main->show();


    //app.exec();
    //login2.exec();
    return 0;


//    if (login.exec() == QDialog::Accepted)//调用login.exec()，阻塞主控制流，直到完成返回，继续执行主控制流
//    {
//        main->show();
//        return app.exec();
//    }
//    else return 0;
}

