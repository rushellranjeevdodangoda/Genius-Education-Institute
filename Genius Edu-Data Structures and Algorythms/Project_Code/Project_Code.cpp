
#include <iostream>
#include "Student.h" 
#include "Teacher.h" 
#include "Admin.h" 


using namespace std;


int MainMenu() {
	system("cls");
	// entering the system
	cout << "\n\t\t\t\t\tWELCOME TO GENIUS EDUCATIONAL INSTITUTE"
		"\n\t\t\t\t\t\tACADEMIC YEAR 2023"
		"\n\t\t\t******************************************************************"
		"\n\n\t\t\t\t\t\tMAIN MENU"
		"\n\n\t\t\t\t\t\t1.Student\n\n\t\t\t\t\t\t2.Teacher\n\n\t\t\t\t\t\t3.Administration"
		"\n\n\tSelect Your Category  :";

	int category1;
	cin >> category1;

	
	string NameS, NameT, Subject;
	int Reg, Marks, Grade, NumStudent, Id;
	int category, Choice;

	category = category1;

	// Student category
	if (category == 1)
	{
		
		string NameS, NameT, Subject;
		int Reg, Marks, Grade, NumStudent, Id;
		int category, Choice;

		// selecting choices for students
		while (true) {
			cout << "\n\n\t------------------------- "
				"\n\n\tSelect Task and Press Enter "
				"\n\n\t\t\t1 To Enter a New Student Record "
				"\n\n\t\t\t2 To Delete a Student Record "
				"\n\n\t\t\t3 To Search a Student Record "
				"\n\n\t\t\t4 To View All Students RecordS"
				"\n\n\t\t\t5 To Main Menu\n";
			cout << "\n\nEnter Your Choice :  \n\n";
			int Choice;

			// Enter Choice
			cin >> Choice;
			if (Choice == 1) {
				cout << "-> Enter Name of Student\n";
				cin >> NameS;
				cout << "-> Enter Registration Number of Student\n";
				cin >> Reg;
				cout << "-> Enter Course of Student \n";
				cin >> Subject;
				cout << "-> Enter Total Marks of Student\n";
				cin >> Marks;
				cout << "\n";
				Insert_Record_S(Reg, NameS, Subject, Marks);
			}
			else if (Choice == 2) {
				cout << "-> Enter Registration Number of Student Whose "
					"Record Is To Be Deleted\n";
				cin >> Reg;
				cout << "\n";
				Delete_Record_S(Reg);
			}
			else if (Choice == 3) {
				cout << "-> Enter Registration Number of Student Whose "
					"Record Want To Search\n";
				cin >> Reg;
				cout << "\n";
				Search_Record_S(Reg);
			}
			else if (Choice == 4) {
				Show_Record_S();
			}
			else if (Choice == 5) {
				MainMenu();

			}
			else {
				cout << "Invalid Choice "
					<< "Try Again\n";

			}
		}
		return 0;
	}
	// Teacher 

	if (category == 2)
	{
		
		string NameS, NameT, Subject;
		int Reg, Marks, Grade, NumStudent, Id;
		int category, Choice;


		while (true) {
			cout << "\n\n\t------------------------- "
				"\n\n\tSelect Task and Press Enter "
				"\n\n\t\t\t1 To Enter a New Teacher Record "
				"\n\n\t\t\t2 To Delete a Teacher Record "
				"\n\n\t\t\t3 To Search a Teacher Record "
				"\n\n\t\t\t4 To View All Teachers Records"
				"\n\n\t\t\t5 To Main Menu\n";
			cout << "\n\nEnter Your Choice :   \n\n";
			int Choice;

			// Enter Choice
			cin >> Choice;
			if (Choice == 1) {
				cout << "-> Enter Name of The Teacher\n";
				cin >> NameT;
				cout << "-> Enter Registration Number of Teacher\n";
				cin >> Reg;
				cout << "-> Enter Teaching Course \n";
				cin >> Subject;
				cout << "-> Enter Teaching Grades\n";
				cin >> Marks;
				cout << "\n";
				Insert_Record_T(Reg, NameT, Subject, Marks);
			}
			else if (Choice == 2) {
				cout << "-> Enter Registration Number of Teachers Whose "
					"Record Is To Te Deleted\n";
				cin >> Reg;
				cout << "\n";
				Delete_Record_T(Reg);
			}
			else if (Choice == 3) {
				cout << "-> Enter Registration Number of Teachers Whose "
					"Record Want To Search\n";
				cin >> Reg;
				cout << "\n";
				Search_Record_T(Reg);
			}
			else if (Choice == 4) {
				Show_Record_T();
			}
			else if (Choice == 5) {
				MainMenu();
			}
			else {
				cout << "Invalid Choice "
					<< "Try Again\n";

			}
		}
		return 0;
	}

	//Administration 

	if (category == 3)
	{
		
		string NameS, NameT, Subject;
		int Reg, Marks, Grade, NumStudent, Id;
		int category, Choice;

		while (true) {
			cout << "\n\n\t------------------------- "
				"\n\n\tSelect Task and Press Enter "
				"\n\n\t\t\t1 To Enter a New Class Record "
				"\n\n\t\t\t2 To Delete a Class Record "
				"\n\n\t\t\t3 To Search a Class Record "
				"\n\n\t\t\t4 To View All Classes Records"
				"\n\n\t\t\t5 To Main Menu\n";
			cout << "\n\nEnter Your Choice :  \n\n";
			int Choice;

			// Enter Choice
			cin >> Choice;
			if (Choice == 1) {
				cout << "-> Enter Class Id\n";
				cin >> Id;
				cout << "-> Enter Name of The Subject\n";
				cin >> Subject;
				cout << "-> Enter Subject Instructor \n";
				cin >> NameT;
				cout << "-> Enter Total number of Students\n";
				cin >> NumStudent;
				cout << "\n";
				Insert_Record_A(Id, Subject, NameT, NumStudent);
			}
			else if (Choice == 2) {
				cout << "-> Enter class Id Which "
					"Record Is To Be Deleted\n";
				cin >> Reg;
				cout << "\n";
				Delete_Record_A(Reg);
			}
			else if (Choice == 3) {
				cout << "-> Enter Class Id Which "
					"Record Want To Search\n";
				cin >> Reg;
				cout << "\n";
				Search_Record_A(Reg);
			}
			else if (Choice == 4) {
				Show_Record_A();
			}
			else if (Choice == 5) {
				MainMenu();
			}
			else {
				cout << "Invalid Choice "
					<< "Try Again\n";

			}
		}
		return 0;
	}
}

int main()
{
	MainMenu();
}




