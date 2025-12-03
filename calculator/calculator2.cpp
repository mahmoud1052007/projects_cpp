#include <iostream>
using namespace std;
class cal{
private:
	int n1;
	int n2;
public:
	void set(){
		cout<<"enter n1 :";
		cin>>n1;
		cout<<"enter n2 :";
		cin>>n2;
	}
	void sum(){
		cout<<"add : "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
	}
	void divide(){
		cout<<"divide : "<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
	}
	void mod(){
		cout<<"modulus : "<<n1<<" % "<<n2<<" = "<<n1%n2<<endl;
	}
	void mult(){
		cout<<"multiply : "<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
	}
	void minus(){
		cout<<"minus : "<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
	}
};
int main(){
	cal result;
	result.set();
	result.sum();
	result.minus();
	result.mult();
	result.divide();
	result.mod();
	return 0;
}