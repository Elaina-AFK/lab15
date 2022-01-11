#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double a[][N]){
    for(int i = 0; i < N; i++){
       cout << "Row " << i+1 << ": ";
       for(int l = 0; l < N; l++){
        cin >> a[i][l]; 
       }
    }
}

void findLocalMax(const double b[][N], bool c[][N]){
	for(int i = 1; i < N - 1; i++){
		for(int j = 1; j < N - 1; j++){
			if(b[i][j]>=b[i][j-1] && b[i][j] >= b[i-1][j] && b[i][j] >= b[i+1][j] && b[i][j] >= b[i][j+1]){
				c[i][j] = 1;
			}
			else{
				c[i][j] = 0;
			}
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if (i == 0 || j == 0 || i == N-1 || j == N-1){
				c[i][j] = 0;
			}
		}
	}
}

void showMatrix(const bool d[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
}