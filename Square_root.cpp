#include<iostream>
using namespace std;
#include<climits>
double n=0;
bool check(double x){
	if(x*x==n)return true;
	else if (x*x-n<=0.1)return true;
	else return false;
}
double f(double x){
    return (x*x-n);
}
int main(){
	cout<<"\nEnter a number: ";
	cin>>n;
	//Newton-Method
	double appx=n/2;//....approximation
	if(check(appx)){
		cout<<"square-root of n is:  "<<appx;
		return 0;
	}
	for(int i=1;;i++){
		appx=appx-(f(appx)/(2*appx));
		if(check(appx)){
			int ans=int(appx);
			if(ans*ans==n)appx=ans;
			cout<<"square-root of n is:  "<<appx<<endl;
			cout<<"It took "<<i<<" approximations"<<endl;
			break;
		}
		


	}
	return 0;
	
}