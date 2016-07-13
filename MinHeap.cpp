#include <iostream>
using namespace std;
int array[40]={0};
static int count=1;
class MinHeap{
	
	public:
	int Insert(int data){
		//size=sizeof(array);
		array[count]=data;
		count++;
		minHeapCondition(array);
	}
	int minHeapCondition(int array[]){
		//cout << count << "\n";
		int heapCount=count-1;
		int temp;
		//cout << heapCount/2;
		
		while(heapCount!=0){
			if(array[heapCount]<array[heapCount/2]){
				
				temp=array[heapCount];
				array[heapCount]=array[heapCount/2];
				array[heapCount/2]=temp;
				
			}
			heapCount=heapCount/2;
		}
		
	}
	
	void print(){
		for (int i=1; i< count;i++){
			cout << array[i];
		}
		cout << "\n";
	}
};	
int main(){
	MinHeap* minHeap=new MinHeap();
	minHeap->Insert(3);
	minHeap->Insert(5);
	minHeap->Insert(2);
	minHeap->Insert(9);
	minHeap->Insert(10);
	minHeap->Insert(4);
		minHeap->Insert(1);
	minHeap->print();
	
	//minHeap->print();
}
