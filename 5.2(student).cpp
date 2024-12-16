/*2、分别给出如下的3个文件：
(1)含类定义的头文件student.h，
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
void display();
private:
int num;
char name[20];
char sex;
};
(2)包含成员函数定义的源文件student.cpp
//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include”student.h”            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
cout<<”num：”<<num<<endl;
    cout<<”name：”<<name<<endl;
    cout<<”sex：”<<sex<<endl;
}
(3)包含主函数的源文件main.cpp。
为了组成一个完整的源程序，应当有包括主函数的源文件：
//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include “student.h”
int main()
{
   Student stud;                //定义对象
   Student stud1(007,”tcg”,’m’);
stud.display();              //执行stud对象的display函数
   return 0;
}
请完善该程序，在类中增加一个对数据成员赋初值的成员函数set_value。上机调试并运行。

*/
#include<iostream>
#include"student.h"
void Student::display()         //在类外定义display类函数
{
    std:: cout <<"num" << num <<std:: endl;
    std:: cout <<"name" << name <<std:: endl;
    std::cout <<"sex" << sex <<std:: endl;
    
        
}
void Student::set_value(int Num, char Name, char Sex)
{
    num = Num;
    name = Name;
    sex = Sex;
}

int main()
{
    Student stud;                //定义对象
    Student stud1(007,"tcg","m");
    stud.display();              //执行stud对象的display函数
    return 0;
}




