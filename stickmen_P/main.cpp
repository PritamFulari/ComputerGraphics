#include<graphics.h>
#include<Windows.h>
#include<mmsystem.h>

// stickman open legs with rose

void stickman_open(int speed,int color)
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
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);
	}
	
}

// stickman close legs with rose

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
;
	//right hand
		line(50+s,360+i,80+s,400+i);


	}
	
	
}

// stickwomen open legs 

void stickwomen_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

//stickman with rose
void stickman_rose(int speed,int color)
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
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);
	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
}
//stickwomen_rose
void stickwomen_rose(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,375);
		line(20+s+i,375,s+i,350);
	//right hand
		line(50+s+i,350,80+s+i,400);
	}
	//rose 
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(s+i,375,s+i,350);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++){
	    line(s+i-10,350-h,s-i+10,350-h);
	}
	
}
// stickwomen close legs 
void stickwomen_close(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

// stickman chat
void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,120+s,200,120+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(-20+s,210,"I Love u");
	outtextxy(-5+s,240,"Smita");
	
}

void stickwomen_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+100,200,140+s+100,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210," I love u");
	outtextxy(100+s,240," too Ketan");
	
}
// road

void road(int color)
{
	setcolor(color);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(WHITE);
}
//
int main()
{

	initwindow(700,550,"Birthday",150,50);
	int page=0;
	int sm=4;
	int sw=4;
	int n=0;
	int cs=650;
	int rf=0;
	while(n<=420)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
	// rest position
		settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
//		settextjustify(CENTER_TEXT, CENTER_TEXT);
		outtextxy(150, 150, "Happy Anniversary Didi And JiJu");
	    if(n<20)
	    {  	road(13);
	  		stickman_open(sm,14);
	    	stickwomen_open(280,15);
		}
		
	// stick_man walk 40
		if(n>=20&&n<=60)
		{
		road(13);
		if(n%2==0)
		stickman_open(sm,14);
		else
		stickman_close(sm,14); 
		stickwomen_open(280,15);	
		sm+=4;

		}
		
	//stick man propose 10
	
	    if(n>60&&n<63)
	    {
	    	if(n==61)
	    	delay(300);
		    road(13);
			stickman_rose(sm,14);
			if(n==61)
			stickman_chat(sm,14,14);
			if(n==62)
			delay(400);
	    	stickwomen_open(280,15);
			}
	    	if(n>=63  && n<70){
			
	    	 road(13);
	    	
	    	 stickman_open(sm,14);
	    	
	    	stickwomen_rose(280,15);
//	    	stickman_open(345,14);


	    	if(n==67)
	    	stickwomen_chat(280,15,15);
	    	delay(400);
		}
		

	/*
		if(n>=70&&n<=170)
		{
		    road(13);
			
			if(n%2==0){
//		
			stickwomen_open(280+sw,15);
			stickman_open(350+sw,9);
		
			}
			else
			{
			stickwomen_close(280+sw,15);
			stickman_close(350+sw,9);
		
			}
			sw+=5;
		}
 */
		page=1-page;
		delay(100);
		
		n++;
		
	}
		

			setactivepage(1);
//		

	getch();
	closegraph();

}


