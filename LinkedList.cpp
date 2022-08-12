#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string data;
    Node *next;

    Node(string d)
    {
        data=d;
        next=NULL;
    }

};

void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main()
{

    Node *head=new Node("pratik");
    Node *node2=new Node("suraj");
    Node *node3=new Node("prajyot");

    head->next=node2;
    node2->next=node3;
    node3->next=NULL;

    print(head);

    //here I have dynamically created object of class Node and connected each node with next one 
    

    

}