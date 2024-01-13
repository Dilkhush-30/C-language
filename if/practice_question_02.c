#include<stdio.h>
#include<dos.h>
void main()
{
    int i;
    textcolor(RED);
    textbackground(WHITE);
    for(i=1;i<=100;i++){
        cprintf("i love you \n");
        delay(200);
    }
    getch();
}