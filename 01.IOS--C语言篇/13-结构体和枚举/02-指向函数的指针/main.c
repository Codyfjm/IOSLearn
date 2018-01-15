//
//  main.c
//  02-指向函数的指针
//
//  Created by 冯俊铭 on 18/1/15.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 指向函数的指针的声明
 1)声明语法
    返回值类型 (*指针名)([参数列表])
    void (*pfunction)();
    表示声明来1个指向函数的指针，名字叫做pfunction
    这个指针只能指向没有返回值，并且没有参数的函数
 
 4）指向函数的指针的初始化    
    1）取到符合指针条件的函数的地址
    2）将地址赋值给指针变量
 
 
 */

#include <stdio.h>

void test(){

    printf("哈将豆皮没带饭卡设计大奖\n");
    printf("哈将豆皮卡里打\n");

}

int main(int argc, const char * argv[]) {
    void (*pFunc)() = test;
//    test();
//    pFunc();
    (*pFunc)();
}
