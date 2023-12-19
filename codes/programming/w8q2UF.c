#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int maze[size][size];
    int i,j;
    for (i=0; i<size; i++){
        for (j=0; j<size ;j++){
            scanf("%d",maze[i][j]);
        }
    }
    
}