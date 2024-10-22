#include <iostream>
using namespace std;

struct list_el{
	int val;
	list_el *next;
};

typedef struct list_el item;

int main(){
	item *curr, *head, *ptr;
	int val;
	
	head = NULL;
	
	curr = new item;
	curr -> val = 1;
	curr -> next = head;
	head = curr;
	ptr = curr;
	
	cout <<ptr->val<<endl;
	
	curr = new item;
	curr ->val = 2;
	curr -> next = head;
	head = curr;

	
	cout <<ptr->val<<endl;
	
	curr = new item;
	curr -> val = 3;
	curr -> next = head;
	head = curr;

	
	cout <<ptr->val<<endl;
	
	curr = new item;
	curr -> val = 4;
	curr -> next = head;
	head = curr;

	
	cout<< ptr->val;
	
	return 0;
}
