#include<iostream>
int main() {
	float a;
	std::cout << "请输入a的值：" << std::endl;
std:: cin >> a;
	float b = a;
	float c;
	c = (b + b / a) / 2;
	for (; c - b > 0.00005 || c - b < -0.00005;)
	{
		b = c;
		c = (b + a / b) / 2;
	}
	std::cout << "a的平方根为：" << c <<std:: endl;
	return 0;

}