#include<iostream>
int main()
{
	float x = 0, y = 0;
	float result = 0;
	char ch = 0;
	std::cout << "���������ʽ��" << std::endl;
	std::cin >> x >> ch >> y;
	switch ((int)ch / 1) {
	case 43:
	{
		result = x + y;
		std::cout << "=" << result << std::endl;
		break;
	}
	case 45:
	{
		result = x - y;
		std::cout << "=" << result << std::endl;
		break;
	}case 42:
	{
		result = x * y;
		std::cout << "=" << result << std::endl;
		break;
	}case 47:
	{
		if (y == 0)
		{
			std::cout << "����" << std::endl;
		}
		else
		{
			result = x / y;
			std::cout << "=" << result << std::endl;
			break;
		}
	}case 37:
	{
		if (int(y) == 0)
		{
			std::cout << "����" << std::endl;
		}
		else
		{
			result = (int)x % (int)y;
			std::cout << "=" << result << std::endl;
			break;
		}
	}
	}
}