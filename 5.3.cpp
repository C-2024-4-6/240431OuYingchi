#include <iostream>


class Cuboid {
private:
    int length;
      int width;
    int height;
public:
    
    void input() {
        std::cout << "请输入长方柱的长：";
        std::cin >> length;
        std::cout << "请输入长方柱的宽：";
        std::cin >> width;
        std::cout << "请输入长方柱的高：";
        std::cin >> height;
    }
    
    int calaulate() {
        return length * width * height;
    }
    
    void output() {
       std:: cout << "该长方柱的体积是：" << calaulate() <<std:: endl;
    }
};

int main() {
    {
        Cuboid cuboids[3] = {};
        

    for (int i = 0; i < 3; i++) {
        std::cout << "请输入第" << (i + 1) << "个长方柱的信息：" << std::endl;
        cuboids[i].input();
    }

    
    for (int i = 0; i < 3; i++) 
    {
        cuboids[i].output();
    }

    return 0;
}