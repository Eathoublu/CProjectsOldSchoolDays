#include <stdio.h>
#include <string.h>
float str2key(){
    unsigned char a[100] = {0};
    double _key;
    printf("enter password:");
    scanf("%c",&a);
    _key = (a[0]+a[1]+a[2]+a[3])/400.;
    printf("%f", _key);
    return _key;
}

int main() {
    str2key();
    return 0;
}