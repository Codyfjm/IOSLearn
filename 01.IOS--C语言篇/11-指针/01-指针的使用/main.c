/*
 2.使用&运算符，&变量名；这个表达式的结果就是这个变量的地址
 
 ％p 格式控制符输出变凉的地址
 
 指针：变量的地址
 
 3.指针变量
 
 指针变量就是专门用来存储地址的变量，专门用来存储另外1个变量的地址的
 
 a.直接访问：int num = 10;
 
 b.间接访问: 可以通过指针变量找到这个指针变量指向的变量
 
 4.声明指针变量的语法：、
 
    数据类型* 指针变量的名称
    int* p1;
    
    代表声明了1个指针变量，这个指针变量的名字叫做p1
    这个指针变量的类型是int* 读作int指针
    这个p1指针变量中只能存储地址
 
 5.正确的初始化
    a.先取出变量的地址
 
    b.将取出来的变量的地址赋值给指针变量
 
 6.野指针：未初始化的指针
 
 7.NULL值：代表指针变量不指向内存中的任何地址，完全＝＝＝0
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    int num = 10;
//    int* p1 = &num;
    
//    int age = 10;
//    int* p1 = &age;
//    
//    //p1的值，即是age的地址
//    printf("p1的值 = %p\n",p1);
//    printf("age的地址：%p\n",&age);
//    
//    //p1指针变量的地址
//    printf("p1指针变量的地址是：%p\n",&p1);
    
    
//    int num = 10;
//    int* p1 = &num;
//    
//    *p1 = 500;
//    //*p1 代表p1指针指向的变量
//    
//    printf("num = %d\n",num);
//    
//    printf("指针指向的变量:%d\n",*p1);
    
    int num = 10;
    
    int* p1 = &num;
    int* p2 = p1;
    
    *p1 = 100;
    
    printf("p2:%d\n",*p2);//100
    
    
    
}
