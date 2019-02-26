#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int k = 0;
	int p = 0;
	for(int i = 1 ;i < N ;i++){
		p = i;
		for(int h = 0 ; h < N ; h++){
			if(i == h){
				cout << "[" << d[h] << "]";
			}else{
				cout << " " << d[h] << " ";
			}
			
		}
		for(k = p-1 ; k >= 0 ;k--){
			if(d[p] > d[k]){
				swap(d,p,k);
				p--;
			}
		}
		cout << " => ";

		for(int h = 0 ; h < N ; h++){
			if(h == p){
				cout << "[" << d[h] << "]";
			}else{
				cout << " " << d[h] << " ";
			}
			
		}
		cout << endl;
		
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
