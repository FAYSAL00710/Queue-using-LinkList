#include<iostream>

int MAX=4;

int i=1;
using namespace std;

struct node
{
    int data;
    node *next;
};
class queue
{
    node *front,*rear;

    public:

    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue();
    void dequeue();
    void show();

};
void queue::enqueue()
{
    node *temp;
    temp = new node;
    temp->next = NULL;

    if(i>MAX)
    {
    cout<<"QUEUE IS FULL"<<endl;
     //show();
    }

   else if(front == NULL)
    {
        cout<<"Enter DATA:";
        cin>>temp->data;
        front = rear = temp;
        rear->next = NULL;
    }
    else
    {
        cout<<"Enter DATA:";
        cin>>temp->data;
        rear->next = temp;
        rear = temp;
        rear->next = NULL;
         ++i;
    }


}
void queue::dequeue()
{
    //int x;
    if(front == NULL)
    {
        cout<<"empty queuen"<<endl;
    }
    else
    {
        node *ptr;
        ptr = front;

        front = ptr->next;
        delete(ptr);

         --i;
    }


}
void queue::show()
{
    node *ptr1;

    ptr1=front;

    cout<<"The queue is:"<<endl;
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" "<<endl;
        ptr1=ptr1->next;
    }

}
int main()
{
    queue q;
    while(1)
    {
        int a;
        cout<<"1:ADD DATA"<<endl;
        cout<<"2:REMOVE DATA"<<endl;
        cout<<"3:SHOW DATA"<<endl;
        cout<<"4:EXIT"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            {
               q.enqueue();
            }
            break;

            case 2:

            {
                q.dequeue();
            }
            break;

            case 3:
            {
                q.show();
            }
            break;

            case 4:
            break;

            default:
            cout<<"INVALIDE CHOSE (1-3)"<<endl;
            break;
        }
    }
}
