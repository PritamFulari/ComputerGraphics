
#include <graphics.h>
void stickman_bat_ball(int speed,int color)
{
	int s=speed;
	
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);

	//right hand
		line(50+s,360+i,80+s,400+i);
// 		bat
 		circle(80+s+i,400,4);
 		line(82+s+i,401,100+s+i,430);
 		circle(143,421,10);
	
	}
	
}
void stickman_bat(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);

	//right hand
		line(50+s,360+i,80+s,400+i);
// 		bat
 		circle(80+s+i,400,4);
 		line(82+s+i,403,100+s+i,445);
	
	}
	
}
void stickman_ball(int speed,int color){
	int s=speed;
	for(int i=0;i<3;i++){
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,380);
		line(20+i+s,380,i+s,360);
		setcolor(LIGHTRED);
		circle(i+s,360,10);
	//right hand
//		line(50+s,360+i,80+s,400+i);
	}
}
	
void stickman_open(int speed,int color)
{	int s=speed;
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);
	}	
}



void stickman_close(int speed,int color)
{	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;	//right hand
		line(50+s,360+i,80+s,400+i);
	}
}

void road(int color)
{
	setcolor(color);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,850,450+i);
	}
	setcolor(WHITE);
}
void ball(int bs,int ball_color){
	setcolor(LIGHTRED);
	circle(bs,360,10);
}


int main()
{ 
	initwindow(900,900,"CRICKET");
	int page=0;
	int sm=4;
	int sw=4;
	int n=0;
	int bs=800;
	while(n<=300){
	    setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		
	    if(n<20) {road(13);
	  		stickman_open(sm,14);}
		
		if(n>=20&&n<=50)	{
		road(13);
		if(n%2==0)
		stickman_open(sm,14);
		else
		stickman_close(sm,14);
     	stickman_open(500,14);
		sm+=1;}
		
		if(n>=50 && n<=60){
			road(13);
		    stickman_bat(sm,14);
		    stickman_ball(800,14);
		}
		if(n>=60  && n<=120){
			road(13);
			stickman_bat(sm,14);
			stickman_open(800,14);
			ball(bs,14);
			bs-=10;	
		}
		
		if(n>=120  && n<=130){
			road(13);
			stickman_bat_ball(sm,14);
			stickman_open(800,14);
			
		}
		
		
		
		
		page=1-page;
		delay(100);
		
		n++;	
		
	}
	setactivepage(1);
	getch();
	closegraph(); 
}

