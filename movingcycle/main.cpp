#include<graphics.h>

int boatcolor;
int circlecolor;
int flagcolor;
void ship(int speed)
{
	setcolor(boatcolor);
	int s=speed;
	setfillstyle(SOLID_FILL,boatcolor);
    for(int i=0;i<3;i++)
    {
   	int points[10]={-150+i+s,300-i,150-i+s,300-i,100-i+s,375-i,-100+i+s,375-i,-150+i+s,300-i};
	drawpoly(5,points);
	}
	floodfill(0+s,350,boatcolor);
	// circles
	
	setcolor(circlecolor);
		circle(0+s,337,20);
		circle(-70+s,337,20);
		circle(70+s,337,20);

	setfillstyle(SOLID_FILL,circlecolor);
	floodfill(0+s,337,circlecolor);
	floodfill(-70+s,337,circlecolor);
	floodfill(70+s,337,circlecolor);
	
	// flag
	
	setcolor(flagcolor);
	int flagpoint[8]={-120+s,270,0+s,100,120+s,270,-120+s,270};
	drawpoly(4,flagpoint);
	setfillstyle(SOLID_FILL,flagcolor);
	floodfill(2+s,200,flagcolor);
	line(0+s,260,0+s,298);

}

// river 
void river(int color)
{
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,color);
	rectangle(-10,360,710,640);
	floodfill(300,500,YELLOW);
}

void sun(int color){
	setcolor(boatcolor);
	setfillstyle(SOLID_FILL,color);
	circle(670,90,30);
	floodfill(670,90,boatcolor);
}

int main()
{
	initwindow(700,600,"Boat",150,50);
	int page=0;
	int n=0;
	boatcolor=12;
	circlecolor=11;
	flagcolor=11;
   while(n<850)
   {
   	setactivepage(page);
   	setvisualpage(1-page);
   	cleardevice();
   	ship(n);
   	sun(9);
   	river(9);
   	delay(20);
   	page=1-page;
   	n++;
   }	
	getch();
	closegraph();
}
