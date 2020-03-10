#include <iostream>
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
	
	void bSort(int *arr, int size){
		
		   for(int i = 0; i<size; i++) {

              for(int j = 0; j<size-i-1; j++) {
                if(arr[j] > arr[j+1]) {       
               swap(arr[j], arr[j+1]);
            
         }
}
}
	}
		


int main(){
	int main() {
   int n;
   cout << "Please enter the number of elements: ";
   cin >> n;
   int arr[n];   
   cout << "Please enter elements:";
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   
   bSort(arr,n);
	
	cout<<"The sorted array:" ;
	Disp(arr,n);
	


	return 0;
}
