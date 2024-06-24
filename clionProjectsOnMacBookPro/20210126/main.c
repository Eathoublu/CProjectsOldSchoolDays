#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dict{
    char token;
    int num;
}DICT;


int main() {

    char input[100];
//    while (scanf("%s",input)!= EOF){
//    printf("%s\n", input);
//    }
    while (gets(input)){

        DICT d[100];
        int number_of_key = 0;
        int length;
        length = (int)strlen(input);
        int split_char_index = 0;
        for(int i=0; i<=length+1;i++){
            if(input[i]=='@'){
                split_char_index = i;
                break;
            }
        }
//        printf("spl:%d\n", split_char_index);
        for(int i=0;i<=split_char_index;i++){
            if(i>=1&&input[i]==':'){
                char symbol = input[i-1];
                int j;
                for (j=i+1;j<=split_char_index;j++){
                    if(input[j]==','||input[j]=='@'){
                        j;
                        break;
                    }
                }
                char number[100]={'\0'};
                for(int k=i+1;k<j;k++){
//                    printf("k:%d %c##\n", k,input[k]);
                    number[k-i-1] = input[k];
                }
//                printf("i:%d, j:%d,number:%s\n",i, j, number);
                int num = atoi(number);
                int flag = 0;
                for (int k=0;k<=number_of_key;k++){
                    if(d[k].token == symbol){
                        d[k].num = num;
                        break;
                    }
                    if(k == number_of_key){
                        d[k].token = symbol;
                        d[k].num = num;
                        flag = 1;
                    }
                }
                if(flag){
                    number_of_key++;
                }



            }
        }
        int total_minus = 0;

        for(int i=split_char_index+1;i<=length;i++){
            if(input[i]==':'){
               char symbol = input[i-1];
//                printf("sym:%c", symbol);
                int j;
                for (j=i+1;j<=split_char_index;j++){
                    if(input[j]==','||input[j]=='\0'){
                        j;
                        break;
                    }
                }
                char number[100]={'\0'};
                for(int k=i+1;k<=j;k++){
                    number[k-i-1] = input[k];
                }
//                printf("***%s\n", number);
                int num = atoi(number);
                for (int k=0;k<=number_of_key;k++){
                    if(d[k].token == symbol){
                        d[k].num -= num;
                        total_minus += num;
                        break;
                    }
                    if(k == number_of_key){
                        break;
                    }
                }
            }

        }
        for(int i=0;i<number_of_key;i++){
            printf("%c:%d", d[i].token, d[i].num);
            if(i<number_of_key-1){
                printf(",");}
        }
        if(total_minus==0){
            printf("@\n");
        }else{
            printf("\n");
        }
        //puts(input);
    }
    printf("Hello, World!\n");
    return 0;
}

