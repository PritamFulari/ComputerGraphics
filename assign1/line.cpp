#include<iostream>
#include<graphics.h>
using namespace std;
   
class pixel
{ 

    protected :
      int x,y,c,x1,y1,x2,y2;
    public :
    pixel()
    { 
      x=0;
      y=0;
      c=11;
    }
    pixel(int a,int b,int d)
    {
     x=a;
     y=b;
     c=d;
    }
    
    
    void get()
    {
      cout<<"\n enter the coordinates ";
      cin>>x>>y;
    }
    
    
    void put()
    {
      putpixel(x,y,10);
    }
}p;
class line:public pixel
{
 public:
 float dx,dy,m,steps,xi,yi;
 void take()
 {
   cout<<"Enter the coordinates of point: ";
   cin>>x1>>y1;
   cout<<"\n p2:";
   cin>>x2>>y2;
 }
 void lin()
 {
  dx=x2-x1;
  dy=y2-y1;
  if(abs(dx)>abs(dy))
    steps=abs(dx);
  else
    steps=abs(dy);
   xi=dx/steps;
   yi=dy/steps;
   x=xi+0.5;
   y=yi+0.5;
   put();
  
  for(int i=1;i<=steps;i++)
  {
    x=x+xi;
    y=y+yi;
    put();
    delay(100);
  }
 }
}l;
 
int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  l.take();
  l.lin();
  closegraph();
  return 0;
}

