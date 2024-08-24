#include <iostream>
using namespace std;



int main(){
	
	int Arr[10];
	int Arr1[10];
	int mArr[20];
	
	for(int i = 0; i<10; i++){
		cout<<"Input a number for the first Array: ";
		cin>>Arr[i];
	}
	for(int i = 0; i<10; i++){
		cout<<"Input a number for the second Array: ";
		cin>>Arr1[i];
	}
	 
    
    
    
	for(int i=0; i<10; i++){
		mArr[i] = Arr[i];
	}
	for(int i=10; i<20; i++){
		mArr[i] = Arr1[i-10];
	}
	
	
	
	for(int i=0; i<19; i++){

		for(int j=0; j<19; j++){
			
		if(mArr[j]<mArr[j+1])
		{
			int temp = mArr[j];
			mArr[j]=mArr[j+1];
			mArr[j+1]=temp;
		}
		
	}
	}
		for(int i = 0; i<20; i++){
		cout<<mArr[i]<<" ";
	}

	     
	return 0;
}