#include<iostream>
int main()
{
	char NUM = 'a';
	std::cout << "ÇëÊäÈëÒ»¸ö×Ö·û" <<std:: endl;
	std::cin >> NUM;
	if (NUM >= 'a' && NUM <= 'z')
	{
		
		NUM= NUM - 32;
		std::cout << NUM <<std:: endl;

	}
	else
	{
		std::cout << static_cast<int>(NUM ) <<std::endl;
	}

	return 0;
}