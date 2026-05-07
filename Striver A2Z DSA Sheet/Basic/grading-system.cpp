// A program for school grading system 
// school has the following rules for grading system -
/*
    a. Below 25 - F
    b. 26 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
*/

#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the student's marks here: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100){
        cout << "Grade : A" << endl;
        cout << "Congratulations on getting so good marks" << endl;
    }
    else if(marks >= 60 && marks <= 79) {
        cout << "Grade : B" << endl;
        cout << "Well done!" << endl;
    }
    else if(marks >= 50 && marks <= 59) {
        cout << "Grade : C" << endl;
        cout << "Avg marks, You can do better" << endl; 
    }
    else if(marks >= 45 && marks <= 49) {
        cout << "Grade : D" << endl;
        cout << "Need improvment" << endl;
    }
    else if(marks >= 26 && marks <= 44) {
        cout << "Grade : E" << endl;
        cout << "Just Pass, need a lot of imporvement" << endl;
    }
    else if(marks < 25) {
        cout << "Grade : F" << endl;
        cout << "Failedddd!" << endl;
    }
    else {
        cout << "Give me the correct marks out of 100" << endl;
    }

    return 0;
}


// input - Enter the student's marks here: 85
// output -
/*
    Grade : A
    Congratulations on getting so good marks
*/


// input - Enter the student's marks here: 17
// output -
/*
    Grade : F
    Failedddd!
*/