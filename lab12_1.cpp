#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);
int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){
	double max=A[0],min=A[0],mean=0,RN=0,sum,Go=1,Her=0,root=1/6,GG;
	for(int i=0;i<N;i++){
	mean=mean+A[i];
	RN=RN+pow(A[i],2);
	Go=Go*A[i];
	Her=Her+pow(A[i],-1);
	if(A[i]>max) max=A[i];
	if(A[i]<min) min=A[i];
	}
	mean=mean/N;
	sum=(RN/N)-(mean*mean);
	GG=pow(Go,0.166667);
	B[0]=mean;
	B[1]=pow(sum,0.5);
	B[2]=GG;
	B[3]=N/Her;
	B[4]=max;
	B[5]=min;
}