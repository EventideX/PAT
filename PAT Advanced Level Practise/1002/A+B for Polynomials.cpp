#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int i,j,n,m,s,t;
	float a[1001],k;
	memset(a,0,sizeof(a));
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>j>>k;
		a[j]=k;
	}
	t=n;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>j>>k;
		if (a[j]==0) t++; 
		a[j]+=k;
		if (a[j]==0) t--;
	}
	cout<<t;
	for (i=1000;i>=0;i--)
	if (a[i]!=0) printf(" %d %.1f",i,a[i]);
	return 0;
} 