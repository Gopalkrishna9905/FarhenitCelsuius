#include<iostream>
using namespace std;

int celToFar(float F, float cel)
{
	cel = (5*(F-32))/9;
	return cel;
}


int main()
{
	float F , cel;
	cout<<" enter farhenit  : ";
	cin>>F;
	float x = celToFar(F,cel);
	cout<< " the celsuis is : " <<x<<endl;
}
