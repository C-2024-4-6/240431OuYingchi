/*4、创建名为mytriangle.h的头文件，包括：
bool is_valid(double side1,double side2,double side3)
double_area(double side1,double side2, double side3)
面积=sqrt(s(s-side1)(s-side2)(s-side3))
其中s=(side1+side2+side3)/2
写测试程序：读取三角形三边长，如输入合法，计算面积，否则输出错误信息。
（测试程序为主模块，即main( )函数所在的CPP文件，头文件mytriangle.h只有函数声明；函数定义写在另一CPP文件mytriangle.cpp）
*/
#include <iostream>
#include "mytriangle.h"

int main() {
    double side1, side2, side3;
    std::cout << "请输入三角形的三条边长（用空格隔开）：";
    std::cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double result = area(side1, side2, side3);
        std::cout << "该三角形的面积是：" << result << std::endl;
    }
    else {
        std::cout << "输入的边长不能构成三角形，请重新输入。" << std::endl;
    }

    return 0;
}