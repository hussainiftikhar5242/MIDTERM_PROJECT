#include <iostream>
#include <stdlib.h>
using namespace std;
int menu(); // start of admin prototype
void header();
void teacherlist(string tname1, string tname2, string tname3, string tname4, string tsub1, string tsub2, string tsub3, string tsub4, int tid1, int tid2, int tid3, int tid4, string tCNIC1, string tCNIC2, string tCNIC3, string tCNIC4);
void admin();
int adminmenu();
void studentmessage();
void removestudent(string name, string fathername, string section, string course, double CNIC, int roll_number, int marks);
void removeteacher(string name, string subject, double CNIC, double phone, int salary, string post, int teacherid);
void allrecord(string name1, string name2, string name3, string name4, string fname1, string fname2, string fname3, string fname4, string section1, string section2, string section3, string section4, string course1, string course2, string course3, string course4, double CNIC1, double CNIC2, double CNIC3, double CNIC4, int roll_number1, int roll_number2, int roll_number3, int roll_number4, int marks1, int marks2, int marks3, int marks4);
void teacherrecord(string tname1, string tname2, string tname3, string tname4, string post1, string post2, string post3, string post4, string tsub1, string tsub2, string tsub3, string tsub4, double phone1, double phone2, double phone3, double phone4, int teachid1, int teachid2, int teachid3, int teachid4, int salary1, int salary2, int salary3, int salary4, double tCNIC1, double tCNIC2, double tCNIC3, double tCNIC4);
void timetable();
void displayresult(string name1, string name2, string name3, string name4);
void attendancestatus(string name1, string name2, string name3, string name4); // end of admin prototype
// start of user prototype
void teacheruser();
int teachermenu();
void attendance(string name1, string name2, string name3, string name4);
void resultreport();
void passwordchange(); // end of teacher prototype
// start of student user
int studentmenu();
void studentuser();
void result(string name, int roll_number, int marks);
void notice();
void subject();
void fee();
void information(); // end of student prototype

