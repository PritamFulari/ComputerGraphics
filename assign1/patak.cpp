#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class pixel
{
	protected:
	    float x,y,x1,y1,x2,y2,c;
	public:
	   pixel()
	   { 
	     x=0;
	     y=0;
	     c=10;
	   }
	   pixel(int a,int b,int d)
	   {
	    x=a;
	    y=b;
	    c=d;
	   }
	    void put()
	    {
	      putpixel(x,y,c);
	    }
}p;

class line: public pixel
{
	public:
	   float dx,step,dy,m,xi,yi;
	 
	  void lin(int x1,int x2,int y1,int y2)
	  {
	   dx=x2-x1;
	   dy=y2-y1;
	   m=dy/dx;
	   if (m>1)
	   {
	     step=abs(dy);
	   }
           else  
           {
             step=abs(dx);
           }
           xi=dx/step;
           yi=dy/step;
           x=x1+0.5;
           y=y1+0.5;
           put();
           
           for(int i=1;i<=step;i++)\
           {
              x=x+xi;
              y=y+yi;
              put();
              delay(10);
           }
        }
        
}l;

int main()
{
	
	
	int gd = DETECT;
	int gm = DETECT;
	
	initgraph(&gd,&gm,NULL);
	l.lin(100,100,400,100);
	l.lin(100,100,100,400);
	l.lin(100,400,400,400);
	l.lin(400,100,400,400);
	closegraph();
	return 0;
}
