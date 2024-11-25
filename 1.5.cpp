#include<iostream>
#include<iomanip>
int main()
{
	double a, b;

	std::cout << "请输入华氏温度" << std::endl;

	std::cin >> a;
	b = 5 * (a - 32) / 9;
	std::cout << "摄氏温度为" << std::setprecision(8)<<b << std::endl;
	system("pause"); 
	return 0;
	
}