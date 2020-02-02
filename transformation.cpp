	//LAB No.5 : TRANSFORMATION
					//*******TRANSLATION********* 

#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
int graphdriver=DETECT,graphmode,errorcode;
int i;
int x2=150,y2=200,x1=90,y1=50,x,y;
initgraph(&graphdriver,&graphmode,"c:\\tc\\bgi");
rectangle(x1,y1,x2,y2);
printf("\n\n\n\t\t\t***TRANSLTION***\n\n") ;
printf("\t\tEnter translation co-ordinates (x,y):  ");
scanf("%d%d",&x,&y);
x1=x1+x;
y1=y1+y;
x2=x2+x;
y2=y2+y;
printf("\n\n\nAfter Translation\n\n\n\t\tBefore Translation\n\n");
printf("\t\t\t\t(x1,y1)= (90,50)\n");
	printf("\t\t\t\t(x2,y2)= (150,200\n");
rectangle(x1,y1,x2,y2);
getch();
closegraph();
}

				//**********SCALING***********
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm,errorcode;
	int i;
	int x1=100,y1=100,x2=150,y2=150,x;
	float y;
	//printf("Enter the 2 line end points:");
	//printf("x1,y1,x2,y2");
	//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	rectangle(x1,y1,x2,y2);
	printf("\n\n***SCALING***") ;
	printf("\n\n\tEnter scaling co-ordinates(x,y):  ");
	scanf("%d%f",&x,&y);
	x1=(x1*x);
	y1=(y1*y);
	x2=(x2*x);
	y2=(y2*y);
	printf("\n\n\n\n\n\n\n\t\t\tCo-ordinates:\n");
	printf("\t\t\t\t(x1,y1)= (100,100)\n");
	printf("\t\t\t\t(x2,y2)= (150,150\n");
	printf("\n\n\n\n\t After scaling.\n\nBefore scaling");
	printf("\n\n\t\t\t....Swornim Karma.....");
	rectangle(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0;
}

			//**********ROTATION************
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int graphdriver=DETECT,graphmode,errorcode;
int i;
int x2=400,y2=410,y1=200,x1=250,x,y,xn,yn;
double r11,r12,r21,r22,th;
//printf("Enter the 2 line end points:");
//printf("x1,y1,x2,y2");
//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&graphdriver,&graphmode,"c:\\turboc3\\bgi");
printf("\n\n\n\t\t\t***ROTATION***") ;
line(x1,y1,x2,y2);
printf("\n\n\n\n\n\t\tEnter the angle for Rotation: ");
scanf("%lf",&th);
printf("\n\n\n\n\t\tCo-ordinates:\n");
printf("\n\t\t\t(x1,y1) = (200, 250)");
printf("\n\t\t\t(x2,y2) = (400, 410)");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t***SWORNIM KARMA***\n");
r11=cos((th*3.1428)/180);
r12=sin((th*3.1428)/180);
r21=(-sin((th*3.1428)/180));
r22=cos((th*3.1428)/180);
xn=((x2*r11)-(y2*r12));
yn=((x2*r12)+(y2*r11));
line(x1,y1,xn,yn);
getch();
closegraph();
}
