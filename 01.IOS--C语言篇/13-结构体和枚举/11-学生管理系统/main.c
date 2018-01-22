/*
 1.处理学生信息
 一个学生信息
 编号
 姓名
 年龄
 性别
 成绩
 
 2.程序默认有10个学生的信息
 有1个长度为10的结构体数组存储数据
 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM 20

/**
 性别枚举，表示学员的性别
 */
typedef enum
{
    GenderMale,
    GenderFemale
}Gender;


/**
 *  学生结构体，表示1个学生的信息
 */
typedef struct{
    int id;
    char *name;
    int age;
    Gender gender;
    int score;
} Student;


/**
 *  结构体数组，这个数组中存储的是10个学生信息
 */
Student students[NUM] =
{
    {1,"jack",18,GenderMale,10},
    {2,"rose",21,GenderFemale,45},
    {3,"lily",26,GenderFemale,23},
    {4,"jimy",12,GenderMale,89},
    {5,"poly",3,GenderMale,67},
    {6,"meimei",19,GenderFemale,67},
    {7,"likai",31,GenderMale,88},
    {8,"qiang",45,GenderMale,12},
    {9,"adong",29,GenderMale,76},
    {10,"asan",35,GenderMale,91}
};

/**
 *  代表数组中真正的存储了多少个学生的信息
 */
int realLength = 10;

/*
 显示一级菜单，并接收用户的选择
 */
int showMenu();

/**
 *  查询学生
 */
void query();

/**
 *  新增学生
 */
void addStudent();

/**
 *  删除学生
 */
void deleteStudent();

/**
 *  修改学生
 */
void modifyStudent();

/**
 *  显示查询二级菜单
 */
int showQueryMenu();

/**
 *  查询所有学生信息
 */
void queryAll();

/**
 *  根据编号查询
 */
void queryById();

/**
 *  根据姓名查询
 */
void queryByName();

/**
 *  根据年龄查询
 */
void queryByAge();

/**
 *  根据成绩查询
 */
void queryByScore();

/**
 *  根据性别查询
 */
void queryByGender();



int main(int argc, const char * argv[]) {
    
    while (1) {
        //1，显示操作菜单，并接收用户的选择
        int userSelect = showMenu();
        
        //2.判断用户的选择，根据用户的选择做不同的事情
        switch (userSelect) {
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

/*
 显示一级菜单，并接收用户的选择
 */
int showMenu(){
    //1.显示菜单
    printf("*********************************************************\n");
    printf("*                请 使 用 小 明 学 生 管 理 系 统           *\n");
    printf("*                       1.查 询 学 生                     *\n");
    printf("*                       2.新 增 学 生                     *\n");
    printf("*                       3.删 除 学 生                     *\n");
    printf("*                       4.修 改 学 生                     *\n");
    printf("*                       5.退 出 系 统                     *\n");
    printf("*********************************************************\n");
    
    
    //2.接收用户的选择
    printf("请输入你的选择：");
    int userSelect = 0;
    scanf("%d",&userSelect);
    //3.返回用户的选择
    return userSelect;
}

/**
 *  查询学生
 */
void query()
{
    
    //1.显示查询的二级菜单，并接收用户的选择
    int userSelect = showQueryMenu();
    
    //2.判断用户的选择，根据用户的选择做不同的查询
    switch (userSelect) {
        case 1:
            //查询所有
            queryAll();
            break;
        case 2:
            //编号查询
            queryById();
            break;
        case 3:
            //姓名查询
            queryByName();
            break;
        case 4:
            //年龄查询
            queryByAge();
            break;
        case 5:
            //性别查询
            queryByGender();
            break;
        case 6:
            //成绩查询
            queryByScore();
            break;
    }
}

/**
 *  显示查询二级菜单
 */
int showQueryMenu()
{
    //1.显示菜单
    printf("*********************************************************\n");
    printf("*                请 使 用 小 明 学 生 查 询 系 统           *\n");
    printf("*                       1.查询所有学生信息                 *\n");
    printf("*                       2.根据编号查询                    *\n");
    printf("*                       3.根据姓名查询                    *\n");
    printf("*                       4.根据年龄查询                     *\n");
    printf("*                       5.根据性别查询                     *\n");
    printf("*                       6.根据成绩查询                     *\n");
    printf("*********************************************************\n");
    
    
    //2.接收用户的选择
    printf("请输入你的选择：");
    int userSelect = 0;
    scanf("%d",&userSelect);
    //3.返回用户的选择
    return userSelect;
    
}

/**
 *  新增学生
 */
void addStudent()
{
    
    printf("请1输入新增的学生的姓名：");
    char name1[10];
    rewind(stdin);
    fgets(name1, 10, stdin);
    size_t len = strlen(name1);
    
    if (name1[len - 1]=='\n') {
        name1[len-1] = '\0';
    }
    
    char *name = calloc(len+1, sizeof(char));
    strcpy(name, name1);
    
//    printf("%s\n",name);
    
    printf("请输入新增的学生的年龄：");
    int age = 0;
    scanf("%d",&age);
    
    printf("请输入新增的学生的性别：0-－>男 1-->女");
    int gender = 0;
    scanf("%d",&gender);
    
    printf("请输入新增的学生的成绩：");
    int score = 0;
    scanf("%d",&score);
    
    
    Student stu = {students[realLength-1].id+1,name,age,gender,score};
    
    printf("%s\n",stu.name);
    
    students[realLength] =  stu;
    realLength++;
    
}

/**
 *  删除学生
 */
void deleteStudent()
{
    printf("请输入要你删除的学生的编号：");
    int id = 0;
    scanf("%d",&id);
    
    int deleteIndex = -1;
    for (int i=0; i<realLength; i++) {
        if (students[i].id == id) {
            deleteIndex = i;
            break;
        }
    }
    
    if (deleteIndex==-1) {
        printf("你输入的编号有误：");
        return;
    }
    
    for (int i = deleteIndex+1; i<realLength; i++) {
        students[i-1] = students[i];
        
    }
    
    realLength--;
    
}

/**
 *  修改学生
 */
void modifyStudent()
{
    
}

/**
 *  查询所有学生信息
 */
void queryAll()
{
    
    printf("编号\t\t姓名\t\t年龄\t\t性别\t\t成绩\n");
    
    for (int i=0; i<realLength; i++) {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].gender,
               students[i].score);
    }
    
}

/**
 *  根据编号查询
 */
void queryById()
{
    
}

/**
 *  根据姓名查询
 */
void queryByName()
{
    
}

/**
 *  根据年龄查询
 */
void queryByAge()
{
    
}

/**
 *  根据成绩查询
 */
void queryByScore()
{
    
    int min = 0,max = 0;
    printf("请输入最小成绩和最大成绩 使用空格分隔：");
    scanf("%d%d",&min,&max);
    
    printf("编号\t\t姓名\t\t年龄\t\t性别\t\t成绩\n");
    for (int i=0; i<realLength; i++) {
        if (students[i].score >= min && students[i].score <= max) {
            printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n",
                   students[i].id,
                   students[i].name,
                   students[i].age,
                   students[i].gender,
                   students[i].score);
        }
    }
    
}

/**
 *  根据性别查询
 */
void queryByGender()
{
    
}

