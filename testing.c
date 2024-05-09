#include<stdio.h>
int main (){
    int x;
    for (x=1;x<=10;x++){
        if(x%2==1)
            continue;
        printf("%d\t",x);
    }

    int a=10,b=6;
    if(++a || ++b) printf("%d%d",a,b);
}