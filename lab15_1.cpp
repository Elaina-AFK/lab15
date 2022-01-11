#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int value, index;
	for(int i = 1; i < N; i++){
		value =d[i];
		index = i;
		cout << "Pass " << i << ":";
		while (index > 0 && d[index-1] < value){
			d[index] = d[index - 1];
			index = index - 1;
		}		
		d[index] = value;
		for(int i = 0; i < N; i++) cout << d[i] << " ";	
		cout << '\n';
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

