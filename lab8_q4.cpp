//include library
#include<iostream>
using namespace std;

//using functions 
//merging the  arrays
int  mergarr(int arrA[],int arrB[]){
    int arr[10];
	for(int i=0;i<10;i++){
		if(i<5){
		arr[i] =int (arrA[i]);
		}
		if(i>4 && i<10){
		arr[i] =int (arrB[i-5]);}
		cout<<arr[i]<<",";
	
}
}



//using function for maximum element
int func1(int arrA[]){
	//using loop for checking the maximum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]>a){	
			a = arr[i];}
		
}
	return a;}cout<<"The max of the numbers in the array: "<<func1(arr)<<endl;


//using function for minimum element
int func2(int arr[]){
	//using loop for checking the minimum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]< a){	
			a = arr[i];}
		
}
	return a;}


int main(){
	int arrA[5]={1,2,10,11,5};
	int arrB[5]={6,3,2,8,4}; 
	cout<< "The arrA :{1,2,10,11,5}"<<endl;
	cout<< "The arrB :{6,3,2,8,4}"<<endl;
	cout<<"The merger array of arrA and arrB is arr : { ";
	mergarr(arrA,arrB);
	cout <<" }"<<endl;
	cout<<"The maximum of the numbers in the array: "<<max(mergarr(arrA,arrB))<<endl;
	cout<<"The minimum of the numbers in the array: "<<min(mergarr(arrA,arrB))<<endl;
	//call for functions
	
	return 0;
}
