#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define SNAKE_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

//map[纵坐标][横坐标] 
char map[12][12] =
	{"************",
	"*XXXXH     *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"************"};
	
void snakeMove(int,int);//先移动蛇 
int judgeOver(int,int);//判定游戏是否结束 
void output(void);//游戏继续则输出界面 
void putFood(void); 

int snakeX[SNAKE_MAX_LENGTH] = {1,2,3,4,5};
int snakeY[SNAKE_MAX_LENGTH] = {1,1,1,1,1};//蛇的初始坐标	
int snakeLength = 5;//初始长度 
int foodX,foodY;//食物坐标 

int main(){
	char move,c; 
	int flag = 1;//游戏结束则变flag为0 
	putFood();
	while(flag){		
		output();		
		move = getch();				
		switch(move){
			case 'a': 
				snakeMove (-1, 0);
				break;
			case 's':
				snakeMove (0, 1);
				break;
			case 'd':
				snakeMove (1, 0);
				break; 
			case 'w':
				snakeMove (0, -1);
				break;
			}
//蛇头与食物相撞后蛇加长，重新放置食物 			
		if(snakeX[snakeLength - 1] == foodX&&snakeY[snakeLength - 1] == foodY){
			snakeY[snakeLength] = snakeY[snakeLength-1];
			snakeX[snakeLength] = snakeX[snakeLength-1];
			snakeLength++;
		}
		if(snakeLength == SNAKE_MAX_LENGTH){
			printf("snake long enough!\n");
			break;
		}					
		if(map[foodY][foodX] != SNAKE_FOOD)
			putFood();
				
		system("cls");
		flag = judgeOver(snakeX[snakeLength - 1],snakeY[snakeLength - 1]);		
	} 
	printf("Game Over!\n");
}

void snakeMove (int x,int y){
	int i;
//首先判断移动是否合理
	if(snakeX[snakeLength - 1] + x != snakeX[snakeLength - 2]||snakeY[snakeLength - 1] + y != snakeY[snakeLength - 2]){
		for(i = 0;i < snakeLength - 1;i++){
			map[snakeY[i]][snakeX[i]] = SNAKE_CELL;
			snakeX[i] = snakeX[i + 1];
			snakeY[i] = snakeY[i + 1];
		}//move body
		map[snakeY[snakeLength - 1]][snakeX[snakeLength - 1]] = SNAKE_CELL;
		snakeX[snakeLength - 1] += x;
		snakeY[snakeLength - 1] += y;
		map[snakeY[snakeLength - 1]][snakeX[snakeLength - 1]] = SNAKE_HEAD;//move head
		for(i = 0;i < snakeLength - 1;i++){
			map[snakeY[i]][snakeX[i]] = SNAKE_BODY;
		}
	
	} 
}//每一次移动之前都应把之前的清空，否则蛇的长度将不断增加 
void output(void) {
    int i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++)
            printf("%c", map[i][j]);
        printf("\n"); 
    }
}

int judgeOver(int x,int y){
	if(x > 0&&x < 11&&y > 0&&y < 11)//判断蛇头位置即可 
		return 1;
	else 
		return 0;
}

void putFood(void){
	srand(time(NULL));

    foodX = rand()%12;
    foodY = rand()%12;//随机产生坐标 
    if(map[foodY][foodX] == ' ')
    	map[foodY][foodX] = SNAKE_FOOD;
}


