#include "login2.h"
#include <QMessageBox>
//#include <qdatetime.h>
#include<QDateTime>
#include <QTabWidget>

LoginForm2::LoginForm2(QDialog *parent) :
        QDialog(parent)
{

    setMinimumHeight(20);
    m_fontColor = QColor(69, 78, 85);
    m_barColor = QColor(166, 186, 201);
    m_tabColor = QColor(216, 227, 235);
    m_index = 0;
    m_tabsize = QSize(60, 40);
    m_tabs.append("tab1");
    m_tabs.append("tab2");
    m_tabs.append("tab3");
    m_tabs.append("tab4");
    m_tabs.append("tab5");
    m_tabs.append("tab6");
    m_tabs.append("tab7");
    m_tabs.append("tab8");

    //InitTimer();
    //ShowDateTime();
    //设置窗体标题
    this->setWindowTitle(tr("NEU-CSE考试系统"));
    //用户名Label
    userHello = new QLabel(this);   //new一个标签对象
    userHello->move(70,40);         //移动到(70,80)位置(Label左上角坐标，相对于父窗体)
    userHello->setText("欢迎进入考试系统");  //设置标签文本

    //用户名Label
    userNameLbl = new QLabel(this);   //new一个标签对象
    userNameLbl->move(70,80);         //移动到(70,80)位置(Label左上角坐标，相对于父窗体)
    userNameLbl->setText("您的作答");  //设置标签文本

    //用户名输入框
    userNameLEd = new QLineEdit(this);
    userNameLEd->move(120,80);
    userNameLEd->setPlaceholderText(tr("请输入用户名!"));//占位符

    //密码Label
    pwdLbl = new QLabel(this);
    pwdLbl->move(80,130);
    pwdLbl->setText("密码:");

    //密码输入框
    pwdLEd = new QLineEdit(this);
    pwdLEd->move(120,130);
    pwdLEd->setPlaceholderText("请输入密码!");
    pwdLEd->setEchoMode(QLineEdit::Password);//输入的密码以圆点显示

    //登录按钮
    loginBtn = new QPushButton(this);
    loginBtn->move(80,200);
    loginBtn->setText("提交");

    //退出按钮
    exitBtn = new QPushButton(this);
    exitBtn->move(170,200);
    exitBtn->setText("退出");

    //单击登录按钮时 执行 LoginForm::login 槽函数(自定义)；单击退出按钮时 执行 LoginForm::close 槽函数(窗体的关闭函数，不用自己写)
    connect(loginBtn,&QPushButton::clicked,this,&LoginForm2::login);
    connect(exitBtn,&QPushButton::clicked,this,&LoginForm2::close);


}

void LoginForm2::login()
{
    //获得userNameLEd输入框的文本：userNameLEd->text()；
    //trimmed()去掉前后空格
    //tr()函数，防止设置中文时乱码
    if(userNameLEd->text().trimmed() == tr("liang") && pwdLEd->text() == tr("123456"))
    {
        accept();//关闭窗体，并设置返回值为Accepted
    }
    else
    {                              //标题              内容                OK按钮
        QMessageBox::warning(this, tr("恭喜！"),tr("您的内容已经提交！"),QMessageBox::Ok);

        // 清空输入框内容
        userNameLEd->clear();
        pwdLEd->clear();

        //光标定位
        userNameLEd->setFocus();
    }
}

void LoginForm2::InitTimer()
{
    if(NULL == m_timer)
        m_timer = new QTimer;
    //设置定时器是否为单次触发。默认为 false 多次触发
    m_timer->setSingleShot(false);
    //启动或重启定时器, 并设置定时器时间：毫秒
    m_timer->start(2000);
    //定时器触发信号槽
    connect(m_timer, SIGNAL(timeout()), this, SLOT(ImageTimerTimeout()));
}

void LoginForm2::TimerTimeOut() {
    //判断定时器是否运行
    if (m_timer->isActive())
        m_timer->stop();   //停止定时器
    //执行定时器触发时需要处理的业务
}

//void LoginForm2::ShowDateTime() {
//    QDateTime *dateTime = new QDateTime();
//    //获取当前日期时间对象
//
//    QString _str = dateTime->toString("yyyy-MM-dd ddd hh:mm:ss");
//    //日期时间格式化
//    //这里显示是：2015-06-15 周一 10:43:06
//
//    pwdLbl->setText(_str);
//    //显示再某个label控件上，这里的lable你自己new一个出来，或者直接页面拖控件即可
//
//}

void LoginForm2::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
//    QRect bar_rect = rect();
    painter.setBrush(Qt::NoBrush);


    QRect bar_rect(0, 5, m_tabsize.width()*m_tabs.count(), m_tabsize.height());
    painter.setPen(QPen(QBrush(m_barColor), 0.01));
    painter.setBrush(QBrush(m_barColor));
    painter.drawRect(bar_rect);

    QRect active_rect(QPoint(m_tabsize.width()*m_index, 0), m_tabsize);
    painter.setPen(QPen(QBrush(m_tabColor), 0.01));
    painter.setBrush(QBrush(m_tabColor));
    painter.drawRect(active_rect);

    QTextCodec* codec = QTextCodec::codecForName("UTF-8");

    QRect button_rect(QPoint(0, 0), m_tabsize);
    painter.setPen(QPen(QBrush(m_fontColor), 0));
    painter.setFont(font());
    for(int i = 0; i < m_tabs.count(); i++)
        painter.drawText(m_tabsize.width()*i, 0, button_rect.width(), button_rect.height(), Qt::AlignCenter, codec->toUnicode(m_tabs.at(i)));




}

void LoginForm2::mousePressEvent(QMouseEvent* e)
{
    int x = e->x();
    int i = x/m_tabsize.width();
    if(i > m_tabs.count()-1)
        return;
    m_index = i;
    emit currentChange(m_index);
    update();
}

int LoginForm2::addTab(const char* text)
{
    m_tabs << text;
    return m_tabs.count()-1;
}

void LoginForm2::setTabText(int index, const char* text)
{
    m_tabs.replace(index, text);
}