#include<iostream>

using namespace std;

int main()
{
    std::string str;
    cout<<"Enter your name: ";
    cin>>str;

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    double salary;
    cout<<"Enter your salary: ";
    cin>>salary;

    std::cout<<"Hello "<<str<<"!!!"<<std::endl;
    std::cout<<"Your age is "<<age<<std::endl;
    std::cout<<"Your salary is "<<salary<<std::endl;
}