#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

#define U 1
#define D 2
#define L 3
#define R 4 //…ﬂµƒ◊¥Ã¨£¨U£∫…œ £ªD£∫œ¬£ªL:◊Û R£∫”“

typedef struct SNAKE //…ﬂ…Ìµƒ“ª∏ˆΩ⁄µ„
{
    int x;
    int y;
    struct SNAKE *next;
}snake;

//»´æ÷±‰¡ø//
int score=0,add=10;//◊‹µ√∑÷”Î√ø¥Œ≥‘ ≥ŒÔµ√∑÷°£
int status,sleeptime=200;//√ø¥Œ‘À––µƒ ±º‰º‰∏Ù
snake *head, *food;//…ﬂÕ∑÷∏’Î£¨ ≥ŒÔ÷∏’Î
snake *q;//±È¿˙…ﬂµƒ ±∫Ú”√µΩµƒ÷∏’Î
int endgamestatus=0; //”Œœ∑Ω· ¯µƒ«Èøˆ£¨1£∫◊≤µΩ«Ω£ª2£∫“ßµΩ◊‘º∫£ª3£∫÷˜∂ØÕÀ≥ˆ”Œœ∑°£

//…˘√˜»´≤ø∫Ø ˝//
void Pos();
void creatMap();
void initsnake();
int biteself();
void createfood();
void cantcrosswall();
void snakemove();
void pause();
void gamecircle();
void welcometogame();
void endgame();
void gamestart();

void Pos(int x,int y)//…Ë÷√π‚±ÍŒª÷√
{
    COORD pos;
    HANDLE hOutput;
    pos.X=x;
    pos.Y=y;
    hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput,pos);
}

void creatMap()//¥¥Ω®µÿÕº
{
    int i;
    for(i=0;i<58;i+=2)//¥Ú”°…œœ¬±ﬂøÚ
    {
        Pos(i,0);
        printf("°ˆ");
        Pos(i,26);
        printf("°ˆ");
    }
    for(i=1;i<26;i++)//¥Ú”°◊Û”“±ﬂøÚ
    {
        Pos(0,i);
        printf("°ˆ");
        Pos(56,i);
        printf("°ˆ");
    }
}

void initsnake()//≥ı ºªØ…ﬂ…Ì
{
    snake *tail;
    int i;
    tail=(snake*)malloc(sizeof(snake));//¥”…ﬂŒ≤ø™ º£¨Õ∑≤Â∑®£¨“‘x,y…Ë∂®ø™ ºµƒŒª÷√//
    tail->x=24;
    tail->y=5;
    tail->next=NULL;
    for(i=1;i<=4;i++)
    {
        head=(snake*)malloc(sizeof(snake));
        head->next=tail;
        head->x=24+2*i;
        head->y=5;
        tail=head;
    }
    while(tail!=NULL)//¥”Õ∑µΩŒ™£¨ ‰≥ˆ…ﬂ…Ì
    {
        Pos(tail->x,tail->y);
        printf("°ˆ");
        tail=tail->next;
    }
}

int biteself()//≈–∂œ «∑Ò“ßµΩ¡À◊‘º∫
{
    snake *self;
    self=head->next;
    while(self!=NULL)
    {
        if(self->x==head->x && self->y==head->y)
        {
            return 1;
        }
        self=self->next;
    }
    return 0;
}

void createfood()//ÀÊª˙≥ˆœ÷ ≥ŒÔ
{
    snake *food_1;
    srand((unsigned)time(NULL));
    food_1=(snake*)malloc(sizeof(snake));
    while((food_1->x%2)!=0) //±£÷§∆‰Œ™≈º ˝£¨ πµ√ ≥ŒÔƒ‹”Î…ﬂÕ∑∂‘∆‰
    {
        food_1->x=rand()%52+2;
    }
    food_1->y=rand()%24+1;
    q=head;
    while(q->next==NULL)
    {
        if(q->x==food_1->x && q->y==food_1->y) //≈–∂œ…ﬂ…Ì «∑Ò”Î ≥ŒÔ÷ÿ∫œ
        {
            free(food_1);
            createfood();
        }
        q=q->next;
    }
    Pos(food_1->x,food_1->y);
    food=food_1;
    printf("°ˆ");
}

void cantcrosswall()//≤ªƒ‹¥©«Ω
{
    if(head->x==0 || head->x==56 ||head->y==0 || head->y==26)
    {
        endgamestatus=1;
        endgame();
    }
}

