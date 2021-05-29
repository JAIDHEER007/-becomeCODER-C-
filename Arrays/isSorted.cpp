//isSorted

#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &arr){
	bool increasing = true;
	bool decreasing = true;
	
	for(int i=1;i<arr.size();i++){
		if(arr[i-1] < arr[i]){
			if(!increasing){ return false; }
			increasing &= true; 
			decreasing &= false;
		}else if(arr[i-1] > arr[i]){
			if(!decreasing){ return false; }
			increasing &= false; 
			decreasing &= true;
		}
	}
	
	return (increasing || decreasing);
}

int main(){
	cout<<boolalpha;
	
	//Single Element
	vector<int> arr1{ 553 };
	cout<<isSorted(arr1)<<endl; //true
	
	//Same elements
	vector<int> arr2{ 553, 553, 553, 553 };
	cout<<isSorted(arr2)<<endl; //true
	
	//sorted in ascending order
	vector<int> arr3{ 402, 645, 921, 1752, 1843 };
	cout<<isSorted(arr3)<<endl; //true
	
	//sorted in descending order
	vector<int> arr4{ 1843, 1752, 921, 645, 402 };
	cout<<isSorted(arr4)<<endl;	//true
	
	vector<int> arr5{ 402, 645, 553, 921, 1752, 1843 };
	cout<<isSorted(arr5)<<endl;	//false
	
	vector<int> arr6{ 1843, 1752, 921, 553, 645, 402 };
	cout<<isSorted(arr6)<<endl;	//false
	
	return 0;
}
