#include <stdio.h>

int find_most_long(int);

int main() {
    int a,b;
    int max = 0;
    int temp = 0;
    while (scanf("%d %d",&a,&b)!= EOF) {
        printf("%d %d ",a,b);
        if(a>b) {
            temp = a;
            a = b;
            b = temp;
        }
        
        max = 0;
        for (int i = a; i <= b; i++) {
            temp = find_most_long(i);
            if (temp > max) {
                max = temp;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

int find_most_long(int n){
    int count = 1;
    while(n != 1){
        if(n%2 == 1){
            n=3*n+1;
            count++;
        }else if(n%2 == 0){
            n=n/2;
            count++;
        }else if(n == 1){
            count++;
        }
    }
    return count;
}