#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLUE);
line(150,150,200,300);
getch();
closegraph();
}