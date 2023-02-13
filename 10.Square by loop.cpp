#include<iostream>

using namespace std;
int main()
{
	int a,b;
	cout<<"Enter total Rows of rectangle= ";
	cin>>a;
	cout<<"Enter total Columns of rectangle= ";
	cin>>b;
	
	cout << "\n-----Rectangle Pattern-----\n";
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=b; j++)
		{
			if(i == 1 || i == a || j == 1 || j == b)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;	
	}
	return 0;	
}
