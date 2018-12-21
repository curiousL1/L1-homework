#include<stdio.h>
#include<stdlib.h>

#define SNAKE_MAX_LENGTH 20
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define SNAKE_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'

//map[������][������] 
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
	
void snakeMove(int,int);//���ƶ��� 
int judgeOver(int,int);//�ж���Ϸ�Ƿ���� 
void output(void);//��Ϸ������������� 

int snakeX[SNAKE_MAX_LENGTH] = {1,2,3,4,5};
int snakeY[SNAKE_MAX_LENGTH] = {1,1,1,1,1};//�ߵĳ�ʼ����	
int snakeLength = 5;//��ʼ���� 

int main(){
	char move,c; 
	int flag = 1;//��Ϸ�������flagΪ0 
	
	while(flag){		
		output();
		move = getchar();				
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
	
		system("cls");
		flag = judgeOver(snakeX[snakeLength - 1],snakeY[snakeLength - 1]);		
	} 
	printf("Game Over!\n");
}

void snakeMove (int x,int y){
	int i;
//�����ж��ƶ��Ƿ����
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
}//ÿһ���ƶ�֮ǰ��Ӧ��֮ǰ����գ������ߵĳ��Ƚ��������� 
void output(void) {
    int i, j;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++)
            printf("%c", map[i][j]);
        printf("\n"); 
    }
}

int judgeOver(int x,int y){
	if(x > 0&&x < 11&&y > 0&&y < 11)//�ж���ͷλ�ü��� 
		return 1;
	else 
		return 0;
}

