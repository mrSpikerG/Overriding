#include <iostream>
using namespace std;

class Employer 
{
protected:
	unsigned int money;

public:
	virtual void print() {};
};



class President : public Employer
{
public:
	President() {
		this->money = 999999;//Nu a pochemu bi i net :)
	}
	
	void print() override {
		cout << "\nPresident salary: "<<this->money;
	}
};



class Manager : public Employer
{
public:
	Manager() {
		this->money = 228300;//eto v dollarah zimbabve
	}

	void print() override {
		cout << "\nManager salary: " << this->money;
	}
};



class Worker : public Employer
{
public:
	Worker() {
		this->money = 666;//zacluchil sdelku s diavolom
	}

	void print() override {
		cout << "\nWorker salary: " << this->money;
	}
};



int main()
{
	President* Zelenskiy = new President;
	Manager* Vasiliy = new Manager;
	Worker* Kostya = new Worker;


	Zelenskiy->print();
	Vasiliy->print();
	Kostya->print();
}
