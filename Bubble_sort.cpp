#include<iostream>
using namespace std;

int main(){
	int n, temp;
	cout<<"How many elements you want to insert:";
	cin>>n;
	
	int arr[n], flag=1, i=0;
	
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<":";
		cin>>arr[i];
	}
	
	while(i<n-1 && flag == 1){
		flag = 0;
		for(int j=0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
	}
	
	cout<<endl<<endl<<"Sorted list is:"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<"\t";
	}
}
