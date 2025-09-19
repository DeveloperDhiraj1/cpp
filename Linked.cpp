#include<iostream>
using namespace std;
class Node{
    public:
    int  data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
linkedlist{
    private:
    Node *head;
    public:
    linkedlist(){
        head=nullptr;

    }
    void insert(int val){
        Node *myNode=new Node(val);
        if(head==nullptr){
            head=myNode;

        }
        else{
            Node *temp=head;  
        while(temp->next!=nullptr){
            temp=temp->next;
    }
        temp->next=myNode;
    }
}
}
int main(){

}