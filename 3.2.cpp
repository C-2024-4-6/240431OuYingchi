/*2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num) ,如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：
        2     3      5      7    11    13    17    19    23    29
*/
#include <iostream>
#include <iomanip>

bool is_prime(int num)
{
    if (num < 2) {
        return false;
    }
    else {
        int t = num - 1;
        for (int i=t; i >1; i--)
        {
            
            if(num%i==0)
            {
                return false;
            }
        }
    }
}
int main()
{
    int i = 1;
    for (int num = 1; i < 201; num++)
    {
        if (is_prime(num) == 1)
        {
            
            if (i < 10 || (bool(i % 10)) == true)
                std::cout << num << '\t';
            else {
                std::cout << num << std::endl;
            }
            i++;
        }
    }
}