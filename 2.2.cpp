#include<iostream>
#include<iomanip>
int main()
{
	float x = 0, y = 0;
	std::cout << "�������Ա���X�ĳ�ʼֵ" << std::endl;
	std::cin >> x;
	if (0< x < 10) 
		switch ((int)x / 1)
		{
		case 0:
		{
			y = 3 - 2 * x;
			std::cout << std::fixed << std::setprecision(8) << y << std::endl;
			break;
		}
		case 1:case 2:case 3:case 4:
		{
			y = 2 / (4 * x) + 1;
			std::cout << std::fixed << std::setprecision(8) << y << std::endl;
			break;
		}
		case 5: case 6: case 7:case 8: case 9:
		{
			y = x * x;
			std::cout << std::fixed << std::setprecision(8) << y << std::endl;
			break;
		}
		}
	
	else 
		std::cout << "���ڶ�������" << std::endl;
	
	return 0;
}