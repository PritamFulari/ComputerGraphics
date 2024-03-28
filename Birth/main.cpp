#include<graphics.h>
#include<Windows.h>
#include<mmsystem.h>

// stickman open legs with rose

//void horse(int speed,int color){
//	int s=speed;
//	
//}
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
//	line(50+i+s,350,40+i+s,400);
//	line(50+i+s,350,60+i+s,400);
//	line(40+s,400-i,60+s,400-i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s+i,360,80+s+i,400);

	
	}
	
}

//stickman with gift
void stickman_gift(int speed,int color)
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

	setcolor(LIGHTGREEN);

	for(int i=0;i<2;i++){
		setfillstyle(SOLID_FILL, LIGHTGREEN);
	rectangle(90+i+s,340,110+i+s,360);
	floodfill(91+i+s,341,10);
//	line(90+i+s,360,90+i+s,340);
//	line(90+i+s,360,110+i+s,360);
//	line(90+i+s,340,110+i+s,340);
//	line(110+i+s,360,110+i+s,340);
	}
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,340-h,110-i+s,340-h);
	}
}
//stickwomen_gift
void stickwomen_gift(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
//	line(50+i+s,350,40+i+s,400);
//	line(50+i+s,350,60+i+s,400);
//	line(40+s,400-i,60+s,400-i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,375);
		line(20+s+i,375,s+i,350);
	//right hand
		line(50+s+i,360,80+s+i,400);
	}
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++){
	setfillstyle(SOLID_FILL, LIGHTGREEN);
	rectangle(s+i-10,353,s+i+10,337);
	floodfill(s+i-9,338,10);
	
	}
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++){
	    line(s+i-10,337-h,s-i+10,337-h);
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
		line(50+i+s,350,50+i+s,400);
//	line(50+i+s,350,40+i+s,400);
//	line(50+i+s,350,60+i+s,400);
//	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s+i,360,80+s+i,400);

	
	}
	
}

// stickman chat
void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,210+s,200,210+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(-20+s,210,"Happy Birthday ");
	outtextxy(-5+s,240," Varenyam ");
	
}

void stickwomen_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210," Thank You");
	outtextxy(100+s,240,"Bro");
	
}
/*
void horse(int color){
	
}*/
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
		settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
//		settextjustify(CENTER_TEXT, CENTER_TEXT);
		outtextxy(150, 150, "Happy Bithday Varenyam");
	// rest position
		
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
		

	
	    if(n>60&&n<63)
	    {
	    	if(n==61)
	    	delay(300);
		    road(13);
			stickman_gift(sm,14);
			if(n==61)
			stickman_chat(sm,14,14);
			if(n==62)
			delay(4000);
	    	stickwomen_open(280,15);
			}
	    	if(n>=63  && n<70){
			
	    	 road(13);
	    	
	    	 stickman_open(sm,14);
	    	
	    	stickwomen_gift(280,15);
//	    	stickman_open(345,14);


	    	if(n==64)
	    	stickwomen_chat(280,15,15);
	    	delay(400);
		}
		

	
	/*	if(n>=70&&n<=170)
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



