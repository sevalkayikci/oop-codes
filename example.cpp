#include<iostream>

class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(int l, int w):length(l), width(w){}

    //member function
    int calculateArea() const{
        return length * width;
    }
};

int main(){
    Rectangle myRectangle(5,10);
    std::cout<<"area: "<<myRectangle.calculateArea()<<std::endl;

    return 0;
}