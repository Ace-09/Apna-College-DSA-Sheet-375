#include <iostream>
#include<stdio.h>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max = INT_MIN , min = INT_MAX;
	for (int i = 0; i < n; i++)
	 {
	 	if(a[i] > max)
	 	{
	 		max = a[i];
	 	}
	 	if(a[i] < min)
	 	{
	 		min = a[i];
	 	}
	 } 
	 cout<<"Max is: "<<max<<"\nMin is: "<<min;
}