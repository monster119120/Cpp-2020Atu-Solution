//  Course Grade
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
using namespace std;

// Constants for arrays
const int NAME_SIZE = 45;

// Declaration of Student structure
struct Student
{
    char name[NAME_SIZE]; // Student name
    int idNum;            // Student ID number
    int* tests;           // Pointer to array of test scores
    double total;         // Total test score
    double average;       // Average test score
};

// Function prototypes
// case 1
Student* initArrays(int, int);
void getInfo(Student[], int, int);
void getInfoOnce(Student&, int, int);
// case 2
void changeStuInfo(Student[], int, int);
// case 3
void showInfo(Student[], int, int);
void showInfoOnce(Student&, int);
// case 4
void idNumSearch(Student[], int, int);
// case 5
void nameSearch(Student[], int, int);
// case 6
void sortidNumInc(Student[], int, int);
// case7
void sortTotalDec(Student[], int, int);

int main()
{
    int choice = 1; // Choice of menu
    int numStudents = 0;  // Number of students
    int numTests = 0;     // Number of tests
    Student* list=NULL;    // Pointer to Student array

    
    while (choice != 0) {
        cout << 
"------------Welcome to student management system-------------\n\
1-- - input all students' information \n\
2-- - change one student's information \n\
3-- - show all students' information \n\
4-- - query one student's information by idNum\n\
5-- - query one student's information by name \n\
6-- - sort using idNum by increasing \n\
7-- - sort using name by decreasing \n\
0-- - quit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Get the number of students.
            cout << "How many students? "; cin >> numStudents;

            // Get the number of tests per student.
            cout << "How many tests per student? "; cin >> numTests;

            // Create an array of Students
            list = initArrays(numStudents, numTests);

            // Populate the array with data.
            getInfo(list, numStudents, numTests);
            break;
        case 2:
            changeStuInfo(list, numStudents, numTests);
            break;
        case 3:
            // Display the data.
            showInfo(list, numStudents, numTests);
            break;
        case 4:
            idNumSearch(list, numStudents, numTests);
            break;
        case 5:
            nameSearch(list, numStudents, numTests);
            break;
        case 6:
            sortidNumInc(list, numStudents, numTests);
            break;
        case 7:
            sortTotalDec(list, numStudents, numTests);
            break;
        default:
            break;
        }
        cout << endl;
    }
    
    return 0;
}
// case 1
//**************************************************
// Function initArrays                             *
// This function dynamically allocates an array    *
// of Student structures and for each element in   *
// the array, allocates an array of ints to hold   *
// tests scors. The parameter s is the number of   *
// element to allocate for the array of structures *
// and the parameter t is the number of elements   *
// allocate for each array of ints.                *
//**************************************************
Student* initArrays(int s, int t)
{
    Student* ptr;

    // Allocate the array of Student structures.
    ptr = new Student[s];

    // Allocate an array of ints (to hold test scores)
    // for each element of the array of Student structures.
    for (int count = 0; count < s; count++)
    {
        ptr[count].tests = new int[t];
    }

    // Return a pointer to the array of structures.
    return ptr;
}

//*****************************************************
// Function getInfo                                   *
// This function populates the Student array s with   *
// data entered by the user. The paramater ns is the  *
// number of students and nt is the number of tests.  *
//*****************************************************

void getInfo(Student s[], int ns, int nt)
{
    

    // Get the data for each student.
    for (int index = 0; index < ns; index++)
    {
        getInfoOnce(s[index], ns, nt);
    }
}

void getInfoOnce(Student& s, int ns, int nt) {
    // Get the name.
    int total;
    cin.get();
    cout << "Student name: ";
    cin.getline(s.name, 45);

    // Get the ID number.
    cout << "ID Number: "; cin >> s.idNum;


    // Get the test scores and accumulate a total.
    total = 0;
    for (int t = 0; t < nt; t++)
    {
        cout << "Test # " << (t + 1) << " score: ";
        cin >> s.tests[t];
        total += s.tests[t];
    }
    s.total = total;
    s.average = total / nt;
}

// case 2
void changeStuInfo(Student s[], int ns, int nt) {
    int changeidNum = 0;
    cout << "Please input which idNum student you want to change" << endl;
    cin >> changeidNum;
    
    for (int i = 0; i < ns; i++) {
        if (s[i].idNum == changeidNum) {
            getInfoOnce(s[i], ns, nt);
            break;
        }
    }
    

}

//*****************************************************
// Function showInfo                                  *
// This function displays all of the data in the      *
// array s. The paramater ns is the number of         *
// students and nt is the number of tests.            *
//*****************************************************
// case 3
void showInfo(Student s[], int ns, int nt)
{
    cout << "*******************Student Info List****************" << endl;
    
    for (int i = 0; i < ns; i++)
    {
        showInfoOnce(s[i], nt);
    }
    cout << "****************************************************" << endl;
}

void showInfoOnce(Student& s, int nt) {
    cout << "Student name: " << s.name << endl;
    cout << "ID number: " << s.idNum << endl;
    for (int t = 0; t < nt; t++) {
        cout << "Test # "<<t<<" score: " << *(s.tests + t) << endl;
    }
    cout << "Total score: " << s.total << endl;
    cout << "Average score: " << s.average << endl;
    cout << endl;
}

// case 4
void idNumSearch(Student s[], int ns, int nt) {
    cout << "Please input a id number: ";
    int idNum;
    cin >> idNum;
    for (int i = 0; i < ns; i++) {
        if (s[i].idNum == idNum) {
            showInfoOnce(s[i], nt);
            break;
        }
    }
}
// case 5
void nameSearch(Student s[], int ns, int nt) {
    cout << "Please input a name: ";
    char name[45];
    cin.get();
    cin.getline(name, 45);
    
    for (int i = 0; i < ns; i++) {
        if (strcmp(s[i].name, name)==0 ){
            showInfoOnce(s[i], nt);
            break;
        }
    }
}
// case 6
void sortidNumInc(Student s[], int ns, int nt) {

    for (int i = 0; i < ns - 1; i++) {
        for (int j = 0; j < ns - i - 1; j++) {   
            if (s[j].idNum > s[j + 1].idNum) {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
// case7
void sortTotalDec(Student s[], int ns, int nt) {
    for (int i = 0; i < ns - 1; i++) {
        for (int j = 0; j < ns - i - 1; j++) {
            if (strcmp(s[j].name, s[j + 1].name)<0) {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}