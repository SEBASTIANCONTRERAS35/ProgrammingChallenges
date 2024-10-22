/*#include <iostream>
using namespace std;

// Definición de la estructura de ListNode (proporcionada en el problema)
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Declaración de la función mergeTwoLists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);


// Función para imprimir la lista enlazada
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Función para insertar nodos en una lista enlazada
ListNode* insertNode(ListNode* head, int val) {
    if (head == nullptr) {
        return new ListNode(val);
    } else {
        ListNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new ListNode(val);
        return head;
    }
}

int main() {
    // Lista 1: [1, 2, 4]
    ListNode* list1 = nullptr;
    list1 = insertNode(list1, 1);
    list1 = insertNode(list1, 2);
    list1 = insertNode(list1, 4);

    // Lista 2: [1, 3, 4]
    ListNode* list2 = nullptr;
    list2 = insertNode(list2, 1);
    list2 = insertNode(list2, 3);
    list2 = insertNode(list2, 4);

    // Llamada a la función mergeTwoLists
    ListNode* mergedList = mergeTwoLists(list1, list2);

    // Imprimir la lista enlazada fusionada
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Crear un nodo dummy como cabeza de la lista combinada
    ListNode dummy(0);
    ListNode* current = &dummy; // Puntero a la lista combinada

    // Mientras alguna de las dos listas no esté vacía
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            // Si el valor en list1 es menor o igual, se añade a la lista combinada
            current->next = list1;
            list1 = list1->next; // Avanzamos en la lista1
        } else {
            // Si el valor en list2 es menor, se añade a la lista combinada
            current->next = list2;
            list2 = list2->next; // Avanzamos en la lista2
        }
        current = current->next; // Avanzamos en la lista combinada
    }

    // Si queda algún nodo en list1 o list2, los agregamos al final
    if (list1 != nullptr) {
        current->next = list1;
    } else if (list2 != nullptr) {
        current->next = list2;
    }

    // Retornar la lista combinada, sin el nodo dummy
    return dummy.next;
}
*/