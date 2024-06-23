#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void haha(char * buff, size_t len)
{
    int value = 0, min = 32768, max = -1;
    int * pt;
    pt = &buff+7;
    for (; pt <= (buff + len)+10;) {
        printf("%d\n", *pt);
        value += *pt;
        if (*pt > max){
            max = *pt;
        }
        if (*pt < min){
            min = *pt;
        }
        pt += 1;
    }
    value /= 6;
    printf("%d %d %d", value, min, max);
}
int main() {j
    int a[10]={1, 2, 3, 4, 5, 10};
    int* p;			//定义整形指针变量
    p = &a[0];		//对指针变量赋值
    int i;
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &a[i]);
//    }
//    for (p = &a; p < (a + 10); p++) {
//        printf("%d\n", *p);
//    }
    haha(a, 10);
    //system("pause");
    return 0;
}