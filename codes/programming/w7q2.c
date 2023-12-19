#include <stdio.h>

void move(int pointblock,int TorE,int block){
    
    //scanf();
}

void pile(int pointblock,int TorE,int block){

}

void result(int pointblock,int TorE,int block){

}

int main(){
    char MorP[5],TorE[5];//move or pile and onto or over
    int pointblock[2];
    int n,debug = 0;
    scanf("%d",&n);
    int block[n];
    while(1){
        scanf("%s", MorP);
        scanf("%s", pointblock[0]);
        scanf("%s", TorE);
        scanf("%s", pointblock[1]);
        if (MorP[0]=='m'){
            move(pointblock,TorE,block);
        }else if (MorP[0]=='p'){
            pile(pointblock,TorE,block);
        }else if (MorP[0]=='q'){
            //result();
            break;
        }
        
        debug++;//avoid infinite loop
        if(debug>1000){
            break;
        }
    }
    return 0;
}