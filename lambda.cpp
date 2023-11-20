#include<iostream>
int main(){
    int result;
    auto add = [](int a, int b){
        return a + b;
    };
    
    result = add(3,4);

    std::cout<<"sum: "<<result<<std::endl;
    return 0;
}