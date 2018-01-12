//
//  main.c
//  10-模块开发学生管理系统
//
//  Created by 冯俊铭 on 18/1/12.
//  Copyright © 2018年 cody. All rights reserved.
//

#include <stdio.h>
#include "student.h"

int main(int argc, const char * argv[]) {
   
    //1.初始化数据
    initData();
    while (1) {
        int useSelect = showMenu();
        
        //2.判断用户的选择，根据用户的选择来做不同的事情
        switch (useSelect) {
            case 1:
                //查询学生
                query();
                break;
            case 2:
                //新增学生
                addStudent();
                break;
            case 3:
                //删除学生
                deleteStudent();
                break;
            case 4:
                //修改学生
                modifyStudent();
                break;
                
            default:
                //结束程序
                break;
        }
    }
    
}
