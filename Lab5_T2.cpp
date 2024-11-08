#include <iostream>
using namespace std;

struct student_detail {
    string r_num;
    float marks;
};

struct Deptt_detail {
    string deptt_name;
    student_detail stud_marks[5];
};

void take_data(Deptt_detail *mar, int cond = 0) {
    if (cond < 5) {
        cout << "\nEnter Roll No. of student " << cond + 1 << " : ";
        cin >> mar->stud_marks[cond].r_num;
        cout << "Enter marks of Student " << cond + 1 << " : ";
        cin >> mar->stud_marks[cond].marks;
        take_data(mar, ++cond);
    }
}

class Deptt_result {
private:
    Deptt_detail deptt_result;
    double score() {
        double totalScore = 0;
        for (int i = 0; i < 5; ++i) {
            totalScore += deptt_result.stud_marks[i].marks;
        }
        return totalScore;
    }

    float avg() {
        return score() / 5.0;
    }

public:
    Deptt_result(Deptt_detail *holder) {
        deptt_result = *holder;
    }

    void deptt_info() {
        cout << "\nDepartment of " << deptt_result.deptt_name;
    }

    void deptt_reslt() {
        for (int i = 0; i < 5; ++i) {
            cout << "\nRoll Num# " << deptt_result.stud_marks[i].r_num;
            cout << "\nMarks :   " << deptt_result.stud_marks[i].marks;
        }

        cout << "\nTotal Score: " << score();
        cout << "\nAverage    : " << avg();
    }
};

int main() {
    // For 1st Department
    Deptt_detail D1;
    cout << "\nEnter Department name: ";
    cin >> D1.deptt_name;
    cout << "\nEnter Results";
    take_data(&D1);
    Deptt_result Deptt1(&D1);
    cout << "\nCOMPLETE RESULT";
    Deptt1.deptt_info();
    Deptt1.deptt_reslt();

    // For 2nd Department
    Deptt_detail D2;
    cout << "\n\nEnter Department name: ";
    cin >> D2.deptt_name;
    cout << "\nEnter Results";
    take_data(&D2);
    Deptt_result Deptt2(&D2);
    cout << "\nCOMPLETE RESULT";
    Deptt2.deptt_info();
    Deptt2.deptt_reslt();

    return 0;
}