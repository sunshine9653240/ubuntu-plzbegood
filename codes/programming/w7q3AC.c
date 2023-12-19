#include <stdio.h>
#include <math.h>
void sort(int[] , int[] , int );
double result(int[], int[], int );

int main(){
    int n;//輸入數列數
    int i = 0;
    scanf("%d", &n);

    while(n--){
        int m; scanf("%d", &m); //數列有幾組
        int x[m],y[m];
        for(i = 0; i < m; i++){//讀入X,Y座標
            scanf("%d %d", &x[i], &y[i]);
        }
        sort(x,y,m);
        printf("%.2f\n",result(x,y,m));
    }
    return 0;
}

void sort(int x[] , int y[] , int n ){//排序
    int temp;
    for(int i = n-2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(x[j]<x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;

                temp = y[j];
                y[j] = y[j+1];
                y[j+1] = temp;
            }
        }
    }
}

double result(int x[], int y[], int n ){//計算有無太陽光照斜面
    double sum = 0, maxY = y[0] , maxX = x[0];
    for (int i = 0; i < n-1; i++){
        if(y[i+1]>maxY){
            sum += sqrt((y[i+1]-y[i])*(y[i+1]-y[i])+(x[i+1]-x[i])*(x[i+1]-x[i])) / (double)(y[i+1]-y[i]) * (y[i+1]-maxY);
            maxX = x[i+1];
            maxY = y[i+1];
        }
    }
    return sum;
}