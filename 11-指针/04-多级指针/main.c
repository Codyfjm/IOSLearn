//
//  main.c
//  04-多级指针
//
//  Created by 冯俊铭 on 17/12/16.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   

    //声明多级指针的语法
    //1.一级指针：数据类型＊ 指针名
    //2.二级指针：数据类型＊＊ 指针名
    
    //n级指针只能存储n－1级指针变量的地址
    
//    
//    int num = 10;
//    int* p1 = &num;
//    int** p2 = &p1;
//    
//    //1.打印num变量的地址
//    printf("num变量的地址: %p\n",&num);//num变量的地址
//    //2.打印p1变量的值
//    printf("p1指针变量的值：%p\n",p1);//和上面的输出一样
//    //3.打印p1指针变量的地址
//    printf("p1指针变量的地址:%p\n",&p1);//p1指针变量的地址
//    //4.打印p2变量的值
//    printf("p2指针变量的值：%p\n",p2);//和上面的输出一样
//    //5.打印p2的地址
//    printf("p2指针变量的地址是:%p\n",&p2);
//    
//    /*输出：
//     num变量的地址: 0x7fff5fbff7ec
//     p1指针变量的值：0x7fff5fbff7ec
//     p1指针变量的地址:0x7fff5fbff7e0
//     p2指针变量的值：0x7fff5fbff7e0
//     p2指针变量的地址是:0x7fff5fbff7d8
//     */
    
    
    
    int num = 10;
    int* p1 = &num;
    int** p2 = &p1;
    int*** p3 = *p2;
    
    //*p1 代表num
    //**p2 代表num
    //***p3 代表num
    

}
