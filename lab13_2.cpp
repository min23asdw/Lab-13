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
void inputMatrix(double A[N][N]){
	for(int i = 0;i<N;i++){
		cout << "Row " << i+1 <<": ";
		for(int j=0;j<N;j++){
			cin >>A[i][j];

		}

	}
}



void findLocalMax(const double A[N][N], bool B[N][N]){

	for(int j=0;j<N;j++){
		for(int i=0;i<N;i++){

			B[j][i]= 0;
			if(A[j][i]>=A[j+1][i] && A[j][i]>=A[j-1][i]&& A[j][i]>=A[j][i+1] && A[j][i]>=A[j][i-1])
			{

				B[j][i]= 1;
			}

			B[j][0]=0;
			B[j][N-1]=0;
			B[0][i]=0;
			B[N-1][i]=0;

		}
	}



}




void showMatrix(const bool A[N][N]){
	for(int j=0;j<N;j++){
		for(int i=0;i<N;i++){
			cout << A[j][i] << " ";
		}
		cout << "\n";
	}




}
