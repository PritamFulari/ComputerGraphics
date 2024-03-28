
#include<graphics.h>

  //  --COLORS-- //
  
  /*
     f1 = black
     f2 = blue
     f3 = green
     f4 = cyan
     f5 = red
     f6 = magenta
     f7 = yellow
     f8 = white
     
  */
  
  // --CONTROLS-- //
  
  /*
    ARROWS KEYS-
    
    left arrow
    right arrow
    up arrow 
    down arrow
    
  */
int main()
{
	initwindow(600,500,"Cool Programming Projects ",150,50);
	
	int top=450,left=0,right=50,bottom=500;
	int speed=52;
	while(1)
	{
		bar(left,top,right,bottom);
		if(GetAsyncKeyState(VK_UP))
		{
			top-= speed;
			bottom-=speed;
		}
		if(GetAsyncKeyState(VK_DOWN))
		{
			top+=speed;
			bottom+=speed;
		}
		if(GetAsyncKeyState(VK_RIGHT))
		{
			left+=speed;
			right+=speed;
		}
		if(GetAsyncKeyState(VK_LEFT))
		{
			left-=speed;
			right-=speed;
		}
		if(GetAsyncKeyState(VK_F1))
		{
			setcolor(BLACK);
			setfillstyle(SOLID_FILL,BLACK);
		}
		if(GetAsyncKeyState(VK_F2))
		{
			setfillstyle(SOLID_FILL,BLUE);
		}
		if(GetAsyncKeyState(VK_F3))
		{
			setfillstyle(SOLID_FILL,GREEN);
		}
		if(GetAsyncKeyState(VK_F4))
		{
			setfillstyle(SOLID_FILL,CYAN);
		}
		if(GetAsyncKeyState(VK_F5))
		{
			setfillstyle(SOLID_FILL,RED);
		}
		if(GetAsyncKeyState(VK_F6))
		{
			setfillstyle(SOLID_FILL,MAGENTA);
		}
		if(GetAsyncKeyState(VK_F7))
		{
			setfillstyle(SOLID_FILL,YELLOW);
		}
		if(GetAsyncKeyState(VK_F8))
		{
			setfillstyle(SOLID_FILL,WHITE);
		}
		delay(200);
		
	}
	getch();
	closegraph();
}

