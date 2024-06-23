#include <iostream>
#include <string>
#include <array>

using namespace std;

void _a(int arr[]){
    for(int i=0;i<=10;i++){
        cout<<arr[i];
    }
}
//
void a(int *arr){
    for(int i=0;i<=10;i++){
        cout<<arr[i];
    }
}
//
//void d(array<string ,4> * arr){
//    cout<<(*arr)[0];
//};
//
//void e(array<string ,4> arr){
//    cout<<arr[0];
//}


void x(int *a){
    cout<<*a;
}

void y(int &a){
    cout<<a;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int b[100] = {0};
    _a(b);
    a(b);
//    array<string ,4> c = {"1","2","3","4"};
//    a(b);
//    d(&c);
//    e(c);
//    int c = 10;
//    int *d=&c;
//    x(&c);
//    y(c);
//    cout<<&c;
    return 0;
}