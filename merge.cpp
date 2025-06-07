#include<iostream>
using namespace std;
void Merge(int A[], int B[], int C[], int N, int M, int &K);
int main()
{
	int A[5]={11,12,13,14,15}, B[10]={22,2,3,24,25,26,27,28,29}, C[2]={55,90},i,n,m,k;

	Merge(A,B,C,n,m,k);
	cout<<"\nThe Merged Array in Ascending Order"<<endl;

	return 0;
}
void Merge(int A[], int B[], int C[], int N, int M, int &K)
{
	int I=0, J=M-1;
	K=0;
	while (I<N && J>=0)
	{
		if (A[I]<B[J])
			C[K++]=A[I++];
		else if (A[I]>B[J])
			C[K++]=B[J--];
		else
		{
			C[K++]=A[I++];
			J--;
		}
	}
	for (int T=I;T<N;T++)
		C[K++]=A[T];
	for (int T=J;T>=0;T--)
		C[K++]=B[T];
}




