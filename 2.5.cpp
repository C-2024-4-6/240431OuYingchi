#include <iostream>  
#include <cctype>  
using namespace std;

int main() {
    char c;
    int E = 0, K = 0, S = 0, Q = 0;

    cout << "请输入一行字符，以回车结束：" << endl;


    while (cin.get(c) && c != '\n') {
        if (isalpha(c)) {
            E++;
        }
        else if (isspace(c)) {
            K++;
        }
        else if (isdigit(c)) {
            S++;
        }
        else {
            Q++;
        }
    }


    cout << "英文字母个数: " << E << endl;
    cout << "空格个数: " << K << endl;
    cout << "数字字符个数: " << S << endl;
    cout << "其它字符个数: " << Q << endl;

    return 0;
