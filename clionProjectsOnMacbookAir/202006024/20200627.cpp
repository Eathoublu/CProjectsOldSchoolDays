//
// Created by 蓝一潇 on 2020/6/27.
//
#include  <iostream>
#include  <string>
using  namespace  std;
class A27{
private:
    int a27=0;
    int b27[10];
public:
    A27(){
        register int i;
        for(int i=0;i<10;i++) {
            b27[i]=i;
        }
    };
    A27(int a){this->a27=a;};
    int operator[](int i){

        if (i<10){
            return b27[i];
        }else{
            return this->b27[0];
        }
    }
    A27 operator++(){
        ++this->a27;
        A27 _a(this->a27);
        return _a;
    }
    A27 operator++(int){
        A27 _a(this->a27);
        ++this->a27;
        return _a;
    }
    A27 operator+(A27 &a){
        A27 b27(0);
        b27.a27 = this->a27+a.a27;
        return b27;
    }
    A27 operator-(A27 &a){
        A27 b27(0);
        b27.a27 = this->a27-a.a27;
        return b27;
    }
    A27 operator*(A27 &a){
        A27 b27(0);
        b27.a27 = this->a27*a.a27;
        return b27;
    }
    A27 operator/(A27 &a){
        A27 b27(0);
        b27.a27 = this->a27/a.a27;
        return b27;
    }

    bool operator >(const A27& a){
        if (a.a27<this->a27){
            return true;
        }
        else{
            return false;
        }
    }

    void operator=(const A27 &a){
        this->a27 = a.a27;
    }
    A27 operator()(int a, int b, int c){
        A27 b27(0);
        b27.a27 = this->a27+a+b+c;
        return b27;
    }
    friend ostream &operator<<( ostream &output,
                                const A27 &a )
    {
        output << "a27 : " << a.a27 << endl;
        return output;
    }

    friend istream &operator>>( istream  &input, A27 &a )
    {
        input >> a.a27;
        return input;
    }
    friend float dist(A27 &a, A27 &b){
        return a.a27+b.a27;
    }

};

int main(){
    A27 a(0);
    cout<<a<<endl;
    cin>>a;
    cout<<a<<endl;
    cout<<"output:"<<dist(a, a)<<endl;
//    cout<<a.a27<<endl;
//    A27 b = a(1,2,3);
//    cout<<b.a27<<endl;
}




