
#include<stdio.h>
/*
int main(){
    for(int i=0; i<100; i++){
        printf("%d, ", i);
    }
}
*/
int display(int);

int main(){
    display(100);
}

int display (int a){
    if(a <= 100 && a > 0){
        printf("%d, ", a);
        a--;
        display(a);
    }
}
