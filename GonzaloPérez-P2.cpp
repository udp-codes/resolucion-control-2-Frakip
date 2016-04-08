#include <iostream>
using namespace std;


class Item{
	public:
		string valor;
		int cant_llamados;
};
class nodo{
	public:
		Item *x;
		nodo *next;
		nodo(){
			next=NULL;
		}
};
class Lista{
	public:
		nodo *head;	
		Lista(){
			this->head=NULL;
		}

	void agrear(Item *i){
		nodo *temp=new nodo(i);
		nodo *aux=head;
		while(aux->next!=NULL)aux=aux->next;
		aux->next=temp;
	}

	int probabilidad(string valor){
		int llamado_total;
		nodo *aux=head;
		int i=0;
		while(aux!=NULL){
			aux=aux->next;
			i++;
		}
		llamado_total=i;
		nodo *aux=new nodo();
		probabilidad=aux->cant_llamados/llamado_total;
		return probabilidad;
	}

	string llamar_kesimo(int k){
		nodo *aux=new nodo();
		if(aux->probabilidad()==k)return aux;
		aux->cant_llamados++;
	}	
};
