/*1、打印不同的数：
编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
下面是一个运行样例：
*/
#include <iostream>

int main() {
    int numbers[10]; // 存储输入的10个数
    int unique[10]; // 存储不同的数
    int uniqueCount = 0; // 不同数的计数
    int num, i, j;

    
    std::cout << "请输入10个数：" << std::endl;
    for (i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    // 找出不同的数
    for (i = 0; i < 10; ++i) {
        int isUnique = 1; // 假设当前数是唯一的
        for (j = 0; j < uniqueCount; ++j) {
            if (unique[j] == numbers[i]) {
                isUnique = 0; // 如果找到了相同的数，则当前数不是唯一的
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount++] = numbers[i]; // 如果是唯一的，加入到unique数组中
        }
    }

    std::cout << "不同的数有：" << std::endl;
    for (i = 0; i < uniqueCount; ++i) {
        std::cout << unique[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}