#include<iostream>
using namespace std;
int main()
{
	int rows, cols;
	int sum,j;
	
	cout<<"Enter the number of rows:";
	cin>>rows;
	cout<<"Enter the number of columns:";
	cin>>cols;
	
	//declare a 2D array
	int array[rows][cols];
	
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; j++)
		sum+=array[i][j];
		int average=sum *array[i][j];
		{
			cout<<"Element [" <<i<<"]["<<j<<"]: ";
			cin>>array[i][j];
		}
	}
	//Display the 2D array
	cout<<"\nThe 2D array is:\n";
	for(int i=0; i<cols; i++){ 
	  for(int j=0; j<cols; j++){
	  	cout<< array[i][j] <<" ";
	  }
	  cout<<endl;
	}
	return 0;
	
}