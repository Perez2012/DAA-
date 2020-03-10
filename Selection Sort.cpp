#include<iostream>
using namespace std;


void swap (int &x, int &y){
	int temp;
	temp= x;
	x=y;
	y=temp;
}

void Disp(int *arr, int size){
	for(int i; i<size;i++){
	
	cout<< arr[i];
}
	
}

void Selsort(int *arr, int size){

		for (int i=0; i<size; i++){
			int min=i;
			for(int j=i+1; j<size; j++){
				if(arr[j]<arr[min])
				    min=j;
				swap(arr[i],arr[min]);
			}
		}
}


int main(){
	
	int n;
	cout<<"Please enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<< "Please enter the elements"<<endl;
	
	for (int i=0; i<n; i++){
		cin>> arr[i];
	}
	Selsort(arr,n);
	
	cout<<"The sorted array:" ;
	Disp(arr,n);
	
	return 0;
}



