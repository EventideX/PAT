#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int i,j,n,m,s,t,b[1001];
	float a[1001],k;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>j>>k;
		a[j]=k;
		b[j]=1;
	}
	t=n;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>j>>k;
		if (a[j]==0) t++; 
		a[j]+=k;
		b[j]=1;
	}
	cout<<t<<' ';
	n=t; 
	t=0;
	for (i=1000;i>=0;i--)
	{
		if (b[i]!=0)
		if (t<n)
		{
			printf("%d %.1f ",i,a[i]);
			t++;
		}
		else printf("%d %.1f",i,a[i]);
	}
	return 0;
} 