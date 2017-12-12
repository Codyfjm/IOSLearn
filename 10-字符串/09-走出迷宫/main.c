/**
 *
    1.应该将游戏地图上的每1个格子的类型保存起来
 
    用1个二维数组，将地图上的每一个格子的类型保存起来
    
    2.游戏的流程：
    1）根据map二维数组显示游戏地图
 
    while(1){
 
        2）接收用户输入小人的前进方向
 
        3）根据用户输入的小人的前进方向来移动小人
    }
 
 
 
 *
 *
 *
 *
 */



#include <stdio.h>
#include <stdlib.h>
#define ROWS 6
#define COLS 8

//map数组，二维数组，1个char类型的二维数组
//这个二维数组的作用，用来保存地图上每1个格子的类型。
char map[ROWS][COLS] ={
    {'#','#','#','#','#','#','#','#'},
    {'#','0','#','#',' ',' ',' ','#'},
    {'#',' ','#','#',' ','#',' ','#'},
    {'#',' ',' ','#',' ','#',' ','#'},
    {'#','#',' ',' ',' ','#',' ','#'},
    {'#','#','#','#','#','#',' ','#'}
};


/**
 *  保存小人当前在地图上的行坐标
 */
int personCurrentRow = 1;

/**
 *  保存小人当前在地图上的列坐标
 */
int personCurrentCol = 1;


/**
 *  打印游戏地图
 */
void showMap();

/**
 *  接收用户输入小人的前进方向
 */
char enterDiretion();

/**
 *  将小人向上移动
 */
void moveToUp();

/**
 *  将小人向下移动
 */
void moveToDown();

/**
 *  将小人向左移动
 */
void moveToLeft();

/**
 *  将小人向右移动
 */
void moveToRight();

/**
 *  判断是非是最后格子
 *
 *  @return 标志
 */
int checkEnd();

int main(int argc, const char * argv[]) {
    
    while (1) {
        
        if (checkEnd()==1) {
            printf("你智商真高！");
            return 0;
        }
        
        //0.将屏幕上的所有的显示信息晴空
        system("clear");
        
        //1.打印游戏地图
        showMap();
        
        //2.接收用户输入的前进方向
        char dir = enterDiretion();
        
        //3.判断用户输入的小人的前进方向
        switch (dir)
        {
            case 'a':
            case 'A':
                //将小人向左移动
                moveToLeft();
                break;
                
            case 'd':
            case 'D':
                //将小人向右移动
                moveToRight();
                break;
                
            case 'w':
            case 'W':
                //将小人向上移动
                moveToUp();
                break;
                
            case 's':
            case 'S':
                //将小人向下移动
                moveToDown();
                break;
            case 'q':
            case 'Q':
                //结束游戏
                printf("你的智商真低！\n");
                return 0;
                break;
                
            default:
                break;
        }

    }
    
}

void showMap(){
    //根据map数组打印地图
    for (int i=0; i<ROWS; i++) {
        for (int j=0; j<COLS; j++) {
            printf("%c ",map[i][j]);
        }
        printf("\n");
    }
}

char enterDiretion(){

    //1.提示输入前进方向
    printf("请输入小人的前进方向： w.上 s.下 a.左 d.右 q.结束游戏\n");
    
    //2.接收
    char dir = 'a';
    rewind(stdin);
    scanf("%c",&dir);
    return dir;
    
}

void moveToUp(){
    int personNextRow = personCurrentRow - 1;
    int personNextCol = personCurrentCol;
    
    if (map[personNextRow][personNextCol]==' ') {//路
        map[personNextRow][personNextCol] = '0';
        map[personCurrentRow][personCurrentCol] = ' ';
        
        //立即更改小人的当前位置
        personCurrentRow = personNextRow;
        personCurrentCol = personNextCol;
    }

    
}

void moveToDown(){
    int personNextRow = personCurrentRow + 1;
    int personNextCol = personCurrentCol;
    
    if (map[personNextRow][personNextCol]==' ') {//路
        map[personNextRow][personNextCol] = '0';
        map[personCurrentRow][personCurrentCol] = ' ';
        
        //立即更改小人的当前位置
        personCurrentRow = personNextRow;
        personCurrentCol = personNextCol;
    }
}

void moveToLeft(){
    int personNextRow = personCurrentRow;
    int personNextCol = personCurrentCol - 1;
    
    if (map[personNextRow][personNextCol]==' ') {//路
        map[personNextRow][personNextCol] = '0';
        map[personCurrentRow][personCurrentCol] = ' ';
        
        //立即更改小人的当前位置
        personCurrentRow = personNextRow;
        personCurrentCol = personNextCol;
    }

}

void moveToRight(){
    int personNextRow = personCurrentRow;
    int personNextCol = personCurrentCol + 1;
    
    if (map[personNextRow][personNextCol]==' ') {//路
        map[personNextRow][personNextCol] = '0';
        map[personCurrentRow][personCurrentCol] = ' ';
        
        //立即更改小人的当前位置
        personCurrentRow = personNextRow;
        personCurrentCol = personNextCol;
    }

}

int checkEnd(){
    if (personCurrentRow==6&&personCurrentCol==7) {
        return 1;
    }
    return 0;
}


