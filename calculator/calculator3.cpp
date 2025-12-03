#include <iostream>
using namespace std;
class Cal{
private:
	int n1;
	int n2;
public:
	Cal(){
		cout<<"enter n1 :";
		cin>>n1;
		cout<<"enter n2 :";
		cin>>n2;
	}
	int sum(){
		return n1+n2;
	}
	float divide(){
		return (float)n1/n2;
	}
	int mod(){
		return n1%n2;
	}
	int mult(){
		return n1*n2;
	}
	int minus(){
		return n1-n2;
	}
};
int main(){
	Cal final;
	cout<<"sum : "<<final.sum()<<endl;
	cout<<"minus : "<<final.minus()<<endl;
	cout<<"mult : "<<final.mult()<<endl;
	cout<<"divide : "<<final.divide()<<endl;
	cout<<"mod : "<<final.mod()<<endl;
	return 0;
}