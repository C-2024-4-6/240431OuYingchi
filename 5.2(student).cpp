/*2���ֱ�������µ�3���ļ���
(1)���ඨ���ͷ�ļ�student.h��
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
void display();
private:
int num;
char name[20];
char sex;
};
(2)������Ա���������Դ�ļ�student.cpp
//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include��student.h��            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
cout<<��num����<<num<<endl;
    cout<<��name����<<name<<endl;
    cout<<��sex����<<sex<<endl;
}
(3)������������Դ�ļ�main.cpp��
Ϊ�����һ��������Դ����Ӧ���а�����������Դ�ļ���
//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include ��student.h��
int main()
{
   Student stud;                //�������
   Student stud1(007,��tcg��,��m��);
stud.display();              //ִ��stud�����display����
   return 0;
}
�����Ƹó�������������һ�������ݳ�Ա����ֵ�ĳ�Ա����set_value���ϻ����Բ����С�

*/
#include<iostream>
#include"student.h"
void Student::display()         //�����ⶨ��display�ຯ��
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
    Student stud;                //�������
    Student stud1(007,"tcg","m");
    stud.display();              //ִ��stud�����display����
    return 0;
}




