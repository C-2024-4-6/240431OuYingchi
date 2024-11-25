#include<iostream>
int main()
{
	float x = 0, y = 0, z = 0;
	float C = 0;
	std::cout << "请输入三角形的三边长" << std::endl;
	std::cin >> x >> y >> z;
	if ((x + y )> z && (x + z) > y &&( z + y) > x)
	{
		C =x  + y +z ;
		std::cout << "该三角形周长为：" << C << std::endl;
		if (x== y || y == z || x == z)
		{
			std::cout << "该三角形为等腰三角形" << std::endl;

		}
		else {std:: cout << "该三角形不为等腰三角形" << std::endl; }
		
	}
	else std:: cout << "该三边不能构成三角形,请重新输入：" << std::endl; 
}



	
