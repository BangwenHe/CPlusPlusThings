#include<iostream>


// һ����������ָ��ע��

int main() {
    //��һ��ע�ͷ���
    #ifndef COMMENT
    std::cout << "Conditional compilation is not enabled." << std::endl;
    #endif

    //��ע��
    //��������ָ��
    #ifdef COMMENT
    std::cout << "Conditional compilation is enabled." << std::endl;
    #endif
}