#include <iostream>
#include <string>
class a {
private:
    std::string xx;
public:
    a(std::string xx){
        this->xx = xx;
    }
    void pri(){
        std::cout<<xx<<std::endl;
    }

};

int main(){
    a A("123213");
    a::pri();
}