#include<iostream>
#include<iomanip>
int main()
{
	double a, b;

	std::cout << "�����뻪���¶�" << std::endl;

	std::cin >> a;
	b = 5 * (a - 32) / 9;
	std::cout << "�����¶�Ϊ" << std::setprecision(8)<<b << std::endl;
	system("pause"); 
	return 0;
	
}