#include<iostream>
using namespace std;
int main(){
	int cont= 0; //inicializa a variavel com valor 0
	cout<<"contagem incrementando a variavel de controle"<<endl;
	while (cont<10){
		cout<<cont<<endl;
		cont++; //cont= cont+1;
	}
	cout<<"Decrementando a variavel de controle"<<endl;
	while(cont>0){
		cout<<cont<<endl;
		cont--; // cont= cont-1;
	}
}
