// insert an element at the beginning of the linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *link;
};

int main()
{
    Node *start = NULL, *last, *temp;

    int i = 0;
    while(i < 10)
    {
        temp = new Node();
        temp->info = i * 10;
        temp->link = NULL;

        if(start == NULL)
        {
            start = temp;
            last = temp;
        }
        else
        {
            temp -> link = start;
            start = temp;
        }
        i++;
    }

    temp = start;
    cout << "Elements of Linked List: " << endl;
    while(temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->link;
    }
    cout << endl;

    return 0;
}
