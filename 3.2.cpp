/*2.   ��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num) ,���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
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