#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin>>str;
	
	int countLower=0, countUpper=0;

	for(int i=0; i<str.length(); i++)
	{
		if(islower(str[i]))
		{
			countLower++;
		}

		if(isupper(str[i]))
		{
			countUpper++;
		}
	}
	
	if(countLower==1 && islower(str[0]))
	{
		cout<<(char)toupper(str[0]);
		for(int i=1; i<str.length(); i++)
		{
			if(isupper(str[i]))
			{
				cout<<(char)tolower(str[i]);
			}
		}
	}

	else if(countUpper==str.length())
	{
		for(int i=0; i<str.length(); i++)
		{
			cout<<(char)tolower(str[i]);
		}
	}

	else
	{
		cout<<str;
	}

	
	return 0;
}