#include<iostream.h>
class ll
{
public:
int d;
ll *link;
}
main()
{
ll *first;
int n,t;
cin>>n;
t=n;
ll *p;
first=NULL;
while(n!=0)
{
p=new ll();
p->d=n%10;
p->link=first;
first=p;
n=n/10;
}
p=first;
while(p!=NULL)
{
cout<<p->d<<"->";
p=p->link;
}
}