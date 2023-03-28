/*programa que recebe do usuario 5 nomes*/
#include<iostream>
using namespace std;
int main(){
	string nome;//variavel que vai receber os nomes
	int cont= 1; //variavel de controle de loop
	while(cont<=5){
		cout<<"digite um nome:"<<cont<<":";
		getline(cin,nome);
		cont++;
	}
}
