/*3、游戏：存物柜问题：
一个学校有100个存物柜，100个学生。开学第一天所有存物柜都是关闭的。第一个学生（记为S1）来到学校后，打开所有的存物柜。第二个学生S2，从第二个存物柜（记为L2）开始，每隔两个存物柜，将它们关闭。第三个学生S3从第三个存物柜L3开始，每隔三个，将它们的状态改变（开着的关上，关着的打开）。学生S4，从L4开始，每隔四个改变它们的状态。学生S5，从L5开始，每隔五个改变状态。依此类推，直至学生S100改变L100的状态。
当所有学生完成这个过程，那些存物柜是开着的？编写一个程序求解此问题，显示所有开着的柜子号码，号码之间用一个空格隔开。
提示：使用一个100个布尔型元素的数组，每个元素代表存物柜是开（true）或关（false）。最初所有的储物柜都是关闭的。

*/#include <iostream>

const int NUM_LOCKERS = 100; 

int main() {
    bool lockers[NUM_LOCKERS] = { false }; 

    
    for (int student = 1; student <= NUM_LOCKERS; ++student) {
        for (int locker = student - 1; locker < NUM_LOCKERS; locker += student) {
            
            lockers[locker] = !lockers[locker];
        }
    }

    
    std::cout << "开着的存物柜号码：" << std::endl;
    for (int i = 0; i < NUM_LOCKERS; ++i) {
        if (lockers[i]) {
            std::cout << (i + 1) << " "; 
        }
    }
    std::cout << std::endl;

    return 0;
}