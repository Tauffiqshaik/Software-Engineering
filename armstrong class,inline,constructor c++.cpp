#include<iostream>
using namespace std;
class armstrong
{
	public:
	int n,a,sum=0,rem;
	armstrong()
	int in();
	int out();
};
inline armstrong::in()
{
	cout<<"enter the number:\n";
	cin>>n;
}
inline armstrong::out()
{
	a=n;
	while(a!=0)
	{
		rem=a%10;
		sum+=rem*rem*rem;
		a/=10;
	}
	if(sum==n)
	cout<<"armstrong";
	else
	cout<<"not";
}
int main()
{
	armstrong sse;
	sse.in();
	sse.out();
	return 0;

}