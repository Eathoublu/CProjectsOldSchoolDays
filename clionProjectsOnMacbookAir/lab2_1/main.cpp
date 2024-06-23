#include <iostream>
using namespace std;

int matrix(){
    int matrix[3][3] = {0};
    int i,j;
    for (i = 1;i<=3;i++){
        for(j = 1;j<=3;j++){
            cin>>matrix[i][j];
        }
    }
    for (i = 1;i<=3;i++){
        for(j = 1;j<=3;j++){
            cout<<matrix[j][i];
        }
        cout<<endl;
    }
    return 0;
}

int main() {
 //  matrix();
//    int i,j;
//    int **arr = new int*[3];
//    for (i = 1;i<=3;i++){
//        arr[i] = new int[3];
//    }
//
//    for (i = 1;i<=3;i++){
//        for(j = 1;j<=3;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for (i = 1;i<=3;i++){
//        for(j = 1;j<=3;j++){
//            cout<<arr[j][i];
//        }
//        cout<<endl;
//    }
//    delete[] arr;



    //lab2_3.cpp
    char s1[100] = {0};
    char s2[100] = {0};
    char s3[100] = {0};
    int i;
    cin>>s1;
    cin>>s2;
    cout<<strlen(s1)<<endl;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    cout<<len2<<endl;
    for(i = 0;i<=strlen(s1)-1;i++){
        s3[i] = s1[i];
  //      cout<<"xixi ";
        cout<<s3<<endl;
    }
    for(i = len1;i<len1+len2;i++){
        s3[i] = s2[i-len1];

  //      cout<<"xixi2 ";
        cout<<s3<<endl;
    }
    cout<<s3<<endl;

    //lab2_4.cpp
//    string s1;
//    string s2;
//    string s3;
//    cin>>s1;
//    cin>>s2;
//    s3 += s1;
//    s3 += s2;
//    cout<<s3<<endl;







    std::cout << "Hello, World!" << std::endl;
    return 0;
}