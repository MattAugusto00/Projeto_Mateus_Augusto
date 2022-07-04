#include <iostream>
using namespace std;

class A{
public:
	A(int A1, float A2);
	int getA1();
	float getA2();
	void setA1(int A1);
	void setA2(float A2);
	void MA1();
	void MA2();
private:
	int A1;
	float A2;
};
//Construtor
A::A(int A1, float A2){
	this->A1=A1;
	this->A2=A2;
}
//GETTERS
	int A::getA1(){
		return A1;
	}
	float A::getA2(){
		return A2;
	}
//SETTERS
	void A::setA1(int A1){
		this->A1=A1;
	}
	void A::setA2(float A2){
		this->A2=A2;
	}
//Metodos M
	void A::MA1(){
		cout << "MA1()" << endl;
	}
	void A::MA2(){
		cout << "MA2()" << endl;
	}
//---------------------------------------------
int main(){
	
return 0;
}
