// this code is the base for HR book keeping system (showing example of dynamic binding)
#include<iostream>
#include<string>

using namespace std;

// Class for HR Record of a person at the unversity
class HRRecord{
private:
    string Name; // Name of the person
    int DOB; // their date of birth
public:
    HRRecord(string Name,int DOB)
    {   // Notice the use of "this" pointer
        this->Name = Name;
        this->DOB = DOB;
    }
    
    //This function is virtual, meaning its implementation depdns on the class it belongs to  
    virtual string getStatus() {return "Person"; }
};

// Class to define a Student
class Student : public HRRecord {
private:
    int StudentID; // Student ID number
public:
    Student(string Name, int DOB, int StudentID):HRRecord(Name,DOB)
    {
        this->StudentID=StudentID;
    }

    
    // This is the local implementation of the Student Class
    string getStatus() { 
        string Output = "The Student's ID number is: " + to_string(StudentID);
        return Output; 
    } // function to return the record of the student
    

};

// Class to define a Staff
class Staff : public HRRecord {
private:
    int StaffID; // Staff ID number
public:
    Staff(string Name, int DOB, int StaffID) :HRRecord(Name, DOB)
    {
        this->StaffID=StaffID;
    }

    // This is the local implementation of the Staff Class
    string getStatus() {
        string Output = "The Staff's ID number is: " + to_string(StaffID);
        return Output;
    } // function to return the record of the staff

};


int main() {
    
    HRRecord* pPerson = nullptr; //define a pointer from the super class
    
    cout << "Enter 1 for staff enrty or 2 for student entry" << endl;
    int option = 0;
    cin >> option;

    switch (option) {

        // Notice here that the pointer from the sper class is pointing to a sub class object

    case 1: pPerson = new Staff("Random Staff", 29022045, 1234);
        break;

    case 2: pPerson = new Student("Random Student", 101190, 201765240);
        break;

     }

    cout << pPerson->getStatus(); // the version of the function called depends on the user's choice

    return 0;
};

