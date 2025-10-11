#include<stdio.h>
#include<conio.h>
int main(){
    for(int i=0; i<10; i++)
    {
        int x=11;
        static int y=11;
        printf("x = %d \t y = %d \n",x,y);
        x++;
        y++;
    }
    return 0; 
}
