#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],rev[n];

	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	cout<<"\nOriginal Array: \n";


	for(int i = 0; i < n; i++)
	{
		cout<<a[i];
	}

	cout<<"\nReverse Array: \n";

	for(int i = n-1 ; i >= 0; i--)
	{
		cout<<a[i];
	}
}