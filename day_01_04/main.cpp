//
// Created by joker on 22-8-31.
//

#include "iostream"

using namespace std;

int main()
{

    //另外一种注释方式
    #if 0
        asd
        cout << "这里不会被编译" << endl;
    #endif

    //打开注释
    //条件编译指令
    #if 1
        cout << "这里会被编译" << endl;
    #endif

    return 0;
}