void snakemove()//…ﬂ«∞Ω¯,…œU,œ¬D,◊ÛL,”“R
{
    snake * nexthead;
    cantcrosswall();

    nexthead=(snake*)malloc(sizeof(snake));
    if(status==U)
    {
        nexthead->x=head->x;
        nexthead->y=head->y-1;
        if(nexthead->x==food->x && nexthead->y==food->y)//»Áπ˚œ¬“ª∏ˆ”– ≥ŒÔ//
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else //»Áπ˚√ª”– ≥ŒÔ//
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            Pos(q->next->x,q->next->y);
            printf(" ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==D)
    {
        nexthead->x=head->x;
        nexthead->y=head->y+1;
        if(nexthead->x==food->x && nexthead->y==food->y) //”– ≥ŒÔ
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else //√ª”– ≥ŒÔ
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            Pos(q->next->x,q->next->y);
            printf(" ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==L)
    {
        nexthead->x=head->x-2;
        nexthead->y=head->y;
        if(nexthead->x==food->x && nexthead->y==food->y)//”– ≥ŒÔ
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else //√ª”– ≥ŒÔ
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            Pos(q->next->x,q->next->y);
            printf(" ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==R)
    {
        nexthead->x=head->x+2;
        nexthead->y=head->y;
        if(nexthead->x==food->x && nexthead->y==food->y)//”– ≥ŒÔ
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else //√ª”– ≥ŒÔ
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("°ˆ");
                q=q->next;
            }
            Pos(q->next->x,q->next->y);
            printf(" ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(biteself()==1) //≈–∂œ «∑Òª·“ßµΩ◊‘º∫
    {
        endgamestatus=2;
        endgame();
    }
}

void pause()//‘›Õ£
{
    while(1)
    {
        Sleep(300);
        if(GetAsyncKeyState(VK_SPACE))
        {
            break;
        }

    }
}

void gamecircle()//øÿ÷∆”Œœ∑
{

    Pos(64,15);
    printf("≤ªƒ‹¥©«Ω£¨≤ªƒ‹“ßµΩ◊‘º∫\n");
    Pos(64,16);
    printf("”√°¸.°˝.°˚.°˙∑÷±øÿ÷∆…ﬂµƒ“∆∂Ø.");
    Pos(64,17);
    printf("F1 Œ™º”ÀŸ£¨F2 Œ™ºıÀŸ\n");
    Pos(64,18);
    printf("ESC £∫ÕÀ≥ˆ”Œœ∑.space£∫‘›Õ£”Œœ∑.");
    Pos(64,20);
    printf("c”Ô—‘—–æø÷––ƒ www.dotcpp.com");
    status=R;
    while(1)
    {
        Pos(64,10);
        printf("µ√∑÷£∫%d ",score);
        Pos(64,11);
        printf("√ø∏ˆ ≥ŒÔµ√∑÷£∫%d∑÷",add);
        if(GetAsyncKeyState(VK_UP) && status!=D)
        {
            status=U;
        }
        else if(GetAsyncKeyState(VK_DOWN) && status!=U)
        {
            status=D;
        }
        else if(GetAsyncKeyState(VK_LEFT)&& status!=R)
        {
            status=L;
        }
        else if(GetAsyncKeyState(VK_RIGHT)&& status!=L)
        {
            status=R;
        }
        else if(GetAsyncKeyState(VK_SPACE))
        {
            pause();
        }
        else if(GetAsyncKeyState(VK_ESCAPE))
        {
            endgamestatus=3;
            break;
        }
        else if(GetAsyncKeyState(VK_F1))
        {
            if(sleeptime>=50)
            {
                sleeptime=sleeptime-30;
                add=add+2;
                if(sleeptime==320)
                {
                    add=2;//∑¿÷πºıµΩ1÷Æ∫Û‘Ÿº”ªÿ¿¥”–¥Ì
                }
            }
        }
        else if(GetAsyncKeyState(VK_F2))
        {
            if(sleeptime<350)
            {
                sleeptime=sleeptime+30;
                add=add-2;
                if(sleeptime==350)
                {
                    add=1; //±£÷§◊ÓµÕ∑÷Œ™1
                }
            }
        }
        Sleep(sleeptime);
        snakemove();
    }
}

void welcometogame()//ø™ ºΩÁ√Ê
{
    Pos(40,12);

    system("title c”Ô—‘—–æø÷––ƒ www.dotcpp.com");
    printf("ª∂”≠¿¥µΩÃ∞ ≥…ﬂ”Œœ∑£°");
    Pos(40,25);
    system("pause");
    system("cls");
    Pos(25,12);
    printf("”√°¸.°˝.°˚.°˙∑÷±øÿ÷∆…ﬂµƒ“∆∂Ø£¨ F1 Œ™º”ÀŸ£¨2 Œ™ºıÀŸ\n");
    Pos(25,13);
    printf("º”ÀŸΩ´ƒ‹µ√µΩ∏¸∏ﬂµƒ∑÷ ˝°£\n");
    system("pause");
    system("cls");
}

void endgame()//Ω· ¯”Œœ∑
{

    system("cls");
    Pos(24,12);
    if(endgamestatus==1)
    {
        printf("∂‘≤ª∆£¨ƒ˙◊≤µΩ«Ω¡À°£”Œœ∑Ω· ¯.");
    }
    else if(endgamestatus==2)
    {
        printf("∂‘≤ª∆£¨ƒ˙“ßµΩ◊‘º∫¡À°£”Œœ∑Ω· ¯.");
    }
    else if(endgamestatus==3)
    {
        printf("ƒ˙µƒ“—æ≠Ω· ¯¡À”Œœ∑°£");
    }
    Pos(24,13);
    printf("ƒ˙µƒµ√∑÷ «%d\n",score);
    exit(0);
}

void gamestart()//”Œœ∑≥ı ºªØ
{
    system("mode con cols=100 lines=30");
    welcometogame();
    creatMap();
    initsnake();
    createfood();
}

int main()
{
    gamestart();
    gamecircle();
    endgame();
    return 0;
}