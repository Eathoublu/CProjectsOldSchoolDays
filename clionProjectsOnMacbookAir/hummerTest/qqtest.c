//
// Created by 蓝一潇 on 2024/2/2.
//
//#include <printf.h>
# include<stdio.h>
#include <stdlib.h>
//# include "/Applications/QQ.app/Contents/Frameworks/Hummer.framework/Versions/A/Hummer"

typedef struct sqlite3 sqlite3;
int sqlite3_open(const char *filename, sqlite3 **ppDb);
//int sqlite3_key(sqlite3 *db, const void *pKey, int nKey);


int main() {
    sqlite3* db;
    int ret;
    ret = sqlite3_open("/Users/eathoublu/Downloads/QQ3.db", &db);
    printf("%d", ret);


    return 0;
}