/*Crie um programa que receba o cadastro de at� 20 cidades, com os seguintes dados:
	_nome
	_popula��o
	_renda m�dia
	_estado
	_mostra os totais de popula��o e renda m�dia*/
	
#include<iostream>
using namespace std;
int main(){
	string nome,estado;
	float renda_media, total_renda=0;
	int populacao, total_populacao=0, cont=1,quant=0;
	cout<<"quantas cidades deseja cadastrar? (maximo 20)";
	cin>>quant;
	if (quant>20){
		cout<<"quantidade invalidada!"<<endl;
	
	}
	else{
		while(cont=quant){
			cout<<"digite o nome:";
			getline(cin,nome);
			cout<<"digite a populacao:";
			cin>>populacao;
			total_populacao= total_populacao+populacao;
			cout<<"digite a renda media da populacao:";
			cin>>renda_media;
			total_renda=total_renda+renda_media;
			cin.ignore();
			cout<<"digite o estado:";
			getline(cin,estado);
			cont++;
		}
		cout<<"O Somatorio das populacoes eh:"<<total_populacao<<endl;
		cout<<"O somatorio das rendas medias eh:"<<total_renda<<endl;
	}
	
}
