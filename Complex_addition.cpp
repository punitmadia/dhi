#include<iostream>
using namespace std;
struct complex
{
int x,y;
};
complex sum(complex a,complex b)
{
complex c;
c.x=a.x+b.x;
c.y=a.y+b.y;
return c;
}







int main()
{
complex a;
cin>>a.x;
cin>>a.y;
complex b={5,6};
complex c=sum(a,b);
cout<<c.x<<"+";
cout<<c.y<<"i";

}
