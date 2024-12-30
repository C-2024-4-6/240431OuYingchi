/*5、检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：*/
#include <iostream>
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0, len2 = 0;
    const char* p1, * p2;

    
    for (len1 = 0; s1[len1] != '\0'; len1++);
    for (len2 = 0; s2[len2] != '\0'; len2++);

    
    if (len1 > len2) return -1;

    
    for (p2 = s2; p2 < s2 + len2 - len1 + 1; p2++) {
        p1 = s1;
        while (*p1 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        
        if (*p1 == '\0') return p2 - s2;
    }
    
    return -1;
}

int main() {
    const int MAX_LEN = 1000; 
    char s1[MAX_LEN], s2[MAX_LEN];

    std::cout << "请输入两个C字符串：" << std::endl;
    std::cin.getline(s1, MAX_LEN); 
    std::cin.getline(s2, MAX_LEN); 

    int result = indexOf(s1, s2);
    if (result != -1) {
        std::cout << "字符串 '" << s1 << "' 在字符串 '" << s2 << "' 中的下标为：" << result << std::endl;
    }
    else {
        std::cout << "字符串 '" << s1 << "' 不是字符串 '" << s2 << "' 的子串。" << std::endl;
    }

    return 0;
}

