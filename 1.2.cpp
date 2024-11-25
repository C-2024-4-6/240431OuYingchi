#include<iostream>
int main()
{
	int r ;
	int h;
	
	std::cout << "请输入圆锥的半径和高" << std::endl;
	std::cin >> r >> h;
	int V = 3.14 * r * r * h / 3;
	std::cout << "圆锥的体积是" << V << std::endl;
	return 0;
}