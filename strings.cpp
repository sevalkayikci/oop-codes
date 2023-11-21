#include<iostream>
#include<string>

int main(){

    //creating strings
    std::string str1 = "hello";
    std::string str2= "seval";

    //concatenating string
    std:: string result = str1 + " " + str2;

    std::cout<<result<<std::endl;

    //comparing strings
    bool isEqual = (str1 == str2);

    //substring

    std::string sub = result.substr(0,5);
    
    //to print string sub
    std::cout<<sub<<std::endl;

    //finding characters
    size_t found = result.find('o');

    std::cout<<found<<std::endl;

    //replacing portion of string
    result.replace(6, 5, "c++");
    std::cout<<result<<std::endl;

    //converting other types into string
    int number = 42;
    std:: string numstr = std::to_string(number);    
    

    return 0;
}