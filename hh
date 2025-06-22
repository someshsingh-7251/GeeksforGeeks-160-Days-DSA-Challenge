#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string course;
    string university;

    void introduce() {
        cout << "My name is " << name << " and I am pursuing " << course 
             << " from " << university << "." << endl;
    }
};

int main() {
    Student somesh;
    somesh.name = "Somesh Singh";
    somesh.course = "B.Tech in Computer Science and Engineering";
    somesh.university = "COER University, Roorkee";

    somesh.introduce();

    return 0;
}