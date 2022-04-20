#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin>>n;
	string a[n][3];
	for(int i=0;i<n;i++)
	{
	   cin>>a[i][0];
	    cin>>a[i][1];
	    cin>>a[i][2];
	}
	queue<string> q1,q2,q3,q4,q5;
	int s=n/4;
	if(n<4)
	{
	    s=1;
	}
	cout<<s<<endl;
	for(int i=0;i<n;i++)
	{
	    if(a[i][1]=="B" && a[i][2]=="V" && q1.size()<s)
	    {
	        q1.push(a[i][0]);
	    }
	    else if(a[i][1]=="A" && a[i][2]=="V" && q2.size()<s)
	    {
	        q2.push(a[i][0]);
	    }
	    else if(a[i][1]=="B" && a[i][2]=="NV" && q3.size()<s)
	    {
	        q3.push(a[i][0]);
	    }
	    else if(a[i][1]=="A" && a[i][2]=="NV" && q4.size()<s)
	    {
	        q4.push(a[i][0]);
	    }
	    else
	    {
	        q5.push(a[i][0]);
	    }
	}
	cout<<"BV : [";
	while(!q1.empty())
	{
	    cout<<q1.front()<<",";
	    q1.pop();
	}
	cout<<"]";
		cout<<"AV : [";
	while(!q2.empty())
	{
	    cout<<q2.front()<<",";
	    q2.pop();
	}
	cout<<"]";
		cout<<"BNV : [";
	while(!q3.empty())
	{
	    cout<<q3.front()<<",";
	    q3.pop();
	}
	cout<<"]";
		cout<<"ANV : [";
	while(!q4.empty())
	{
	    cout<<q4.front()<<",";
	    q4.pop();
	}
	cout<<"]";
		cout<<"NA : [";
	while(!q5.empty())
	{
	    cout<<q5.front()<<",";
	    q5.pop();
	}
	cout<<"]";
	return 0;
}