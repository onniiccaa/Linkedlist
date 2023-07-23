#include<iostream>
template <typename T>
class Node{
public:
	T data;
	Node<T>*next;
	Node(T value):data(value),next(nullptr){}
};
template<typename T>
class SLlist{
private:
	Node<T>*head;
public:
	SLlist():head(nullptr){}
	void insertatend(T data){
		Node<T>*new_node=new Node<T>(data);
		if(!head){
			head=new_node;
		}
		else{
			Node<T>*current=head;
			while (current->next){
				current=current->next;
			}
			current->next=new_node;
		}
	}
	void display(){
		Node<T>*current=head;
		while (current){
			std::cout<<current->data<<"->";
			current=current->next;
		}
		std::cout<<"None"<<std::endl;
	}
};
int main(){
	SLlist<int>int_list;
	int_list.insertatend(1);
	int_list.insertatend(3);
	int_list.insertatend(5);
	int_list.insertatend(7);
	int_list.insertatend(9);
	int_list.display();
	return 0;
}
