#include <stdio.h>

int result(int , int, int[]);

int main() {
    int left ,next ;
    scanf("%d %d", &left, &next);

    while(left+next != 0){
        int a[left];
        for(int i = 0; i < left; i++){//陣列=1,2,3,4.....left
            a[i] = i + 1;
        }
        printf("%d\n", (left+1-result(left, next, a)) % left + 1);
        
        scanf("%d %d", &left, &next);
    }
}

int result(int left , int next, int a[]) {
    if(left == 1){
        return 1;
    }
    int killwho = (next-1) % left;
    int buried;
    while(1){
        left--;
        buried = (killwho - 1 + next) % left;
        if(buried >= killwho){
            buried++;
        }
        //printf("%d %d %d\n", left, killwho, buried);
        a[killwho] = a[buried];
        for (int i = buried; i < left; i++) {
            a[i] = a[i+1];
        }
        if(killwho > buried){
            killwho--;
        }
        

        a[left] = 0;
        killwho = (killwho + next) % left;
        if(a[1] == 0){
            break;
        }
    }
    return a[0];
}