#pragma once
#pragma once
#pragma once
#include<iostream>
using namespace std;

// Node Class
class NodeT {
public:
    int reg;
    string NameS, Subject, NameT;
    int Marks, Grade, NumStudent, Id;
    NodeT* next;
};

// Stores the head of the Linked List
NodeT* headT = new NodeT();

// Check Function to check that if Record Already Exist or Not
bool checkT(int x)
{
    // Base Case
    if (headT == NULL)
        return false;

    NodeT* tT = new NodeT;
    tT = headT;

    // Traverse the Linked List
    while (tT != NULL) {
        if (tT->reg == x)
            return true;
        tT = tT->next;
    }

    return false;
}


// Teacher

void Insert_Record_T(int reg, string NameT,
    string Subject, int Grade)
{
    if (checkT(reg)) {
        cout << "Teacher with this "
            << "record Already Exists\n";
        return;
    }

    NodeT* tT = new NodeT();
    tT->reg = reg;
    tT->NameT = NameT;
    tT->Subject = Subject;
    tT->Grade = Grade;
    tT->next = NULL;

    // Insert at Begin
    if (headT == NULL
        || (headT->reg >= tT->reg)) {
        tT->next = headT;
        headT = tT;
    }

    // Insert at middle or End
    else {
        NodeT* cT = headT;
        while (cT->next != NULL
            && cT->next->reg < tT->reg) {
            cT = cT->next;
        }
        tT->next = cT->next;
        cT->next = tT;
    }

    cout << "Record Inserted "
        << "Successfully\n";
}

// Function to search record 
void Search_Record_T(int reg)
{
    // if head is NULL
    if (!headT) {
        cout << "No such Record "
            << "Available\n";
        return;
    }

    // Otherwise
    else {
        NodeT* pT = headT;
        while (pT) {
            if (pT->reg == reg) {
                cout << "Registration Number\t"
                    << pT->reg << endl;
                cout << "Teacher Name\t\t"
                    << pT->NameT << endl;
                cout << "Teaching Subject\t"
                    << pT->Subject << endl;
                cout << "Teaching Grade\t\t"
                    << pT->Grade << endl;
                return;
            }
            pT = pT->next;
        }

        if (pT == NULL)
            cout << "No such Record "
            << "Available\n";
    }
}

// Function to delete record teacher record with given reg number
// if it exist
int Delete_Record_T(int reg)
{
    NodeT* tT = headT;
    NodeT* pT = NULL;

    // Deletion at Begin
    if (tT != NULL
        && tT->reg == reg) {
        headT = tT->next;
        delete tT;

        cout << "Record Deleted "
            << "Successfully\n";
        return 0;
    }

    // Deletion Other than Begin
    while (tT != NULL && tT->reg != reg) {
        pT = tT;
        tT = tT->next;
    }
    if (tT == NULL) {
        cout << "Record does not Exist\n";
        return -1;
        pT->next = tT->next;

        delete tT;
        cout << "Record Deleted "
            << "Successfully\n";

        return 0;
    }
}

// Function to display the teacher's Record
void Show_Record_T()
{
    NodeT* pT = headT;
    if (pT == NULL) {
        cout << "No Record "
            << "Available\n";
    }
    else {
        cout << "Index\tName\tSubject"
            << "\t\tGrade\n";

        // Until p is not NULL
        while (pT != NULL) {
            cout << pT->reg << "    \t"
                << pT->NameT << "\t"
                << pT->Subject << "\t\t"
                << pT->Grade << endl;
            pT = pT->next;
        }
    }
}

