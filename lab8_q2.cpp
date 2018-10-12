//include library
#include<iostream>
using namespace std;

//using functions 

//using function for maximum element
int func1(int arr[]){
	//using loop for checking the maximum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]>a){	
			a = arr[i];}
		
}
	return a;}


//using function for minimum element
int func2(int arr[]){
	//using loop for checking the minimum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]< a){	
			a = arr[i];}
		
}
	return a;
}
//using function for mean
int func3(int arr[]){
	float sum=0;
	//using loop for adding every numbers in array
	for (int i=0;i<10; i++){
		sum+=arr[i];
	}
	//returning the mean
	return sum/10;

}
int main(){
	int arr[10]={1,2,10,11,5,6,3,2,8,4};  
	//call for functions
	cout<<"The maximum of the numbers in the array: "<<func1(arr)<<endl;
	cout<<"The minimum of the numbers in the array: "<<func2(arr)<<endl;
	cout<<"The mean of the numbers in the array: "<<func3(arr)<<endl;
	return 0;
}
