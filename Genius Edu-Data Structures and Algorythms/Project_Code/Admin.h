#pragma once
#pragma once
#pragma once
#pragma once
#include<iostream>
using namespace std;

// Node Class
class NodeA {
public:
    int reg;
    string Subject, NameT;
    int NumStudent, Id;
    NodeA* next;
};

// Stores the head of the Linked List
NodeA* headA = new NodeA();

// Check Function to check that if Record Already Exist or Not
bool checkA(int x)
{
    // Base Case
    if (headA == NULL)
        return false;

    NodeA* tA = new NodeA;
    tA = headA;

    // Traverse the Linked List
    while (tA != NULL) {
        if (tA->reg == x)
            return true;
        tA = tA->next;
    }

    return false;
}
// Administration
void Insert_Record_A(int Id, string Subject,
    string NameT, int NumStudent)
{
    // if Record Already Exist
    if (checkA(Id)) {
        cout << "Class with this "
            << "record Already Exists\n";
        return;
    }

    // Create new Node to Insert Record
    NodeA* tA = new NodeA();
    tA->Id = Id;
    tA->NameT = NameT;
    tA->Subject = Subject;
    tA->NumStudent = NumStudent;
    tA->next = NULL;

    // Insert at Begin
    if (headA == NULL
        || (headA->Id >= tA->Id)) {
        tA->next = headA;
        headA = tA;
    }

    // Insert at middle or End
    else {
        NodeA* cA = headA;
        while (cA->next != NULL
            && cA->next->Id < tA->Id) {
            cA = cA->next;
        }
        tA->next = cA->next;
        cA->next = tA;
    }

    cout << "Record Inserted "
        << "Successfully\n";
}

// Function to search record 

void Search_Record_A(int Id)
{
    // if head is NULL
    if (!headA) {
        cout << "No such Record "
            << "Available\n";
        return;
    }

    // Otherwise
    else {
        NodeA* pA = headA;
        while (pA) {
            if (pA->Id == Id) {
                cout << "Subject Id\t\t"
                    << pA->reg << endl;
                cout << "Subject Name\t\t"
                    << pA->Subject << endl;
                cout << "Name of The Teacher\t\t"
                    << pA->NameT << endl;
                cout << "Number of Students\t\t"
                    << pA->NumStudent << endl;
                return;
            }
            pA = pA->next;
        }

        if (pA == NULL)
            cout << "No such Record "
            << "Available\n";
    }
}

// Function to delete record with given Id number
// if it exist
int Delete_Record_A(int Id)
{
    NodeA* tA = headA;
    NodeA* pA = NULL;

    // Deletion at Begin
    if (tA != NULL
        && tA->Id == Id) {
        headA = tA->next;
        delete tA;

        cout << "Record Deleted "
            << "Successfully\n";
        return 0;
    }

    // Deletion Other than Begin
    while (tA != NULL && tA->Id != Id) {
        pA = tA;
        tA = tA->next;
    }
    if (tA == NULL) {
        cout << "Record does not Exist\n";
        return -1;
        pA->next = tA->next;

        delete tA;
        cout << "Record Deleted "
            << "Successfully\n";

        return 0;
    }
}

// Function to display the Record
void Show_Record_A()
{
    NodeA* pA = headA;
    if (pA == NULL) {
        cout << "No Record "
            << "Available\n";
    }
    else {
        cout << "Id\tTeacher\tSubject\tStudents No\n";

        // Until p is not NULL
        while (pA != NULL) {
            cout << pA->Id << "\t"
                << pA->NameT << "\t"
                << pA->Subject << "\t"
                << pA->NumStudent << endl;
            pA = pA->next;
        }
    }
}