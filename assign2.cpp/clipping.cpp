#include<iostream>
#include<graphics.h>
using namespace std;
static int LEFT=1,RIGHT=2,BOTTOM=4,TOP=8;
int xl,yl,xh,yh;
int getcode(int x,int y){
int code=0;
if(y>yh) code|=TOP;
if(y<yl) code|=BOTTOM;
if(x<xl) code|=LEFT;
if(x>xh) code|=RIGHT;
return code;
}
int main(){
	initwindow(900,900);
//int gdriver=DETECT,gmode;
cout<<"enter LEFT,RIGHT,BOTTOM,TOP coordinates of window";
cin>>xl>>yl>>xh>>yh;
int x1,y1,x2,y2;
cout<<"enter the coordinates of the line";
cin>>x1>>y1>>x2>>y2;
//initgraph(&gdriver,&gmode,NULL);
setcolor(BLUE);
rectangle(xl,yl,xh,yh);
line(x1,y1,x2,y2);
getch();

int outcode1=getcode(x1,y1) , outcode2=getcode(x2,y2);
int accept=0;
while(1){

float m=(float)(y2-y1)/(x2-x1);
if(outcode1==0 && outcode2==0){
accept=1;
break;}
else if((outcode1 &outcode2)!=0){
break;
}
else{
int x,y,temp;
if(outcode1==0)
temp=outcode2;
else
temp=outcode1;
if(temp & TOP){
x=x1+(yh-y1)/m;
y=yh;}

else if (temp & BOTTOM){
x=x1+(yl-y1)/m;
y=yl;
}
else if (temp & LEFT){
x=xl;
y=y1+m*(xh-x1);
}
else if (temp & RIGHT){
x=xh;
y=y1+m*(xh-x1);
}
if(temp==outcode1){
x1=x;
y1=y;
outcode1=getcode(x1,y1);
}
else{
x2=x;
y2=y;
outcode2=getcode(x2,y2);
}
}
}
cout<<"after clipping";
if(accept)
cleardevice();
rectangle(xl,yl,xh,yh);
setcolor(WHITE);
line(x1,y1,x2,y2);
delay(10000);
closegraph();
return 0;



}
