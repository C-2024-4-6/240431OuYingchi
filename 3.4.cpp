/*4��������Ϊmytriangle.h��ͷ�ļ���������
bool is_valid(double side1,double side2,double side3)
double_area(double side1,double side2, double side3)
���=sqrt(s(s-side1)(s-side2)(s-side3))
����s=(side1+side2+side3)/2
д���Գ��򣺶�ȡ���������߳���������Ϸ�������������������������Ϣ��
�����Գ���Ϊ��ģ�飬��main( )�������ڵ�CPP�ļ���ͷ�ļ�mytriangle.hֻ�к�����������������д����һCPP�ļ�mytriangle.cpp��
*/
#include <iostream>
#include "mytriangle.h"

int main() {
    double side1, side2, side3;
    std::cout << "�����������ε������߳����ÿո��������";
    std::cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double result = area(side1, side2, side3);
        std::cout << "�������ε�����ǣ�" << result << std::endl;
    }
    else {
        std::cout << "����ı߳����ܹ��������Σ����������롣" << std::endl;
    }

    return 0;
}