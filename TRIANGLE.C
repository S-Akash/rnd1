#include<stdio.h>
#include<math.h>
float tri(float x1,float y1,float x2,float y2);
void main()
{
float x1,y1,x2,y2,x3,y3;
float dist1,dist2,dist3;
printf("enter the coordinates");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
dist1=tri(x1,y1,x2,y2);
dist2=tri(x2,y2,x3,y3);
dist3=tri(x3,y3,x1,y1);
printf("first side %f",dist1);
printf("second side %f",dist2);
printf("third side %f",dist3);
if((dist1+dist2>dist3)&&(dist2+dist3>dist1)&&(dist3+dist1>dist2))
{
printf("it is triangle");
if(dist1==dist2||dist2==dist3||dist3==dist1)
printf("it is isosceles triangle");
else if((dist1==dist2)&&(dist2==dist3))
printf("it is equilateral triangle");
else if((dist1*dist1+dist2*dist2==dist3*dist3)||(dist2*dist2+dist3*dist3==dist1*dist1)||(dist3*dist3+dist1*dist1==dist2*dist2))
printf("it is right angled triangle");
else
printf("it is scalene trinagle");
}
else
printf("cannot form triangle with vertices");

}
float tri(float x1,float y1,float x2,float y2)
{
float x,y,distance1;
x=x2-x1;
y=y2-y1;
distance1=pow(x,2)+pow(y,2);
distance1=sqrt(distance1);
return distance1;
}
