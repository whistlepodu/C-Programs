#include<iostream.h>
#include<bits/stdc++.h>
//using namespace std;
int main()
{
	long long int i,n,c=0,res=0,mx=0,j;
	cin>>n;
	long long int arr[n-1];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		mx=0;
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j] && arr[j]!=0 && arr[j]!=mx)
			{
				mx=arr[j];
				c++;
				arr[j]=0;
			}
		}
		if(c!=0)
			res++;
	}
	cout<<res<<endl;
	return 0;
}