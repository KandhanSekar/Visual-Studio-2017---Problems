// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
void findmax(int a[])
{
	vector<int> maxsum=new vector(sizeof(a));
	for (int i = 1; i < sizeof(a); i++)
	{
		if ((maxsum[i-1])&&(a[i] > a[i]+maxsum[i-1]))
		{
			maxsum.push_back(a[i]);
			//cout << maxsum<<"\n";
		}
		else
		{
			maxsum[i] = maxsum[i] + a[i];
		}
	}
	for(int j=0;j<sizeof(a);j++)
	cout<<maxsum[j];

}
int main()
{
	int a[] = { -1, 3, 4, 9, -2, -3, 5 };
	findmax(a);
    return 0;
}

