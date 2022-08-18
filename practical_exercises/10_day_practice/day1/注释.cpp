#include<iostream>


// 一种条件编译指令注释

int main() {
    //另一种注释方法
    #ifndef COMMENT
    std::cout << "Conditional compilation is not enabled." << std::endl;
    #endif

    //打开注释
    //条件编译指令
    #ifdef COMMENT
    std::cout << "Conditional compilation is enabled." << std::endl;
    #endif
}