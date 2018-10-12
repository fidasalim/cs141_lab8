//include library
#include<iostream>
using namespace std;

//using functions 
//merging the arrays
int * mergarr(int arrA[],int arrB[]){
	for(int i=0;i<10;i++){
		int *p = int arr;
		if(i<5){
		int arr[i]=int 	arrA[i];}
		if(i>4 && i<10){
		int arr[i]=int arrB[6+i];}
}

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
	int arrA[]={1,29,10,11,54};  
	int arrB[]={44,3,56,2};  
	cout<<" Our new array by merging the array is :"<<
	//call for functions
	cout<<"The maximum of the numbers in the array: "<<func1(arr)<<endl;
	cout<<"The minimum of the numbers in the array: "<<func2(arr)<<endl;
	cout<<"The mean of the numbers in the array: "<<func3(arr)<<endl;
	return 0;
}
