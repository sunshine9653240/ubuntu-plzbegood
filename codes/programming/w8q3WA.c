#include <stdio.h>

int main (){
    int x,y;
    scanf("%d%d",&x,&y);
    int i,j;
    int a[y][x];
    
    for (i=0; i<y; i++){
        for (j=0; j<x; j++){
            scanf("%d",&a[i][j]);
        }
    }
    //順序:左到右 -> 上到下 -> 右到左 -> 下到上
    int L2R = x,R2L = x-1,U2D = y-1,D2U = y-2;//{方向} = 要走幾格
    int posx = 0,posy = 0;
    int lock=1;
    while(1){
        if (L2R>0){//左到右
            for(i=posx; i<posx+L2R; i++){
                printf("%d ",a[posy][i]);
            }
            posx+=L2R-1;// 下個要輸出的數字的x位置s
            posy++;     // 下個要輸出的數字的y位置+1
            L2R-=2;
        }else
            break;

        if (U2D>0){//上到下
            for(i=posy; i<posy+U2D; i++){
                printf("%d ",a[i][posx]);
            }
            posy+=U2D-1;
            posx--;
            U2D-=2;
        }else
            break;

        if (R2L>0){//右到左 
            for(i=posx; i>posx-R2L; i--){
                printf("%d ",a[posy][i]);
            }
            posx-=R2L-1;
            posy--;
            R2L-=2;
        }else
            break;

        if (D2U>0){//下到上
            for(i=posy; i>posy-D2U; i--){
                printf("%d ",a[i][posx]);
            }
            posy-=D2U-1;
            posx++;
            D2U-=2;
        }else
            break;
    }

    return 0;
}