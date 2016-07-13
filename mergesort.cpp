#include <iostream>
using namespace std;
void mergeSort(int[],int);
int main(){
	int arr[8]={2,4,1,6,8,5,3,7};
	mergeSort(arr,8);
}
void merge(int* left,int* right,int* arr){
	
	int i=0;
	int j=0;
	int k=0;
	int left_size=sizeof(left);
	int right_size=sizeof(right);
	while(k > (left_size+right_size)){
		if(left[i] > right[j]){
			arr[k]=left[i];
			i++;
		}
		else{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
}
void mergeSort(int* arr,int count){
if(count <= 1)
return;
		
	int mid=count/2;
	int left[mid];
	int right[count-mid];
	int k=0;
	for (int i=0;i<mid;i++){
		left[i]=arr[i];
	}
	for(int j=mid;j<count;j++){
		right[k]=arr[j];
		k++;
	}
	for(int i=0;i<mid;i++){
		//cout << left[i];
	}
	//cout << "\n";
	for(int i=0;i<count-mid;i++){
		//cout << right[i];
	}
	//cout << "\n";
	mergeSort(left,count/2);
	mergeSort(right,count/2);
	merge(left,right,arr);
	for(int i=0;i<count;i++){
		cout << arr[i];
	}
}
