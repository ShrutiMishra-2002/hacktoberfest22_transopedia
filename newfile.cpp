#include<iostream>
using namespace std;
int main(){
	int lol[5]={2,3,4,7,1};
	int maax=lol[0];
	for(int gol=1;gol<=4;gol++){
		if(lol[gol]>maax){
			maax=lol[gol];
		}
}
cout<<maax;
	int a[5]={2,3,4,7,1};
	int min=a[0];
	for(int b=1;b<=4;b++){
		if(a[b]<min){
			min=a[b];
		}
}
cout<<"  "<<min;
	


}
