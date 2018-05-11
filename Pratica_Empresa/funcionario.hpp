#ifndef FUNC_H
#define FUNC_H
#include<string>
#include "data.hpp"
using namespace std;

class Funcionario
{
protected:
	string name;
	double salario;
	int dataADM;
	string status;
public:
	string getStatus();
	void setStatus(string statusAux);
	//SETTERS
	void setName(string nameaux);
	void setSalario(double salarioaux);
	void setDataADM(int dataADMaux);
	//GETTERS
	string getName();
	double getSalario();
	int getDataADM();

	
};

#endif