#include<iostream>
#include<string>
template<typename T>
struct Node{
	T data;
	Node<T>*next;
};
template<typename T>
class Linkedlist{
private:
	Node<T>*head;
public:
	Linkedlist():head(nullptr){}
	
	//insert at first
	void insert(const T& data){
		Node<T>* newNode=new Node<T>;
		newNode->data=data;
		newNode->next=head;
		head=newNode;
	}
	void display()const{
		Node<T>*current=head;
		while (current!=nullptr){
			std::cout<<current->data<<"->";
			current=current->next;
		}
		std::cout<<"nullptr"<<std::endl;
	}
};
int main(){
	Linkedlist<int>intlist;
	intlist.insert(1);
	intlist.insert(3);
	intlist.insert(5);
	intlist.insert(7);
	intlist.insert(9);
	std::cout<<"Integer Linkedlist: ";
	intlist.display();
}
