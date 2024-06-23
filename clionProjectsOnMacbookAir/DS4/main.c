#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char int2char(int d){
}

int main() {
    srand((unsigned int)time(NULL));



//    FILE *fp;

//    fp = fopen("test1.txt", "wb"); //可以创建文件 （Unix下，windows下不确定）
//    int a;
//    fscanf(fp,"%d",&a);
//    printf("%d", a);
//    fprintf(fp,"\n%d",a);
//    for(int i=1;i<=100000;i++){
//        fprintf(fp,"%d ",rand()%2345);
//    }

//    fclose(fp);

    //使用N路归并排序 思想：每N0个数放在一个临时文件中，并对其中的数进行排序，而后使用归并输出到output文件夹

    int num = 0;

    FILE * fp;
    fp = fopen("text2.txt","r");
    int a;
    while(fscanf(fp,"%d",&a)!=EOF){

        FILE * fp2;
        fp2 = fopen("temp" + ,"r+");

    }








}