#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
}

void LinkedList::insertToTail(int input){
	
	Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;

    if(head==NULL){
    	head = newNode;
    	return;
	}
        
       
    
    Node *tmpNode = head;
    
    while(tmpNode->next!=NULL)
        tmpNode = tmpNode->next;
    
    tmpNode->next = newNode;
    

}
	
void LinkedList::insertAfter(int input, int location){
	Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;
    
    if(location < 1){
	}else if (location == 1){
		newNode->next = head;
		head = newNode;
	}else{
		Node *tmpNode = head;
		for(int i = 1; i < location-1; i++){
			if(tmpNode!=NULL){
				tmpNode = tmpNode->next;
			}
		}
		
	if(tmpNode!=NULL){
		newNode->next = tmpNode->next;
		tmpNode->next = newNode;
	}else{
		cout<< "node sebelumnya adalah null" << endl;
	}
	}
	
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
}
