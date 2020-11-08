//  Course Grade
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
using namespace std;

// Declaration of Student structure
struct Student
{
    char name[45]; // Student name
    int idNum;            // Student ID number
    int* tests;           // Pointer to array of test scores
    double total;         // Total test score
    double average;       // Average test score
};

/***********Start your code here***********/



/***********End your code*************/
//Please do not modify anything in main()

int main()
{
    int choice = 1; // Choice of menu
    int numStudents = 0;  // Number of students
    int numTests = 0;     // Number of tests
    Student* list = NULL;    // Pointer to Student array


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

