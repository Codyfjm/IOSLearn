/*
  
    1.无论指针是什么类型，在内存中都是占据8个字节
 
    2.指针变量的类型决定了 通过这个指针找到字节以后 连续操作多少个字节空间
    
    int* 可连续操作4个字节
    double* 可连续操作8个字节
    float* 可连续操作4个字节
    char* 可连续操作1个字节
 
 
    指针变量一定要指向1个和自己类型相同的普通变量
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
//    int num = 300;
//    char* p1 = &num;
//    
//    *p1 = 97;
//    
//    printf("num = %d\n",num);//353
   
}
