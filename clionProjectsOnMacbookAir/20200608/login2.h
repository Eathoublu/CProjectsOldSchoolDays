#ifndef LOGINFORM2_H
#define LOGINFORM2_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTime>
#include <QTimer>
#include <QDate>
#include <qdatetime.h>
#include <QtGui>
#include <QObject>


class LoginForm2 : public QDialog
{
Q_OBJECT //使用信号与槽需要的宏
public:
    explicit LoginForm2(QDialog *parent = 0);  //explicit 防止歧义

signals:

public slots:
    void login();//点击登录按钮是执行的槽函数
    //void ShowDateTime();
    void InitTimer();
    void TimerTimeOut();


public:

    int addTab(const char*);
    void setTabText(int, const char*);

private:
    QColor m_fontColor;
    QColor m_barColor;
    QColor m_tabColor;
    int m_index;
    QSize m_tabsize;
    QList<const char*> m_tabs;


signals:
    void currentChange(int);

protected:
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);

private:
    QTimer *m_timer;



private:
    QLabel *userNameLbl;         //"用户名"标签
    QLabel *pwdLbl;              //"密码"标签
    QLabel *userHello;         //"用户名"标签
    QLineEdit *userNameLEd;      //用户名编辑行
    QLineEdit *pwdLEd;           //密码编辑行
    QPushButton *loginBtn;       //登录按钮
    QPushButton *exitBtn;        //退出按钮


};

#endif // LOGINFORM_H

