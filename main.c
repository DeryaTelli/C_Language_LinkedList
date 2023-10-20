#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data; 
	struct Node* next; // Node* boyle yaparak pointer yaptim adreslerin icine girmek icin '->' kullanmam gerekecek 
}node;

void linkedList(node* n){
	node* temp =  n ; // node refer to struct Node unutma ve burada baslangic node onemli oldugu icin burada kopyasini olusturup veriyorum 
	while (temp!=NULL){
		printf("%d\n", temp->data );
		temp=temp->next;
	}
}
int main() {
	node* n= (node*)malloc(sizeof(node));
	n->data=2;
	n->next=NULL;
	
	n->next = (node*)malloc(sizeof(node));
	n->next->data=3;
	n->next->next=NULL;
	
	printf("%d\n", n->data); // ilk datayi yazdirir 2 yi 
	printf("%d\n", n->next); // diger dugumun adresini tutuyor 
	printf("%d\n", n->next->data); // diger datayi yazdirir 3'u 
	printf("%d\n", n->next->next); // null dondurur 
	
	printf("---------------Adress-----------------\n");
	printf("%p\n",&n); // pointerin adresi 
	printf("%p\n",n);// struct nodein adresi 'structlarin adresi ilk degiskenlerinin adresleridir'
	printf("%p\n",&(n->data));
	printf("%p\n",&(n->next));
	
	linkedList(n);
	
	
	return 0;
}
