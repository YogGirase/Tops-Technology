/*
● Create a lecture management System  
Make sure each business logic is denoted with appropriate comments and 
make your code interactive and represent clean and clear output on your console screen. 
Adhere to the coding principles  Define a class to represent lecture details. 
Include the following members and the program should handle at least details of 5 lecturers.  
Data members: a) Name of the lecturer b) Name of the subject c) Name of course d) Number of lecturers 
Data functions:  a) To assign initial values  b) To add a lecture details  c) To display name and lecture details  
Make sure you have to use constructor concept in it  
Make sure all naming conversion properly mention in this project work  
Make sure all method name  Use class and object concepts  
Upload all features in develop branch after completion all features merge it with the main branch. 
*/
#include<iostream>
using namespace std;
class Lecture{
    private:
        string name_of_lecture;
        string subject_name;
        string course_name;
        int num_of_lectures;
    public:
        Lecture(string n, string s, string c, int num) {
        name_of_lecture = n;
        subject_name = s;
        course_name = c;
        num_of_lectures = num;
    }
        void displayDetails() {
        cout << "Lecturer Name: " << name_of_lecture << endl;
        cout << "Subject: " << subject_name << endl;
        cout << "Course: " << course_name << endl;
        cout << "Number of Lectures: " << num_of_lectures << endl;
    }
};
class LectureManagementSystem {
private:
    Lecture* lectures[5]; 
    int count; 
public:
    
    LectureManagementSystem() {
        count = 0;
    }

    
    void addLecture(Lecture* lecture) {
        if (count < 5) {
            lectures[count] = lecture;
            count++;
            
        } else {
            cout << "Cannot add more lectures, limit reached." << endl;
        }
    }

    
    void displayAllLectures() {
        for (int i = 0; i < count; i++) {
            cout<<"<---Lecturer Details--->\n";
            lectures[i]->displayDetails();
            cout << "----------------------------------------" << endl;
        }
    }
};
int main()
{
    LectureManagementSystem lms;

    Lecture lecturer1("Yogesh Girase", "Flutter", "MCA", 10);
    Lecture lecturer2("Dharmin Tandel", "Android", "mCA", 10);
    Lecture lecturer3("Muaaz Kazi", "Python", "MCA", 10);
    Lecture lecturer4("Nilesh Rajput", "DBMS", "MCA", 8);
    Lecture lecturer5("Akshay Kumar", "Computer", "MCA", 5);
    
    lms.addLecture(&lecturer1);
    lms.addLecture(&lecturer2);
    lms.addLecture(&lecturer3);
    lms.addLecture(&lecturer4);
    lms.addLecture(&lecturer5);

    cout<<"<---------------[LECTURE MANAGEMENT SYSTEM]----------------->\n"<<endl;
    
    lms.displayAllLectures();
    
    return 0;
}