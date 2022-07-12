#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class node
{
    public:
    string name;
    int roll_num;
    node *next;
    
    //default constructor
    node()
    {
        name="";
        roll_num=0;
        next=NULL;

    }

//parameterized constructor
    node(string n,int r)
    {
        name=n;
        roll_num=r;
        next=NULL;
    }

};


//class for implementation of linked list

class linkedlist
{
   
    node *head;


    public:
    linkedlist()
    {
        head=NULL;
    }

    void insert_node(string n,int r)
    {
        node *t=new node(n,r);
        if(head==NULL)
        {
            head=t;

        }
        else{
            
            node *temp=head;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=t;
        }
    }



    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->name<<"    "<<temp->roll_num<<endl;
            temp=temp->next;
        }
    }

};

int main()
{
    linkedlist obj;
   string personname[8]={"pratik","suraj","prajyot","prasad","ybhav","omkar","jatin","shreyash"};
   int rollnum[8]={1,2,3,4,5,6,7,8};

   for(auto i=0;i<8;i++)
   {
    obj.insert_node(personname[i],rollnum[i]);
   }

   obj.display();




}
