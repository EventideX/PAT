#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m,s,t,maxt,mind,c1,c2,d,a[502][502],b[502]={0},c[502]={0};
void dfs(int k)
{
	int i,j;
	if (k==c2)
	{
		if (d<mind)
		{
			mind=d;
			maxt=t;
			s=1;
		}
		else if (d==mind)
		     {
			     s++;
				 if (t>maxt) maxt=t;
			 }
	}
	c[k]=1;
	for (i=0;i<n;i++)
	if ((c[i]==0)&&(a[k][i]>0))
	{
		d+=a[k][i];
		t+=b[i];
		dfs(i);
		d-=a[k][i];
		t-=b[i];
	}
	c[k]=0;
}
int main()
{
	//freopen("in.txt","r",stdin);
	int i,j,k;
	memset(a,-1,sizeof(a));
	cin>>n>>m>>c1>>c2;
	for (i=0;i<n;i++) cin>>b[i];
	for (i=0;i<m;i++)
	{
		cin>>j>>k>>t;
		a[j][k]=a[k][j]=t;
	}
	maxt=0;
	mind=0x7FFFFF;
	t=b[c1];
	d=0;
	dfs(c1);
	cout<<s<<' '<<maxt;
	return 0;
}