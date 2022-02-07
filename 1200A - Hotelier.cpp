#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool arr[10];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='0' && s[i]<='9')
			arr[s[i]-'0']=0;
		else if(s[i]=='L')
		{
			int j;
			for(j=0;j<10 && arr[j]==1;j++);
				arr[j]=1;	
		}
		else
		{
			int j;
			for(j=9;j>=0 && arr[j]==1 ; j--);
				arr[j]=1;
		}
 
	}
	for(int i=0;i<10;i++)
		cout<<arr[i];
return 0;
}