main()
{ // start of main
     int num = menu();
     if (num == 1)
          admin(); // calling of function
     else
     {
          teacheruser(); // calling of function
          studentuser(); // calling of function
     }
} // end of main
void header()
{
     cout << "*******************************************************" << endl;
     cout << "*         COLLEGE MANAGEMENT SYSTEM                   *" << endl;
     cout << "*******************************************************" << endl;
}
int menu()
{
     header();
     cout << "MAIN MENU:" << endl;
     cout << "1.Admin:" << endl;
     cout << "2.User" << endl;
     cout << "your option:";
     int num1 = 0;
     cin >> num1;
     return num1;
}
void admin() // admin function
{
     int teachid1, teachid2, teachid3, teachid4;
     string post1, post2, post3, post4;
     string name1, name2, name3, name4, fname1, fname2, fname3, fname4, section1, section2, section3, section4, course1, course2, course3, course4; // student name,father name ,sectios name ,course
     string tname1, tname2, tname3, tname4;                                                                                                         // teacher name
     string tsub1, tsub2, tsub3, tsub4;                                                                                                             // teacher subject name.
     double phone1, phone2, phone3, phone4;                                                                                                         // teacher phone number;
     int salary1, salary2, salary3, salary4;                                                                                                        // teacher salary
     double CNIC1, CNIC2, CNIC3, CNIC4, tCNIC1, tCNIC2, tCNIC3, tCNIC4;                                                                             // tcnic mena teacher cnic and cnic mean student cnic
     int roll_number1, roll_number2, roll_number3, roll_number4, marks1, marks2, marks3, marks4;                                                    // roll numebr ,and marks
     int num = 1;
     cout << "Main menu > admin" << endl;
     string name;
     cout << "enter your name:";
     cin >> name;
     string password;
     cout << "enter your password:";
     cin >> password;
     string aname1;
     cout << "enter a name if you want to login in admin:";
     cin >> aname1;
     string password2;
     cout << "enter login password:";
     cin >> password2;
     if (num == 1) // admin option
     {
          if (name == aname1 && password == password2) // login option
          {
               int student_count = 1;
               int num = adminmenu();
               if (num == 1)
               {
                    int teacher_count = 1;
                    int exit = 0;
                    int number = 0;
                    int option = adminmenu();
                    while (number != 9)
                    {
                         if (exit == 0)
                         {
                              if (option == 1) // start of student add
                              {
                                   if (student_count == 1)
                                   {
                                        studentmessage();
                                        cout << "enter student name:" << endl;
                                        cin >> name1;
                                        cout << "enter father  name:" << endl;
                                        cin >> fname1;
                                        cout << "enter obtained marks in matric:" << endl;
                                        cin >> marks1;
                                        cout << "enter course name:";
                                        cin >> course1;
                                        cout << "enter roll number:";
                                        cin >> roll_number1;
                                        cout << "enter CNIC:";
                                        cin >> CNIC1;
                                        cout << "enter SECTION:";
                                        cin >> section1;
                                        student_count = student_count + 1;
                                        option = adminmenu();
                                   }
                                   else if (student_count == 2)
                                   {
                                        studentmessage();
                                        cout << "enter student name:" << endl;
                                        cin >> name2;
                                        cout << "enter father  name:" << endl;
                                        cin >> fname2;
                                        cout << "enter obtained marks in matric:" << endl;
                                        cin >> marks2;
                                        cout << "enter course name:";
                                        cin >> course2;
                                        cout << "enter roll number:";
                                        cin >> roll_number2;
                                        cout << "enter CNIC:";
                                        cin >> CNIC2;
                                        cout << "enter SECTION:";
                                        cin >> section2;
                                        student_count = student_count + 1;
                                        option = adminmenu();
                                   }
                                   else if (student_count == 3)
                                   {
                                        studentmessage();
                                        cout << "enter student name:" << endl;
                                        cin >> name3;
                                        cout << "enter father  name:" << endl;
                                        cin >> fname3;
                                        cout << "enter obtained marks in matric:" << endl;
                                        cin >> marks3;
                                        cout << "enter course name:";
                                        cin >> course3;
                                        cout << "enter roll number:";
                                        cin >> roll_number3;
                                        cout << "enter CNIC:";
                                        cin >> CNIC3;
                                        cout << "enter SECTION:";
                                        cin >> section3;
                                        student_count = student_count + 1;
                                        option = adminmenu();
                                   }
                                   else if (student_count == 4)
                                   {
                                        studentmessage();
                                        cout << "enter student name:" << endl;
                                        cin >> name4;
                                        cout << "enter father  name:" << endl;
                                        cin >> fname4;
                                        cout << "enter obtained marks in matric:" << endl;
                                        cin >> marks4;
                                        cout << "enter course name:";
                                        cin >> course4;
                                        cout << "enter roll number:";
                                        cin >> roll_number4;
                                        cout << "enter CNIC:";
                                        cin >> CNIC4;
                                        cout << "enter SECTION:";
                                        cin >> section4;
                                        student_count = student_count + 1;
                                        option = adminmenu();
                                   }
                                   else
                                   {
                                        cout << "no more space:" << endl;
                                        option = adminmenu();
                                   }
                              }                // end of add student
                              if (option == 2) // add new teacher
                              {
                                   if (teacher_count == 1)
                                   {
                                        cout << "Main menu > add new teacher:" << endl;
                                        cout << "enter teacher name:";
                                        cin >> tname1;
                                        cout << "enter subject he can teach:";
                                        cin >> tsub1;
                                        cout << "enter CNIC :";
                                        cin >> tCNIC1;
                                        cout << "enter phone number:";
                                        cin >> phone1;
                                        cout << "enter salary:";
                                        cin >> salary1;
                                        cout << "enter teacher post:";
                                        cin >> post1;
                                        cout << "enter teacher id:";
                                        cin >> teachid1;
                                        teacher_count = teacher_count + 1;
                                        option = adminmenu();
                                   }
                                   else if (teacher_count == 2)
                                   {
                                        cout << "Main menu > add new teacher:" << endl;
                                        cout << "enter teacher name:";
                                        cin >> tname2;
                                        cout << "enter subject he can teach:";
                                        cin >> tsub2;
                                        cout << "enter CNIC :";
                                        cin >> tCNIC2;
                                        cout << "enter phone number:";
                                        cin >> phone2;
                                        cout << "enter salary:";
                                        cin >> salary2;
                                        cout << "enter teacher post:";
                                        cin >> post2;
                                        cout << "enter teacher id:";
                                        cin >> teachid1;
                                        teacher_count = teacher_count + 1;
                                        option = adminmenu();
                                   }
                                   else if (teacher_count == 3)
                                   {
                                        cout << "Main menu > add new teacher:" << endl;
                                        cout << "enter teacher name:";
                                        cin >> tname3;
                                        cout << "enter subject he can teach:";
                                        cin >> tsub3;
                                        cout << "enter CNIC :";
                                        cin >> tCNIC3;
                                        cout << "enter phone number:";
                                        cin >> phone3;
                                        cout << "enter salary:";
                                        cin >> salary3;
                                        cout << "enter teacher post:";
                                        cin >> post3;
                                        cout << "enter teacher id:";
                                        cin >> teachid1;
                                        teacher_count = teacher_count + 1;
                                        option = adminmenu();
                                   }
                                   else if (teacher_count == 4)
                                   {
                                        cout << "Main menu > add new teacher:" << endl;
                                        cout << "enter teacher name:";
                                        cin >> tname4;
                                        cout << "enter subject he can teach:";
                                        cin >> tsub4;
                                        cout << "enter CNIC :";
                                        cin >> tCNIC4;
                                        cout << "enter phone number:";
                                        cin >> phone4;
                                        cout << "enter salary:";
                                        cin >> salary4;
                                        cout << "enter teacher post:";
                                        cin >> post4;
                                        cout << "enter teacher id:";
                                        cin >> teachid1;
                                        teacher_count = teacher_count + 1;
                                   }
                                   else
                                   {
                                        cout << "no more soace:" << endl;
                                        option = adminmenu();
                                   }
                              }                // end of add teacher.
                              if (option == 3) // remove student.
                              {
                                   removestudent(name1, fname1, section1, course1, CNIC1, roll_number1, marks1);
                                   removestudent(name2, fname2, section2, course2, CNIC2, roll_number2, marks2);
                                   removestudent(name3, fname3, section3, course3, CNIC3, roll_number3, marks3);
                                   removestudent(name4, fname4, section4, course4, CNIC4, roll_number4, marks4);
                                   option = adminmenu();
                              }
                              if (option == 4)//remove teacher
                              {
                                   removeteacher(tname1, tsub1, tCNIC1, phone1, salary1, post1, teachid1);
                                   removeteacher(tname2, tsub2, tCNIC2, phone2, salary2, post2, teachid2);
                                   removeteacher(tname3, tsub3, tCNIC3, phone3, salary3, post3, teachid3);
                                   removeteacher(tname4, tsub4, tCNIC4, phone4, salary4, post4, teachid4);
                                   option = adminmenu();
                              }
                              if (option == 5)          // display all records.
                              {
                                   allrecord(name1, name2, name3, name4, fname1, fname2, fname3, fname4, section1, section2, section3, section4, course1, course2, course3, course4, CNIC1, CNIC2, CNIC3, CNIC4, roll_number1, roll_number2, roll_number3, roll_number4, marks1, marks2, marks3, marks4);
                                   teacherrecord(tname1, tname2, tname3, tname4, post1, post2, post3, post4, tsub1, tsub2, tsub3, tsub4, phone1, phone2, phone3, phone4, teachid1, teachid2, teachid3, teachid4, salary1, salary2, salary3, salary4, tCNIC1, tCNIC2, tCNIC3, tCNIC4);
                                   option = adminmenu();
                              }
                              if (option == 6)          //display time table
                              {
                                   timetable();
                                   option = adminmenu();
                              }
                              if (option == 7)         // display result
                              {
                                   displayresult(name1, name2, name3, name4);
                                   option = adminmenu();
                              }
                              if (option == 8)         // display attendance
                              {
                                   attendancestatus(name1, name2, name3, name4);
                                   exit = 1;
                                   number = 9;
                              }
                         }
                    }
               }
          }
     }
}
int adminmenu() //menu of admin which activities can be peroorm admin
{
     cout << "admin option are:" << endl;
     cout << "1.add new students:" << endl;
     cout << "2.add new teacher:" << endl;
     cout << "3.remove student:" << endl;
     cout << "4.remove teacher:" << endl;
     cout << "5.view all record:" << endl;
     cout << "6.check timetable:" << endl;
     cout << "7.check student result:" << endl;
     cout << "8.check student attendanec status:" << endl;
     cout << "your option:";
     int num;
     cin >> num;
     return num;
}
void studentmessage()
{
     cout << "Main Menu > add new student:" << endl;
}
void removestudent(string name, string fathername, string section, string course, double CNIC, int roll_number, int marks)
{
     int removeroll; // removeroll mean remove roll number
     cout << "enter student roll number if you want to remove:";
     cin >> removeroll;
     if (removeroll == roll_number)
     {
          name = "0";
          fathername = "0";
          section = "nill";
          CNIC = 0;
          marks = 0;
          cout << "roll number:"<< " " << roll_number << "has been remmoved from record:" << endl;
     }
     else
     {
          cout << "sorry wrong roll number no student is remove please type correct roll number:" << endl;
     }
}
void removeteacher(string name, string subject, double CNIC, double phone, int salary, string post, int teacherid)
{
     int id = 0;
     cout << "enter same teacher id if you want to remove the teacher:";
     cin >> id;
     if (id == teacherid)
     {
          name = "0";
          subject = "no";
          CNIC = 0;
          phone = 0;
          salary = 0;
          post = "unknow";
          cout << "teacher id "<< " " << teacherid << "has been removed successfully:" << endl;
     }
     else
     {
          cout << "sorry wrong id no teacher is remove please tyoe correct id:" << endl;
     }
}
void allrecord(string name1, string name2, string name3, string name4, string fname1, string fname2, string fname3, string fname4, string section1, string section2, string section3, string section4, string course1, string course2, string course3, string course4, double CNIC1, double CNIC2, double CNIC3, double CNIC4, int roll_number1, int roll_number2, int roll_number3, int roll_number4, int marks1, int marks2, int marks3, int marks4)
{
     if (marks1 > marks2 && marks1 > marks3 && marks1 > marks4) // if student 1 has larger marks.
     {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks" << marks1 << endl;
          if (marks2 > marks3 && marks2 > marks4)
          {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               if (marks3 > marks4)
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< " roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               }
               else
               {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
          }
          if (marks3 > marks4 && marks3 > marks2)
          {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               if (marks4 > marks2)
               {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               }
               else
               {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               }
          }
          if (marks4 > marks3 && marks4 > marks2)
          {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               if (marks3 > marks2)
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               }
               else
               {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
          }
     }
     if (marks2 > marks1 && marks2 > marks3 && marks2 > marks4) // if student 2 has larger marks.
     {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
          if (marks1 > marks3 && marks1 > marks4)
          {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               if (marks3 > marks4)
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               }
               else
               {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
          }
          if (marks3 > marks4 && marks3 > marks1)
          {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               if (marks4 > marks1)
               {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               }
               else
               {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               }
          }
          if (marks4 > marks3 && marks4 > marks2)
          {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               if (marks3 > marks2)
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               }
               else
               {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
          }
     }
     if (marks3 > marks1 && marks3 > marks2 && marks3 > marks4) // if student 3 has larger  marks
     {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
          if (marks1 > marks2 && marks1 > marks4)
          {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               if (marks2 > marks4)
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               }
               else
               {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
          }
          if (marks2 > marks4 && marks2 > marks1)
          {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               if (marks4 > marks1)
               {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               }
               else
               {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               }
          }
          if (marks4 > marks1 && marks4 > marks2)
          {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
               if (marks1 > marks2)
               {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               }
               else
               {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               }
          }
     }
     if (marks4 > marks1 && marks4 > marks2 && marks4 > marks3) // if student 4 has larger marks.
     {
                    cout << "student name:" << name4 << "\t"<< "father name:" << fname4 << "\t"<< "section:" << section4 << "\t"<< "roll number:" << roll_number4 << "\t"<< "CNIC:" << CNIC4 << "\t"<< "marks:" << marks4 << endl;
          if (marks1 > marks2 && marks1 > marks3)
          {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               if (marks2 > marks3)
               {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
               else
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               }
          }
          if (marks2 > marks3 && marks2 > marks1)
          {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               if (marks3 > marks1)
               {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               }
               else
               {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               }
          }
          if (marks3 > marks1 && marks3 > marks2)
          {
                    cout << "student name:" << name3 << "\t"<< "father name:" << fname3 << "\t"<< "section:" << section3 << "\t"<< "roll number:" << roll_number3 << "\t"<< "CNIC:" << CNIC3 << "\t"<< "marks:" << marks3 << endl;
               if (marks1 > marks2)
               {
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
               }
               else
               {
                    cout << "student name:" << name2 << "\t"<< "father name:" << fname2 << "\t"<< "section:" << section2 << "\t"<< "roll number:" << roll_number2 << "\t"<< "CNIC:" << CNIC2 << "\t"<< "marks:" << marks2 << endl;
                    cout << "student name:" << name1 << "\t"<< "father name:" << fname1 << "\t"<< "section:" << section1 << "\t"<< "roll number:" << roll_number1 << "\t"<< "CNIC:" << CNIC1 << "\t"<< "marks:" << marks1 << endl;
               }
          }

     } // end of studetn sorting
}
void teacherrecord(string tname1, string tname2, string tname3, string tname4, string post1, string post2, string post3, string post4, string tsub1, string tsub2, string tsub3, string tsub4, double phone1, double phone2, double phone3, double phone4, int teachid1, int teachid2, int teachid3, int teachid4, int salary1, int salary2, int salary3, int salary4, double tCNIC1, double tCNIC2, double tCNIC3, double tCNIC4)
{
     if (salary1 > salary2 && salary1 > salary3 && salary1 > salary4) // start of sorting for teacher
     {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
          if (salary2 > salary3 && salary2 > salary4)
          {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               if (salary4 > salary3)
               {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               }
          }
          if (salary3 > salary2 && salary3 > salary4)
          {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               if (salary4 > salary2)
               {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               }
          }
          if (salary4 > salary3 && salary4 > salary2)
          {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               if (salary2 > salary3)
               {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               }
          }
     }
     if (salary3 > salary1 && salary3 > salary2 && salary3 > salary4)
     {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
          if (salary1 > salary2 && salary1 > salary4)
          {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               if (salary4 > salary2)
               {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               }
          }
          if (salary2 > salary1 && salary2 > salary4)
          {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               if (salary4 > salary1)
               {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               }
          }
          if (salary4 > salary2 && salary4 > salary1)
          {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               if (salary1 > salary2)
               {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               }
          }
     }
     if (salary2 > salary3 && salary2 > salary1 && salary2 > salary4)
     {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
          if (salary1 > salary3 && salary1 > salary4)
          {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               if (salary4 > salary3)
               {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               }
          }
          if (salary3 > salary1 && salary3 > salary4)
          {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               if (salary4 > salary1)
               {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               }
          }
          if (salary4 > salary3 && salary4 > salary1)
          {
               cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
               if (salary1 > salary3)
               {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               }
          }
     }
     if (salary4 > salary3 && salary4 > salary1 && salary4 > salary2)
     {
                    cout << "teacher name:" << tname4 << "\t"<< "subject:" << tsub4 << "\t"<< "phone nubmer:" << phone4 << "\t"<< "salary:" << salary4 << "\t"<< "cnic:" << tCNIC4 << "\t"<< "post:" << post4 << "\t"<< "teacher id" << teachid4 << endl;
          if (salary1 > salary3 && salary1 > salary2)
          {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               if (salary2 > salary3)
               {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               }
          }
          if (salary3 > salary1 && salary3 > salary2)
          {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               if (salary2 > salary1)
               {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               }
          }
          if (salary2 > salary3 && salary2 > salary1)
          {
                    cout << "teacher name:" << tname2 << "\t"<< "subject:" << tsub2 << "\t"<< "phone nubmer:" << phone2 << "\t"<< "salary:" << salary2 << "\t"<< "cnic:" << tCNIC2 << "\t"<< "post:" << post2 << "\t"<< "teacher id" << teachid2 << endl;
               if (salary1 > salary3)
               {
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
               }
               else
               {
                    cout << "teacher name:" << tname3 << "\t"<< "subject:" << tsub3 << "\t"<< "phone nubmer:" << phone3 << "\t"<< "salary:" << salary3 << "\t"<< "cnic:" << tCNIC3 << "\t"<< "post:" << post3 << "\t"<< "teacher id" << teachid3 << endl;
                    cout << "teacher name:" << tname1 << "\t"<< "subject:" << tsub1 << "\t"<< "phone nubmer:" << phone1 << "\t"<< "salary:" << salary1 << "\t"<< "cnic:" << tCNIC1 << "\t"<< "post:" << post1 << "\t"<< "teacher id" << teachid1 << endl;
               }
          }
     } // end of teacher sorting
} // end of function
void timetable()
{
     cout << "Main menu > check time table" << endl;
     cout << "   time    "<< "8:00 to 9:00"<< "9:00 to 10:00"<< "10:00 to 11:00" << endl;
     cout << "  monday   "<< "  math/bio  "<< "  english    "<< "   physics    " << endl;
     cout << "  tuesday  "<< "  urdu      "<< "  math/bio   "<< "   com/chem   " << endl;
     cout << " wenusday  "<< "  english   "<< "_____________"<< "   physics    " << endl;
     cout << " thurday   "<< "  math/bio  "<< "  math/bio   "<< "     urdu     " << endl;
     cout << "  friday   "<< "  english   "<< "  physics    "<< "     urdu     " << endl;
}
void displayresult(string name1, string name2, string name3, string name4)
{
     int eng1 = 90, eng2 = 88, eng3 = 85, eng4 = 90;
     int math1 = 100, math2 = 90, math3 = 88, math4 = 80;
     int phy1 = 84, phy2 = 33, phy3 = 70, phy4 = 78;
     int urdu1 = 90, urdu2 = 80, urdu3 = 77, urdu4 = 77;
     int com1orchem1 = 70, com2orchem2 = 55, com3orchem3 = 65, com4orchem4 = 71;
     int total1 = eng1 + math1 + phy1 + urdu1 + com1orchem1;
     int total2 = eng2 + math2 + phy2 + urdu2 + com2orchem2;
     int total3 = eng3 + math3 + phy3 + urdu3 + com3orchem3;
     int total4 = eng4 + math4 + phy4 + urdu4 + com4orchem4;
     if (name1 != "0")
     {
          cout << "student name: " << name1 << "marks is equal to: " << total1 << endl;
     }
     if (name2 != "0")
     {
          cout << "student name: " << name2 << "marks is equal to: " << total2 << endl;
     }
     if (name3 != "0")
     {
          cout << "student name: " << name3 << "marks is equal to: " << total3 << endl;
     }
     if (name4 != "0")
     {
          cout << "student name: " << name4 << "marks is equal to: " << total4 << endl;
     }
}
void attendancestatus(string name1, string name2, string name3, string name4)
{
     cout << "Main Menu > check student attendanec status" << endl;
     float day1, day2, day3, day4;
     cout << "enter days a 1st student present in month:";
     cin >> day1;
     cout << "enter days a 2nd student present in month:";
     cin >> day2;
     cout << "enter days a 3rd student present in month:";
     cin >> day3;
     cout << "enter days a 4th student present in month:";
     cin >> day4;
     int month;
     cout << "enter month number:";
     cin >> month;
     if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) // calculate attendanec status
     {
          float per1 = (100 * day1) / 31;
          float per2 = (100 * day2) / 31;
          float per3 = (100 * day3) / 31;
          float per4 = (100 * day4) / 31;
          if (per1 > per2 && per1 > per3 && per1 > per4)
          {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
               if (per2 > per3 && per2 > per4)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per3 > per4)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per2 && per3 > per4)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per2 > per4)
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
               }
               if (per4 > per3 && per4 > per2)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per3 > per2)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
          }
          if (per2 > per1 && per2 > per3 && per2 > per4)
          {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
               if (per1 > per3 && per1 > per4)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per3 > per4)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per1 && per3 > per4)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per4 > per1)
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
               }
               if (per4 > per3 && per4 > per1)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per3 > per1)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
          }
          if (per3 > per1 && per3 > per2 && per3 > per4)
          {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
               if (per1 > per2 && per1 > per4)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per2 > per4)
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
               }
               if (per2 > per1 && per2 > per4)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per1 > per4)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               if (per4 > per1 && per4 > per2)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per1 > per2)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
          }
          if (per4 > per1 && per4 > per3 && per4 > per2)
          {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                if (per1 > per3 && per1 > per2)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per3 > per2)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per1 && per3 > per2)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per1 > per2)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               if (per2 > per1 && per2 > per3)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per1 > per3)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               
          }
     }
     else if (month == 4 || month == 6 || month == 9 || month == 11) // calculate attendanec status
     {
          float per1 = (100 * day1) / 30;
          float per2 = (100 * day2) / 30;
          float per3 = (100 * day3) / 30;
          float per4 = (100 * day4) / 30;
          if (per1 > per2 && per1 > per3 && per1 > per4)
          {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
               if (per2 > per3 && per2 > per4)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per3 > per4)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per2 && per3 > per4)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per2 > per4)
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
               }
               if (per4 > per3 && per4 > per2)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per3 > per2)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
          }
          if (per2 > per1 && per2 > per3 && per2 > per4)
          {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
               if (per1 > per3 && per1 > per4)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per3 > per4)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per1 && per3 > per4)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per4 > per1)
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
               }
               if (per4 > per3 && per4 > per1)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per3 > per1)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
          }
          if (per3 > per1 && per3 > per2 && per3 > per4)
          {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
               if (per1 > per2 && per1 > per4)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per2 > per4)
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
               }
               if (per2 > per1 && per2 > per4)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per1 > per4)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               if (per4 > per1 && per4 > per2)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per1 > per2)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
          }
          if (per4 > per1 && per4 > per3 && per4 > per2)
          {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
               if (per1 > per3 && per1 > per2)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per3 > per2)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per1 && per3 > per2)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per1 > per2)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               if (per2 > per1 && per2 > per3)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per1 > per3)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
          }
     }
     else
     {
          float per1 = (100 * day1) / 28;
          float per2 = (100 * day2) / 28;
          float per3 = (100 * day3) / 28;
          float per4 = (100 * day4) / 28;
          if (per1 > per2 && per1 > per3 && per1 > per4)
          {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
               if (per2 > per3 && per2 > per4)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per3 > per4)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per2 && per3 > per4)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per2 > per4)
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
               }
               if (per4 > per3 && per4 > per2)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per3 > per2)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
          }
          if (per2 > per1 && per2 > per3 && per2 > per4)
          {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
               if (per1 > per3 && per1 > per4)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per3 > per4)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per1 && per3 > per4)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per4 > per1)
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
               }
               if (per4 > per3 && per4 > per1)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per3 > per1)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
          }
          if (per3 > per1 && per3 > per2 && per3 > per4)
          {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
               if (per1 > per2 && per1 > per4)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per2 > per4)
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
               }
               if (per2 > per1 && per2 > per4)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per1 > per4)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               if (per4 > per1 && per4 > per2)
               {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
                    if (per1 > per2)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
          }
          if (per4 > per1 && per4 > per3 && per4 > per2)
          {
                         cout << "student name:" << name4 << "\t"<< "monthly attendance percentage:" << per4 << endl;
               if (per1 > per3 && per1 > per2)
               {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    if (per3 > per2)
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
               }
               if (per3 > per1 && per3 > per2)
               {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    if (per1 > per2)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
               if (per2 > per1 && per2 > per3)
               {
                         cout << "student name:" << name2 << "\t"<< "monthly attendance percentage:" << per2 << endl;
                    if (per1 > per3)
                    {
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                    }
                    else
                    {
                         cout << "student name:" << name3 << "\t"<< "monthly attendance percentage:" << per3 << endl;
                         cout << "student name:" << name1 << "\t"<< "monthly attendance percentage:" << per1 << endl;
                    }
               }
          }
     }
}
void teacheruser() // teacher user
{
     string name1, name2, name3, name4, fname1, fname2, fname3, fname4, course1, course2, course3, course4, section1, section2, section3, section4;
     int marks1, marks2, marks3, marks4, roll_number1, roll_number2, roll_number3, roll_number4;
     double CNIC1, CNIC2, CNIC3, CNIC4;
     int num = 2;
     if (num == 2) // start of teacher user.
     {
          cout << "main menu > user" << endl;
          string user;
          string password;
          cout << "enter user name:";
          cin >> user;
          cout << "enter password:";
          cin >> password;
          string uname;
          string upassword;
          cout << "enter login id/name:";
          cin >> uname;
          cout << "enter login password:";
          cin >> upassword;
          int exit = 0;
          if (user == uname && password == upassword)
          {
               int numb = 1;
               int number = 0;
               int option = teachermenu();
               if (numb == 1)
               {
                    while (number != 2)
                    {
                         if (exit == 0)
                         {
                              if (option == 1)
                              {
                                   cout << "enter student name:" << endl;
                                   cin >> name1;
                                   cout << "enter father  name:" << endl;
                                   cin >> fname1;
                                   cout << "enter obtained marks in matric:" << endl;
                                   cin >> marks1;
                                   cout << "enter course name:";
                                   cin >> course1;
                                   cout << "enter roll number:";
                                   cin >> roll_number1;
                                   cout << "enter CNIC:";
                                   cin >> CNIC1;
                                   cout << "enter SECTION:";
                                   cin >> section1;
                                   cout << "enter student name:" << endl;
                                   cin >> name2;
                                   cout << "enter father  name:" << endl;
                                   cin >> fname2;
                                   cout << "enter obtained marks in matric:" << endl;
                                   cin >> marks2;
                                   cout << "enter course name:";
                                   cin >> course2;
                                   cout << "enter roll number:";
                                   cin >> roll_number2;
                                   cout << "enter CNIC:";
                                   cin >> CNIC2;
                                   cout << "enter SECTION:";
                                   cin >> section2;
                                   cout << "enter student name:" << endl;
                                   cin >> name3;
                                   cout << "enter father  name:" << endl;
                                   cin >> fname3;
                                   cout << "enter obtained marks in matric:" << endl;
                                   cin >> marks3;
                                   cout << "enter course name:";
                                   cin >> course3;
                                   cout << "enter roll number:";
                                   cin >> roll_number3;
                                   cout << "enter CNIC:";
                                   cin >> CNIC3;
                                   cout << "enter SECTION:";
                                   cin >> section3;
                                   cout << "enter student name:" << endl;
                                   cin >> name4;
                                   cout << "enter father  name:" << endl;
                                   cin >> fname4;
                                   cout << "enter obtained marks in matric:" << endl;
                                   cin >> marks4;
                                   cout << "enter course name:";
                                   cin >> course4;
                                   cout << "enter roll number:";
                                   cin >> roll_number4;
                                   cout << "enter CNIC:";
                                   cin >> CNIC4;
                                   cout << "enter SECTION:";
                                   cin >> section4;
                                   allrecord(name1, name2, name3, name4, fname1, fname2, fname3, fname4, section1, section2, section3, section4, course1, course2, course3, course4, CNIC1, CNIC2, CNIC3, CNIC4, roll_number1, roll_number2, roll_number3, roll_number4, marks1, marks2, marks3, marks4);
                                   option = teachermenu();
                              }
                              if (option == 2)
                              {
                                   attendancestatus(name1, name2, name3, name4);
                                   option = teachermenu();
                              }
                              if (option == 3)
                              {
                                   displayresult(name1, name2, name3, name4);
                                   option = teachermenu();
                              }
                              if (option == 4)
                              {
                                   resultreport();
                                   option = teachermenu();
                              }
                              if (option == 5)
                              {
                                   passwordchange();
                                   exit = 1;
                                   number = 2;
                              }
                         }
                    }
               }
          }
     }
}
int teachermenu() //which activites can be perfromed admin
{
     cout << "you are in user option:" << endl;
     cout << "main menu > teacher:" << endl;
     cout << "1.view student record:" << endl;
     cout << "2.view atttendance status:" << endl;
     cout << "3.display result" << endl;
     cout << "4.Generate student report:" << endl;
     cout << "5.change password:" << endl;
     cout << "yor option";
     int num;
     cin >> num;
     return num;
}
void resultreport() //display result of 11th class with remarks
{
     int eng1 = 90, eng2 = 88, eng3 = 85, eng4 = 90;
     int math1 = 100, math2 = 90, math3 = 88, math4 = 80;
     int phy1 = 84, phy2 = 33, phy3 = 70, phy4 = 78;
     int urdu1 = 90, urdu2 = 80, urdu3 = 77, urdu4 = 77;
     int com1orchem1 = 70, com2orchem2 = 55, com3orchem3 = 65, com4orchem4 = 71;
     int total1 = eng1 + math1 + phy1 + urdu1 + com1orchem1;
     int total2 = eng2 + math2 + phy2 + urdu2 + com2orchem2;
     int total3 = eng3 + math3 + phy3 + urdu3 + com3orchem3;
     int total4 = eng4 + math4 + phy4 + urdu4 + com4orchem4;
     if (total1 >= 420)
     {
          cout << "student one perform excellent:" << endl;
     }
     else if (total1 >= 360 && total1 < 420)
     {
          cout << "student one perfrom great:" << endl;
     }
     else if (total1 >= 300 && total1 < 360)
     {
          cout << "student one perform nice" << endl;
     }
     else
     {
          cout << "student one donot perform well please work hard:" << endl;
     }
     if (total2 >= 420)
     {
          cout << "student two perform excellent:" << endl;
     }
     else if (total2 >= 360 && total2 < 420)
     {
          cout << "student two perfrom great:" << endl;
     }
     else if (total2 >= 300 && total2 < 360)
     {
          cout << "student two perform nice" << endl;
     }
     else
     {
          cout << "student two do not perform well please work hard:" << endl;
     }
     if (total3 >= 420)
     {
          cout << "student three perform excellent:" << endl;
     }
     else if (total3 >= 360 && total3 < 420)
     {
          cout << "student three perfrom great:" << endl;
     }
     else if (total3 >= 300 && total3 < 360)
     {
          cout << "student three perform nice" << endl;
     }
     else
     {
          cout << "student three do not perform well please work hard:" << endl;
     }
     if (total4 >= 420)
     {
          cout << "student four perform excellent:" << endl;
     }
     else if (total4 >= 360 && total4 < 420)
     {
          cout << "student four perfrom great:" << endl;
     }
     else if (total4 >= 300 && total4 < 360)
     {
          cout << "student four perform nice" << endl;
     }
     else
     {
          cout << "student four do not perform well please work hard:" << endl;
     }
}
void passwordchange()   //change password.
{
     string upassword;
     cout << "enter forget if you forget or want to update your password:" << endl;
     cin >> upassword;
     if (upassword == "forget" || upassword == "update")
     {
          int phonenum;
          cout << "enter phone number:" << endl;
          cin >> phonenum;
          int newpass;
          cout << "enter new password:";
          cin >> newpass;
          cout << "you are password has been updated;" << endl;
     }
     else
     {
          cout << "sorry wrong input your password is not updates:try again:" << endl;
     }
}
int studentmenu()   // student menu
{
     int num;
     cout << "main menu>user " << endl;
     cout << "1.change password" << endl;
     cout << "2.check  result" << endl;
     cout << "3.check notice" << endl;
     cout << "4.check subject:" << endl;
     cout << "5.fee challen" << endl;
     cout << "6.personal information" << endl;
     cout << "your option" << endl;
     cin >> num;
     return num;
}
void studentuser()  // 2nd user student 
{
     string name1;
     int roll_number;
     int marks;
     string user, password;
     cout << "enter user name:" << endl;
     cin >> user;
     cout << "enter password:" << endl;
     cin >> password;
     string sname;
     string spassword;
     cout << "enter login name:" << endl;
     cin >> sname;
     cout << "enter login password:" << endl;
     cin >> spassword;
     int num = 2;
     int exit = 0;
     if (user == sname && password == spassword)   //login 
     {
          if (num == 2)
          {
               int numb = 1;
               int number = 0;
               cout << "enter student name:";
               cin >> name1;
               cout << "enter roll number to 500:";
               cin >> roll_number;
               cout << "enter marks of student:";
               cin >> marks;
               int option = studentmenu();
               if (numb == 1)
               {
                    while (number != 2)
                    {
                         if (exit == 0)
                         {
                              if (option == 1)
                              {
                                   passwordchange();
                                   option = studentmenu();
                              }
                              if (option == 2)
                              {
                                   result(name1, roll_number, marks);
                                   option = studentmenu();
                              }
                              if (option == 3)
                              {
                                   notice();
                                   option = studentmenu();
                              }
                              if (option == 4)
                              {
                                   subject();
                                   option = studentmenu();
                              }
                              if (option == 5)
                              {
                                   fee();
                                   option = studentmenu();
                              }
                              if (option == 6)
                              {
                                   information();
                                   exit = 1;
                                   number = 2;
                              }
                         }
                    }
               }
          }
     }
}
void result(string name, int roll_number, int marks)
{
     float aggregate = (marks * 100) / 500;
     string remarks;
     if (aggregate >= 350)
     {
          remarks = "good";
     }
     else
     {
          remarks = "not_satisfied:";
     }
     cout << "name:"<< " " << name << " "<< "roll number:" << roll_number << " "<< "aggregate:" << aggregate << " "<< "marks:" << marks << " "<< "remarks:" << remarks << endl;
}
void notice()
{
     string name1;
     string user1;
     string passw;
     string pass;
     cout << "enter user name:" << endl;
     cin >> name1;
     cout << "enter password:" << endl;
     cin >> pass;
     cout << "enter login name:" << endl;
     cin >> user1;
     cout << "enter password:" << endl;
     cin >> passw;
     if (name1 == user1 && pass == passw)
     {
          cout << "welcome back student please submit your project on monday thanks:" << endl;
     }
}
void subject()
{
     string name1;
     cout << "main menu > check subject:" << endl;
     string name;
     cout << "enter student name:";
     cin >> name;
     string subject1 = "math";
     string subject2 = "english";
     string subject3 = "computer";
     cout << "name" << name1 << "  "<< "subject name:"<< " " << subject1 << " " << subject2 << " "<< " " << subject3 << endl;
}
void fee()
{
     cout << "main menu>fee challen" << endl;
     string bank1;
     cout << "enter bank account:";
     cin >> bank1;
     string bankid;
     cout << "enter bank id:" << endl;
     cin >> bankid;
     if (bank1 == bankid)
     {
          cout << "fee has been submitted:" << endl;
     }
     else
     {
          cout << "sorry! please submit your fee" << endl;
     }
}
void information()
{
     cout << "main menu > personal information:" << endl;
     string name1 = "ali";
     string fname1 = "m.iftikhar";
     string section1 = "A";
     string course1 = "fsc";
     int roll_number1 = 126;
     double CNIC1 = 4521;
     cout << "  name:  "<< " father name       "<< "   section         "<< "  couser        " << " roll number "      << " cnin " << endl;
     cout <<    name1 << " " << fname1     << "    " << section1 << "   " << course1 << "   " << roll_number1 << "  " << CNIC1 << endl;
}
