//Write a program to find sum of all elements of an array. (Use functions)

//include library
#include<iostream>
using namespace std;

//using functions
int func(int arr[],int n){
	int sum=0;
	//using loop for adding every numbers in array
	for (int i=0;i<n; i++){
		sum+=arr[i];
	}
	return sum;

}
int main(){
	int arr[7]={1,2,10,11,5,6,3};  
	//call for functions
	cout<<"The sum of the numbers in the array: "<<func(arr,8)<<endl;
	return 0;
}
