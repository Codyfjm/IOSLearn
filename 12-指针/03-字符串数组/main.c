//
//  main.c
//  03-字符串数组
//
//  Created by 冯俊铭 on 17/12/28.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    
    char* names[4] = {"jack","cody","felix","wendy"};
    
//    char names[][10] = {"jack","cody","felix","wendy"};
    for (int i=0; i<4; i++) {
        printf("%p\n",names[i]);
        printf("%s\n",names[i]);
    }
}
