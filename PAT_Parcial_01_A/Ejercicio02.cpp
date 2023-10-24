#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
    return 0;
}

class Cola
{
private:
    struct Node
    {
        char valor;
        Node* next = nullptr;
        Node(char valor) : valor(valor) {}
    };
    Node* head = nullptr;
    Node* tail = nullptr;

public:
    void enque(char valor)
    {
        if (head == nullptr)
        {
            head = tail = new Node(valor);
        }
        else
        {
            tail->next = new Node(valor);
            tail = tail->next;
        }
    }

    void deque()
    {

    }
};