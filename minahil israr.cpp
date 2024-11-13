#include<iostream>
using namespace std; 
int main()
{  
int sum;
	int arr[5]={2,3,5,6,7};
	//cout<<"Elements of the array are:";
     for(int i=0; i<5; i++){
     	cout<<arr[i]<<" ";
     	sum+=arr[i];
     	
     	
	 }	
	 cout<<sum<<endl;
	 cout<<endl;
	 return 0;
}