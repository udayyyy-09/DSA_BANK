#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int val);
};
Node::Node(int v)
{
    val=v;
    next= nullptr;
}

/*TO REVERSE A LINKED  YOU HAVE TO CREATE THREE POITERS 1-prevptr 2-currptr 3- nextptr
*/
Node* reversell(Node* &head)
{
    Node* curr = head;  
    Node* prev = nullptr;
    Node* nextptr = nullptr;
    while(curr!=nullptr)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;       //which is the new head;
}
void printll(Node* head)
{
    Node* t = head;
    while(t!=nullptr)
    {
        cout<<t->val<<" ";
        t= t->next;
    }
}
int main()
{
    Node* head = nullptr;
    Node* current = nullptr;
    int size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter linked "<<endl;
    for(int i=0;i<size;i++)
    {
        int val;
        cin>>val;
        if(head==nullptr)
        {
            head=new Node(val);
            current = head;
        }else{
            current->next = new Node(val);
            current = current->next;
        }
    }
    cout<<"Reverse linked : "<<endl;
    head=reversell(head);
    printll(head);
}