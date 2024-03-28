#include<iostream>
#include<graphics.h>
#include<conio.h>

using namespace std;
class drawpoly
{
	public:
		int x,y,temp,n,i,j,k,dy,dx;
		int a[20][2],xi[20];
		float slope[20];
		
		void drawpoly1()
		{
			
			cout<<"\n enter the no of vertices of polygon";
			cin>>n;
			cout<<"\n Enter the coordinates of edges one by  one";
			for(i=0;i<n;i++)
			{
				cout<<"X"<<i<<"Y"<<i<<": ";
				cin>>a[i][0]>>a[i][1];
				
			}
			a[n][0]=a[0][0];//last point should be connected to first point to make a  close ffig
			a[n][1]=a[0][1];
			
			for (i=0;i<n;i++)
			{
				line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);  //draw polygon
			}
			getch();
			
		}
		
}d;
class fillpoly : public drawpoly
{
	public:
		void fillpoly1()
		{
			
			for(i=0;i<n;i++)
			{
				dy=a[i+1][1]-a[i][1];
				dx=a[i+1][0]-a[i][0];
				
				if(dy==0)
				slope[i]=1.0;  // y is always one because scanline diff is only by -1
				if(dx==0)
				slope[i]=0.0;
				if(dy!=0 &&  dx!=0)
				{
					slope[i]=(float)dx/dy;
				}
			}
			
			for(y=0;y<800;y++)
			{
				k=0;
				for(i=0;i<n;i++)
				{
					if(((a[i][1]<=y)&&(a[i+1][1]>y)) || ((a[i][1]>y)&&(a[i+1][1]<=y)) )
					{
						xi[k]=(int)(a[i][0])+slope[i]*(y-a[i][1]);
						k++;
					}
				}
				for(j=0;j<k-1;j++)
				{
					for(i=0;i<k-1;i++)
				{
					if(xi[i]>xi[i+1]){
						temp=xi[i];
						xi[i]=xi[i+1];
						xi[i+1]	=temp;			}
				}
				setcolor(6);
				for(i=0;i<k;i+=2){
					line(xi[i],y,xi[i+1],y);
					delay(40);
				}
			}
		}
	}
}f;
int main()
{
	
		int gd=DETECT,gm;
		initgraph(&gd,&gm,NULL);
//	initwindow(800,800);
	f.drawpoly1();
	f.fillpoly1();
	f.drawpoly1();
	f.fillpoly1();
	closegraph();
	return 0;
}







