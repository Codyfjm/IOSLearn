/*
 1.static与extern：修饰变量和函数
    1)static与extern修饰局部变量的效果
    2)static与extern修饰全局变量的效果
    3)static与extern修饰函数的效果
 
 2，static与extern修饰局部变量的效果
    1)如意局部变量呗static修饰，这个变量叫做静态变量
    2)静态变量不再存储在栈区域，而是存储在常量区中
    3)当函数执行完毕之后，这个静态变量不回被回收
      第一次执行这个函数的时候，就会将这个静态变量声明在常量区，函数执行完毕之后，这个静态变量
      不回被回收，后面再去执行的时候，声明静态变量这句话，就不会再执行了，而是直接跳过，直接使
      用这个静态变量的值
    4)static修饰的静态变量，函数结束不回被回收，函数无论执行多少次，这个静态变量只有1份
 
 3.extern 不能修饰局部变量
 
 
 */

#include <stdio.h>

void test(){

//    int num = 0;
//    num = 1
//    num = 1
//    num = 1
//    num = 1
//    num = 1
    
    static int num = 0;
//    num = 1
//    num = 2
//    num = 3
//    num = 4
//    num = 5
    num++;
    printf("num = %d\n",num);
}

int main(int argc, const char * argv[]) {
    test();
    test();
    test();
    test();
    test();
    
}
