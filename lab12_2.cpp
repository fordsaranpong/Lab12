#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
       updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool image[N][M]){
int i,j;

for(i=0;i<=31;i++){
 for(j=0;j<=71;j++){
 	if(i==0||i==31)cout<<"-"; 
	else if(j==71||j==0)cout<<"|";
	else if(image[i][j]==1)cout<<"*";	
	else cout<<" ";
 }cout<<"\n";	
}
}
void updateImage(bool [N][M],int s,int x,int y){



}