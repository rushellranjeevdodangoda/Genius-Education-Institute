#pragma once
#pragma once
#pragma once
#include<iostream>
using namespace std;

// Node Class
class Node {
public:
    int reg;
    string NameS, Subject;
    int Marks;
    Node* next;
};

// Stores the head of the Linked List
Node* head = new Node();

// Check Function to check that if Record Already Exist or Not
bool check(int x)
{
    // Base Case
    if (head == NULL)
        return false;

    Node* tS = new Node;
    tS = head;

    // Traverse the Linked List
    while (tS != NULL) {
        if (tS->reg == x)
            return true;
        tS = tS->next;
    }

    return false;
}
//Student
void Insert_Record_S(int reg, string NameS,
    string Subject, int Marks)
{
    // if Record Already Exist
    if (check(reg)) {
        cout << "Student with this "
            << "record Already Exists\n";
        return;
    }

    // Create new Node to Insert Record
    Node* tS = new Node();
    tS->reg = reg;
    tS->NameS = NameS;
    tS->Subject = Subject;
    tS->Marks = Marks;
    tS->next = NULL;

    // Insert at Begin
    if (head == NULL
        || (head->reg >= tS->reg)) {
        tS->next = head;
        head = tS;
    }

    // Insert at middle or End
    else {
        Node* cS = head;
        while (cS->next != NULL
            && cS->next->reg < tS->reg) {
            cS = cS->next;
        }
        tS->next = cS->next;
        cS->next = tS;
    }

    cout << "Record Inserted "
        << "Successfully\n";
}

// Function to search record for any students Record with roll number
void Search_Record_S(int reg)
{
    // if head is NULL
    if (!head) {
        cout << "No such Record "
            << "Available\n";
        return;
    }

    // Otherwise
    else {
        Node* pS = head;
        while (pS) {
            if (pS->reg == reg) {
                cout << "Registration Number\t"
                    << pS->reg << endl;
                cout << "Student Name\t\t"
                    << pS->NameS << endl;
                cout << "Subject Name\t\t"
                    << pS->Subject << endl;
                cout << "Marks for the subject\t"
                    << pS->Marks << endl;
                return;
            }
            pS = pS->next;
        }

        if (pS == NULL)
            cout << "No such Record "
            << "Available\n";
    }
}

// Function to delete record students record with given reg number
// if it exist
int Delete_Record_S(int reg)
{
    Node* tS = head;
    Node* pS = NULL;

    // Deletion at Begin
    if (tS != NULL
        && tS->reg == reg) {
        head = tS->next;
        delete tS;

        cout << "Record Deleted "
            << "Successfully\n";
        return 0;
    }

    // Deletion Other than Begin
    while (tS != NULL && tS->reg != reg) {
        pS = tS;
        tS = tS->next;
    }
    if (tS == NULL) {
        cout << "Record does not Exist\n";
        return -1;
        pS->next = tS->next;

        delete tS;
        cout << "Record Deleted "
            << "Successfully\n";

        return 0;
    }
}

// Function to display the Student's Record
void Show_Record_S()
{
    Node* pS = head;
    if (pS == NULL) {
        cout << "No Record "
            << "Available\n";
    }
    else {
        cout << "Registration\tName\tSubject"
            << "\tMarks\n";

        // Until p is not NULL
        while (pS != NULL) {
            cout << pS->reg << "\t\t"
                << pS->NameS << "\t"
                << pS->Subject << "\t"
                << pS->Marks << endl;
            pS = pS->next;
        }
    }
}





