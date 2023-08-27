#include<bits/stdc++.h>

using namespace std;
bool isNearlyLucky(long long int n);
int main()
{
	long long int num;
	cin>>num;
	if(isLucky(num))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	return 0;
}

bool isNearlyLucky(long long int n)
{
	long long int temp=0, ctr=0; 
	while(n>0)
	{
		temp = n % 10;
		n /= 10;
		if(temp==4 || temp==7)
		{
			ctr++;
		}
	}

	if(ctr==4 || ctr==7)
	{
		return true;
	}
	return false;
}

//Solved!!