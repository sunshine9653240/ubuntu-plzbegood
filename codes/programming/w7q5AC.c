#include <stdio.h>

int main(){
    int start,end,height;
    int result[10001]={0};
    while(scanf("%d %d %d", &start, &height, &end ) != EOF){
        for (int i = start; i <= end - 1; i++) {
            if(result[i]<height){
                result[i] = height;
            }
        }
    }
    height = 0;
    for (int i = 0 ; i < 10001; i++) {
        if(result[i]!=height){
            printf("%d %d ",i ,result[i]);
            height = result[i];
        }
    }
    return 0;
}