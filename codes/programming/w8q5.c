#include <stdio.h>

char scanboard(char chess[][],int y,int x){
    int i,cnt=1;
    int dir[8][2]={{0,-1},{0,1},{-1,0},{1,0},{1,1},{1,-1},{-1,1},{-1,-1}}; //(y,x)
    for(i=0; i<8; i++){
        for(int j=1; j<=5; j++){
            if(x+(dir[i][2]) < 19 && x+dir[i][2] > -1 && y+dir[i][1] < 19 && y+dir[i][1] > -1){
                if(chess[y][x]==chess[y+dir[i][1]*j][x+dir[i][2]*j]){
                    cnt++;
                }
            }
        }
        if(cnt==5)
            return chess[y][x];
    }
    return 0;
}

int main(){
    char chess[19][19];
    int i,j;
    char whowin;
    for(i=0; i<19; i++){
        for(j=0; j<19; j++){
            scanf("%c",&chess[i][j]);
        }
    }
    for(i=0; i<19; i++){
        for(j=0; j<19;j++){
            whowin = scanboard(chess,i,j);
            if (whowin=="X"){
                printf("Black");
                return 0;
            }else if(whowin=="O"){
                printf("White");
                return 0;
            }else if(whowin==0){
                printf("No winner");
                return 0;
            }
        }
    }
    
    
}