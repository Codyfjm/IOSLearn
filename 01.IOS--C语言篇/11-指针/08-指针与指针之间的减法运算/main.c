/*
 
 1.指针和指针做减法运算
 结果是个long类型的数据
 
 结果的意义：代表两个指针之间相差多少个单位元素
 
 用在判断数组元素之间相差多少个元素
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int arr[5] = {10,20,30,40,50};
    
    int *p1 = arr;
    int *p2 = &arr[4];
    
    long res = p2 - p1;
    
    printf("res = %ld\n",res);
}
