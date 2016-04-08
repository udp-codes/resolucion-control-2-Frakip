#include <iostream>
using namespace std;

class nodo{
	public:
		int x;
		nodo *next;
		nodo(int x){
			this->x=x;
			next=NULL;
		}
	};
class ConjuntoTDA{
		public:
			nodo *head;
			ConjuntoTDA(){
				this->head=NULL;
			}
			bool estaVacio(){
				return head==NULL;
			}
			void agregar(int x){
				nodo *temp=new nodo(x);
				if(estaVacio()==true)head=temp;
				else{
					nodo *aux=head;
					while(aux->next!=NULL)aux=aux->next;
					aux->next=temp;
				}
			}
			int saca(){
				if(estaVacio()==true);
				else{
					nodo *aux=head;
					head=aux->next;
					int temp = aux->x;
					delete aux;
					return temp;
				}
			}
			bool pertenece(int p){
				if(estaVacio()==true)return false;
				nodo *temp=head;
				while(temp!=NULL){
					if(temp->x==p)return true;
				}
				return false;
			}
			ConjuntoTDA union(ConjuntoTDA *p){
				ConjuntoTDA *a=p;
				if(estaVacio()==true)return *a;
				ConjuntoTDA *aux=new ConjuntoTDA();
				aux->head=head;
				nodo *temp = aux->head;
				while(temp->next!=NULL)temp=temp->next;
				temp->next=a->head;
				return *aux;
			}


};