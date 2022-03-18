#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{  
    //------------------------------start of main  
    cout<<"*******************************************************"<<endl;
    cout<<"*         COLLEGE MANAGEMENT SYSTEM                   *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"MAIN MENU:"<<endl;
    cout<<"1.Admin:"<<endl;
    cout<<"2.User"<<endl;
    cout<<"your option:";
    int num=0;
    cin>>num;
    string post1,post2,post3,post4;
    string name1 , name2 ,name3,name4,fname1,fname2,fname3,fname4,section1,section2,section3,section4,course1,course2,course3,course4; //student name,father name ,sectios name ,course
    string tname1,tname2,tname3,tname4;//teacher name
    string tsub1,tsub2,tsub3,tsub4; //teacher subject name.
    double phone1,phone2,phone3,phone4; // teacher phone number;
    int salary1,salary2,salary3,salary4; // teacher salary 
    int tid1,tid2,tid3,tid4;//tid mean teacher id 
    double CNIC1,CNIC2,CNIC3,CNIC4,tCNIC1,tCNIC2,tCNIC3,tCNIC4; // tcnic mena teacher cnic and cnic mean student cnic
    int roll_number1,roll_number2,roll_number3,roll_number4 ,marks1,marks2,marks3,marks4; // roll numebr ,and marks
    if(num==1) //enter in admin
    {
        cout<<"Main menu > admin"<<endl;
        string name;
        cout<<"enter your name:";
        cin>> name;
        string password;
        cout<<"enter your password:";
        cin>> password;
        string aname1;
        cout<<"enter a name if you want to login in admin:";
        cin>> aname1;
        string password2;
        cout<<"enter login password:";
        cin>> password2;
        if(name == aname1 && password == password2)//login method//start of admin options.
        {
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            int num;
            cin>> num;
            if(num==1)//start of add new student
            {
                cout<<"Main Menu > add new student:"<<endl;
                cout<<"enter student name:"<<endl;
                cin>> name1;
                cout<<"enter father  name:"<<endl;
                cin>> fname1;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks1;
                cout<<"enter course name:";
                cin>> course1;
                cout<<"enter roll number:";
                cin>> roll_number1;
                cout<<"enter CNIC:";
                cin>> CNIC1;
                cout<<"enter SECTION:";
                cin>> section1;
            }
            if(num == 2)
            {
                cout<<"sorry! please add student first:"<<endl;
            }
            if(num == 3)
            {
                cout<<"you can not remove student because there is no student."<<endl;
            }
            if(num == 4)
            {
                cout<<"sorry! you can not remove teacher:"<<endl;
            }
            if(num == 5)
            {
                cout<<"there is no record yet."<<endl;
            }
            if(num == 6)
            {
              cout<<"Main menu > check time table"<<endl;
              cout<<"   time    " << "8:00 to 9:00" << "9:00 to 10:00" << "10:00 to 11:00" <<endl;
              cout<<"  monday   " << "  math/bio  " << "  english    " << "   physics    " <<endl;
              cout<<"  tuesday  " << "  urdu      " << "  math/bio   " << "   com/chem   " <<endl;
              cout<<" wenusday  " << "  english   " << "_____________" << "   physics    " <<endl;
              cout<<" thurday   " << "  math/bio  " << "  math/bio   " << "     urdu     " <<endl;
              cout<<"  friday   " << "  english   " << "  physics    " << "     urdu     " <<endl;
            }
            if(num == 7)
            {
                cout<<"no record:"<<endl;
            }
            if(num == 8)
            {
                cout<<"no attendance status."<<endl;
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 1)
            {
                cout<<"Main Menu > add new student:"<<endl;
                cout<<"enter student name:"<<endl;
                cin>> name2;
                cout<<"enter father  name:"<<endl;
                cin>> fname2;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks2;
                cout<<"enter course name:";
                cin>> course2;
                cout<<"enter roll number:";
                cin>> roll_number2;
                cout<<"enter CNIC:";
                cin>> CNIC2;
                cout<<"enter SECTION:";
                cin>> section2;
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 1)
            {
                cout<<"Main Menu > add new student:"<<endl;
                cout<<"enter student name:"<<endl;
                cin>> name3;
                cout<<"enter father  name:"<<endl;
                cin>> fname3;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks3;
                cout<<"enter course name:";
                cin>> course3;
                cout<<"enter roll number:";
                cin>> roll_number3;
                cout<<"enter CNIC:";
                cin>> CNIC3;
                cout<<"enter SECTION:";
                cin>> section3;
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 1)
            {
                cout<<"Main Menu > add new student:"<<endl;
                cout<<"enter student name:"<<endl;
                cin>> name4;
                cout<<"enter father  name:"<<endl;
                cin>> fname4;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks4;
                cout<<"enter course name:";
                cin>> course4;
                cout<<"enter roll number:";
                cin>> roll_number4;
                cout<<"enter CNIC:";
                cin>> CNIC4;
                cout<<"enter SECTION:";
                cin>> section4;
            }//end of add 4 student.
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num ==1)
            {
                cout<<"sorry! you can not add more student:";
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 2)//add new teacher
            {
                cout<<"Main menu > add new teacher:"<<endl;
                cout<<"enter teacher name:";
                cin>> tname1;
                cout<<"enter subject he can teach:";
                cin >> tsub1;
                cout <<"enter CNIC :";
                cin >> tCNIC1;
                cout<<"enter phone number:";
                cin>> phone1;
                cout<<"enter salary:";
                cin >> salary1;
                cout<<"enter teacher post:";
                cin>>post1;
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 2)
            {
                cout<<"Main menu > add new teacher:"<<endl;
                cout<<"enter teacher name:";
                cin>> tname2;
                cout<<"enter subject he can teach:";
                cin >> tsub2;
                cout <<"enter CNIC :";
                cin >> tCNIC2;
                cout<<"enter phone number:";
                cin>> phone2;
                cout<<"enter salary:";
                cin >> salary2;
                cout<<"enter teacher post:";
                cin>>post2;

            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 2)
            {
                cout<<"Main menu > add new teacher:"<<endl;
                cout<<"enter teacher name:";
                cin>> tname3;
                cout<<"enter subject he can teach:";
                cin >> tsub3;
                cout <<"enter CNIC :";
                cin >> tCNIC3;
                cout<<"enter phone number:";
                cin>> phone3;
                cout<<"enter salary:";
                cin >> salary3;
                cout<<"enter teacher post:";
                cin>>post3;
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 2)
            {
                cout<<"Main menu > add new teacher:"<<endl;
                cout<<"enter teacher name:";
                cin>> tname4;
                cout<<"enter subject he can teach:";
                cin >> tsub4;
                cout <<"enter CNIC :";
                cin >> tCNIC4;
                cout<<"enter phone number:";
                cin>> phone4;
                cout<<"enter salary:";
                cin >> salary4;
                cout<<"enter teacher post:";
                cin>>post4;
            }//end of add new teacher.
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 3)//remove student if you want to remove it.
            {
                
                cout << "enter student roll number:";
                cin >> roll_number1;
                int roll_number;
                cout<<"enter roll number that you want to remove:";
                cin>> roll_number;
                if(roll_number==roll_number1)//enter correct roll number if you wan tot remove a student. and enter wrong roll number if you do not want to remove it.
                {
                    name1="0";
                    roll_number1=0;
                    section1="0";
                    fname1="0";
                    CNIC1=0;
                    cout<<"student1 has been rmoved success:";
                }
                cout<<"enter student roll number:";
                cin >> roll_number2;
                cout<<"enter roll number that you want to remove:";
                cin>> roll_number;
                if(roll_number==roll_number2)
                {
                    name2="0";
                    roll_number2=0;
                    section2="0";
                    fname2="0";
                    CNIC2=0;
                    cout<<"student 2 has been rmoved success:";
                }
                cout<<"enter student roll number:";
                cin >> roll_number3;
                cout<<"enter roll number that you want to remove:";
                cin>> roll_number;
                if(roll_number==roll_number3)
                {
                    name3="0";
                    roll_number3=0;
                    section3="0";
                    fname3="0";
                    CNIC3=0;
                    cout<<"student 2 has been rmoved success:";
                }
                cout<<"enter student roll number:";
                cin >> roll_number2;
                cout<<"enter roll number that you want to remove:";
                cin>> roll_number;
                if(roll_number==roll_number4)
                {
                    name4="0";
                    roll_number4=0;
                    section4="0";
                    fname4="0";
                    CNIC4=0;
                    cout<<"student 2 has been rmoved success:";
                }
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 4 )
            {
                cout<<"enter teacher id:";
                cin >> tid1;
                int id;
                cout<<"enter id:";
                cin >> id;
                if(id==tid1)
                {
                    tname1="0";
                    tCNIC1=0;
                    phone1=0;
                    salary1=0;
                    cout<<"teacher has been removed successfully:";
                }
                cout<<"enter teacher id:";
                cin >> tid2;
                cout<<"enter id:";
                cin >> id;
                if(id==tid2)
                {
                    tname2="0";
                    tCNIC2=0;
                    phone2=0;
                    salary2=0;
                    cout<<"teacher has been removed successfully:";
                }
                cout<<"enter teacher id:";
                cin >> tid3;
                cout<<"enter id:";
                cin >> id;
                if(id==tid3)
                {
                    tname3="0";
                    tCNIC3=0;
                    phone3=0;
                    salary3=0;
                    cout<<"teacher has been removed successfully:";
                }
                cout<<"enter teacher id:";
                cin >> tid4;
                cout<<"enter id:";
                cin >> id;
                if(id==tid4)
                {
                    tname4="0";
                    tCNIC4=0;
                    phone4=0;
                    salary4=0;
                    cout<<"teacher has been removed successfully:";
                }
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 5) // sorting 
            {
                if(marks1 > marks2 && marks1 > marks3 && marks1 > marks4)//if student 1 has larger marks.
                {
                           cout<<"student name:" << name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1 <<"\t"<<"CNIC:"<< CNIC1<<"\t"<<"marks"<<marks1 <<endl;
                    if(marks2 > marks3 && marks2 > marks4)
                    {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2 <<"\t"<< "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                        if(marks3 > marks4)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3 <<"\t"<< "section:" << section3<<"\t"<< "roll number:" << roll_number3 <<"\t"<<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4 <<"\t"<< "section:" << section4<<"\t"<<" roll number:" << roll_number4 <<"\t"<<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                        }
                    }
                    if(marks3 > marks4 && marks3 > marks2)
                    {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                       if(marks4 > marks2)
                       {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                       }
                    }
                    if(marks4 > marks3 && marks4 > marks2)
                    {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                        if(marks3 > marks2)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                        }
                    }
                } 
                if(marks2 > marks1 && marks2 > marks3 && marks2 > marks4)//if student 2 has larger marks.
                {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                    if(marks1 > marks3 && marks1 > marks4)
                    {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1<<endl;
                        if(marks3 > marks4)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                        }
                    }
                    if(marks3 > marks4 && marks3 > marks1)
                    {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t"<<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                       if(marks4 > marks1)
                       {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1<<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name1<<"\t"<< "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                           cout<<"student name:"<< name4<<"\t"<< "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                       }
                    }
                    if(marks4 > marks3 && marks4 > marks2)
                    {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                        if(marks3 > marks2)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                        }
                    }

                }
                if(marks3 > marks1 && marks3 > marks2 && marks3 > marks4)//if student 3 has larger  marks 
                {
                          cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                    if(marks1 > marks2 && marks1 > marks4)
                    {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1<<endl;
                        if(marks2 > marks4)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                        }
                    }
                    if(marks2 > marks4 && marks2 > marks1)
                    {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl; 
                       if(marks4 > marks1)
                       {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                       }
                    }
                    if(marks4 > marks1 && marks4 > marks2)
                    {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                        if(marks1 > marks2)
                        {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                            cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t"<<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                        }
                    }
                }
                if(marks4 > marks1 && marks4 > marks2 && marks4 > marks3)//if student 4 has larger marks.
                {
                          cout<<"student name:"<< name4<<"\t"  << "father name:"  << fname4<<"\t" << "section:" << section4<<"\t"    << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                    if(marks1 > marks2 && marks1 > marks3)
                    {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t"   << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1<<endl;
                        if(marks2 > marks3)
                        {
                           cout<<"student name:"<< name2<<"\t" << "father name:" <<fname2<<"\t"  << "section:"  << section2<<"\t"  << "roll number:"<< roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                           cout<<"student name:"<< name3<<"\t" << "father name:" <<fname3<<"\t"  << "section:"  << section3<<"\t"  << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                        }
                    }
                    if(marks2 > marks3 && marks2 > marks1)
                    {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl; 
                       if(marks3 > marks1)
                       {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                       }
                    }
                    if(marks3 > marks1 && marks3 > marks2)
                    {
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t"<< "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                        if(marks1 > marks2)
                        {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t"<< "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                            cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t"<<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                        }
                    }

                }//end of sorting for student
                if(salary1 > salary2 && salary1 > salary3 && salary1 > salary4)//start of sorting for teacher
                {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                    if(salary2 > salary3 && salary2 > salary4)
                    {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        if(salary4 > salary3)
                        {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3<<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        }
                    }
                    if(salary3 > salary2 && salary3 > salary4)
                    {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        if(salary4 > salary2)
                        {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2<<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        }
                    }
                    if(salary4 > salary3 && salary4 > salary2)
                    {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        if(salary2 > salary3)
                        {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3<<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        }
                    }   
                }
                if(salary3 > salary1 && salary3 > salary2 && salary3 > salary4)
                {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                    if(salary1 > salary2 && salary1 > salary4)
                    {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        if(salary4 > salary2)
                        {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        }
                    }
                    if(salary2 > salary1 && salary2 > salary4)
                    {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        if(salary4 > salary1)
                        {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        }
                    }
                    if(salary4 > salary2 && salary4 > salary1)
                    {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        if(salary1 > salary2)
                        {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        }
                    }   
                }
                if(salary2 > salary3 && salary2 > salary1 && salary2 > salary4)
                {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                    if(salary1 > salary3 && salary1 > salary4)
                    {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        if(salary4 > salary3)
                        {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3<<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        }
                    }
                    if(salary3 > salary1 && salary3 > salary4)
                    {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        if(salary4 > salary1)
                        {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        }
                    }
                    if(salary4 > salary3 && salary4 > salary1)
                    {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                        if(salary1 > salary3)
                        {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3<<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        }
                    }   
                }
                if(salary4 > salary3 && salary4 > salary1 && salary4 > salary2)
                {
                            cout<<"teacher name:"<<tname4 <<"\t"<<"subject:"<<tsub4 <<"\t"<<"phone nubmer:"<<phone4 <<"\t"<<"salary:"<<salary4<<"\t"<<"cnic:"<<tCNIC4<<"\t"<<"post:"<<post4<<endl;
                    if(salary1 > salary3 && salary1 > salary2)
                    {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        if(salary2 > salary3)
                        {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3<<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        }
                    }
                    if(salary3 > salary1 && salary3 > salary2)
                    {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        if(salary2 > salary1)
                        {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        }
                    }
                    if(salary2 > salary3 && salary2 > salary1)
                    {
                            cout<<"teacher name:"<<tname2 <<"\t"<<"subject:"<<tsub2 <<"\t"<<"phone nubmer:"<<phone2 <<"\t"<<"salary:"<<salary2<<"\t"<<"cnic:"<<tCNIC2<<"\t"<<"post:"<<post2<<endl;
                        if(salary1 > salary3)
                        {
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3<<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                        }
                        else 
                        {
                            cout<<"teacher name:"<<tname3 <<"\t"<<"subject:"<<tsub3 <<"\t"<<"phone nubmer:"<<phone3 <<"\t"<<"salary:"<<salary3<<"\t"<<"cnic:"<<tCNIC3<<"\t"<<"post:"<<post3<<endl;
                            cout<<"teacher name:"<<tname1 <<"\t"<<"subject:"<<tsub1 <<"\t"<<"phone nubmer:"<<phone1 <<"\t"<<"salary:"<<salary1<<"\t"<<"cnic:"<<tCNIC1<<"\t"<<"post:"<<post1<<endl;
                        }
                    }   
                }//end of sorting for teacher
            }//end of sorting option .
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 6)//check time table.
            {
              cout<<"Main menu > check time table"<<endl;
              cout<<"   time    " << "8:00 to 9:00" << "9:00 to 10:00" << "10:00 to 11:00" <<endl;
              cout<<"  monday   " << "  math/bio  " << "  english    " << "   physics    " <<endl;
              cout<<"  tuesday  " << "  urdu      " << "  math/bio   " << "   com/chem   " <<endl;
              cout<<" wenusday  " << "  english   " << "_____________" << "   physics    " <<endl;
              cout<<" thurday   " << "  math/bio  " << "  math/bio   " << "     urdu     " <<endl;
              cout<<"  friday   " << "  english   " << "  physics    " << "     urdu     " <<endl;
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 7)
            {   
                cout<<"enter a number from 1 to 4 to check student result:"<<endl;
                cin >> num;
                if(num == 1)
                {
                    int eng1=90,eng2=88 ,eng3=85,eng4=90;
                    int math1=100,math2=90,math3=88,math4=80;
                    int phy1=84,phy2=33,phy3=70,phy4=78;
                    int urdu1=90,urdu2=80,urdu3=77,urdu4=77;
                    int com1orchem1=70,com2orchem2=55,com3orchem3=65,com4orchem4=71;
                    int total1=eng1+math1+phy1+urdu1+com1orchem1;
                    int total2=eng2+math2+phy2+urdu2+com2orchem2;
                    int total3=eng3+math3+phy3+urdu3+com3orchem3;
                    int total4=eng4+math4+phy4+urdu4+com4orchem4;
                    if(name1!="0")
                    {
                        cout<< "student name:" << name1 << "marks is equal to:" << total1<<endl;
                    }
                    if(name2 != "0")
                    {
                        cout<< "student name:" << name2 << "marks is equal to:" << total2<<endl;
                    }
                    if(name3 != "0")
                    {
                        cout<< "student name:" << name3 << "marks is equal to:" << total3<<endl;
                    }
                    if(name4 != "0")
                    {
                        cout<< "student name:" << name4 << "marks is equal to:" << total4<<endl;
                    }
                }
            }
            cout<<"admin option are:"<<endl;
            cout<<"1.add new students:"<<endl;
            cout<<"2.add new teacher:"<<endl;
            cout<<"3.remove student:"<<endl;
            cout<<"4.remove teacher:"<<endl;
            cout<<"5.view all record:"<<endl;
            cout<<"6.check timetable:"<<endl;
            cout<<"7.check student result:"<<endl;
            cout<<"8.check student attendanec status:"<<endl;
            cout<<"your option:";
            cin>> num;
            if(num == 8)
            {
                cout<<"Main Menu > check student attendanec status"<<endl;
                float day1,day2,day3,day4;
                cout<<"enter days a 1st student present in month:";
                cin >> day1;
                cout<<"enter days a 2nd student present in month:";
                cin >> day2;
                cout<<"enter days a 3rd student present in month:";
                cin >> day3;
                cout<<"enter days a 4th student present in month:";
                cin >> day4;
                int month;
                cout<<"enter month number:";
                cin >> month;
                if(month == 1 || month == 3 || month ==5 || month == 7 || month == 8 || month == 10 || month == 12)//calculate attendanec status
                {
                    float per1=(100*day1)/31;
                    float per2=(100*day2)/31;
                    float per3=(100*day3)/31;
                    float per4=(100*day4)/31;
                    if(per1 > per2 && per1 > per3 && per1 > per4)
                    {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                        if(per2 > per3 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl; 
                            }
                        }
                    }
                    if(per2 > per1 && per2 > per3 && per2 > per4)
                    {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                        if(per1 > per3 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per3 > per1 && per3 > per2 && per3 > per4)
                    {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                        if(per1 > per2 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per2 > per4)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                    }
                    if(per4 > per1 && per4 > per3 && per4 > per2)
                    {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                        if(per1 > per3 && per1 > per2)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                }
                else if(month == 4 || month == 6 || month ==9 || month == 11 )//calculate attendanec status
                {
                    float per1=(100*day1)/30;
                    float per2=(100*day2)/30;
                    float per3=(100*day3)/30;
                    float per4=(100*day4)/30;
                    if(per1 > per2 && per1 > per3 && per1 > per4)
                    {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                        if(per2 > per3 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl; 
                            }
                        }
                        if(per3 > per2 && per3 > per4)
                        {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per2 > per4)
                            {
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per4 > per3 && per4 > per2)
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per2 > per1 && per2 > per3 && per2 > per4)
                    {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                        if(per1 > per3 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per4)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per4 > per1)
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }

                        }
                        if(per4 > per3 && per4 > per1)
                        {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3>per1)
                            {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per3 > per1 && per3 > per2 && per3 > per4)
                    {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                        if(per1 > per2 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per2 > per4)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1 > per4)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per4 > per1 && per4 > per2 )
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per1>per2)
                            {
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                    if(per4 > per1 && per4 > per3 && per4 > per2)
                    {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                        if(per1 > per3 && per1 > per2)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per2)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per1 > per2)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per3)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1>per3)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                }
                else 
                {
                    float per1=(100*day1)/28;
                    float per2=(100*day2)/28;
                    float per3=(100*day3)/28;
                    float per4=(100*day4)/28;
                    if(per1 > per2 && per1 > per3 && per1 > per4)
                    {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                        if(per2 > per3 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl; 
                            }
                        }
                        if(per3 > per2 && per3 > per4)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per2 > per4)
                            {
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per4 > per3 && per4 > per2)
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per2 > per1 && per2 > per3 && per2 > per4)
                    {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                        if(per1 > per3 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per4)
                        {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per4 > per1)
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }

                        }
                        if(per4 > per3 && per4 > per1)
                        {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3>per1)
                            {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per3 > per1 && per3 > per2 && per3 > per4)
                    {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                        if(per1 > per2 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per2 > per4)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1 > per4)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per4 > per1 && per4 > per2 )
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per1>per2)
                            {
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                    if(per4 > per1 && per4 > per3 && per4 > per2)
                    {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                        if(per1 > per3 && per1 > per2)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per2)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per1 > per2)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per3)
                        {
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1>per3)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                }
            }
        }//end of admin option.
        else 
        {
            cout<<"wrong user name or password: try again:"<<endl;
        }
    }//out from admin
    if(num == 2)//start of user option
    {
        cout<<"main menu > user"<<endl;
        string user;
        string password;
        cout<<"enter user name:";
        cin>>user;
        cout<<"enter password:";
        cin>> password;
        string uname;
        string upassword;
        cout<<"enter login id/name:";
        cin >> uname;
        cout<<"enter login password:";
        cin >> upassword;
        if(user == uname && password == upassword)//this is for teacher.
        {
            cout<<"you are in user option:"<<endl;
            cout<<"main menu > teacher:"<<endl;
            cout<<"1.view student record:"<<endl;
            cout<<"2.view atttendance status:"<<endl;
            cout<<"3.display result"<<endl;
            cout<<"4.Generate student report:"<<endl;
            cout<<"5.change password:"<<endl;
            cout<<"yor option";
            cin >> num;
            if(num == 1)
            {
                cout<<"enter student name:"<<endl;
                cin>> name1;
                cout<<"enter father  name:"<<endl;
                cin>> fname1;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks1;
                cout<<"enter course name:";
                cin>> course1;
                cout<<"enter roll number:";
                cin>> roll_number1;
                cout<<"enter CNIC:";
                cin>> CNIC1;
                cout<<"enter SECTION:";
                cin>> section1;
                cout<<"enter student name:"<<endl;
                cin>> name2;
                cout<<"enter father  name:"<<endl;
                cin>> fname2;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks2;
                cout<<"enter course name:";
                cin>> course2;
                cout<<"enter roll number:";
                cin>> roll_number2;
                cout<<"enter CNIC:";
                cin>> CNIC2;
                cout<<"enter SECTION:";
                cin>> section2;
                cout<<"enter student name:"<<endl;
                cin>> name3;
                cout<<"enter father  name:"<<endl;
                cin>> fname3;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks3;
                cout<<"enter course name:";
                cin>> course3;
                cout<<"enter roll number:";
                cin>> roll_number3;
                cout<<"enter CNIC:";
                cin>> CNIC3;
                cout<<"enter SECTION:";
                cin>> section3;
                cout<<"enter student name:"<<endl;
                cin>> name4;
                cout<<"enter father  name:"<<endl;
                cin>> fname4;
                cout<<"enter obtained marks in matric:"<<endl;
                cin>> marks4;
                cout<<"enter course name:";
                cin>> course4;
                cout<<"enter roll number:";
                cin>> roll_number4;
                cout<<"enter CNIC:";
                cin>> CNIC4;
                cout<<"enter SECTION:";
                cin>> section4;
                if(marks1 > marks2 && marks1 > marks3 && marks1 > marks4)//if student 1 has larger marks.
                {
                           cout<<"student name:" << name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1 <<"\t"<<"CNIC:"<< CNIC1<<"\t"<<"marks"<<marks1 <<endl;
                    if(marks2 > marks3 && marks2 > marks4)
                    {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2 <<"\t"<< "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                        if(marks3 > marks4)
                        {
                           cout<<"student name:"<< name3<<"\t"<< "father name:" << fname3 <<"\t"<< "section:" << section3<<"\t"<< "roll number:" << roll_number3 <<"\t"<<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4 <<"\t"<< "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                        }
                    }
                    if(marks3 > marks4 && marks3 > marks2)
                    {
                           cout<<"student name:"<< name3<<"\t" << "father name:"<<"\t" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t" <<endl; 
                       if(marks4 > marks2)
                       {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks"<<marks4 <<endl;
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks"<<marks2<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                       }
                    }
                    if(marks4 > marks3 && marks4 > marks2)
                    {
                          cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                        if(marks3 > marks2)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t"<<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                        }
                    }
                } 
                if(marks2 > marks1 && marks2 > marks3 && marks2 > marks4)//if student 2 has larger marks.
                {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                    if(marks1 > marks3 && marks1 > marks4)
                    {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1<<endl;
                        if(marks3 > marks4)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                        }
                    }
                    if(marks3 > marks4 && marks3 > marks1)
                    {
                          cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t"<<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                       if(marks4 > marks1)
                       {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name1<<"\t"<< "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                       }
                    }
                    if(marks4 > marks3 && marks4 > marks1)
                    {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                        if(marks3 > marks1)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl; 
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                        }
                    }

                }
                if(marks3 > marks1 && marks3 > marks2 && marks3 > marks4)//if student 3 has larger  marks 
                {
                          cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                    if(marks1 > marks2 && marks1 > marks4)
                    {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks"<<marks1<<endl;
                        if(marks2 > marks4)
                        {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks"<<marks3<<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                        }
                    }
                    if(marks2 > marks4 && marks2 > marks1)
                    {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl; 
                       if(marks4 > marks1)
                       {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4<<endl;
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t"<<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                       }
                    }
                    if(marks4 > marks1 && marks4 > marks2)
                    {
                           cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                        if(marks1 > marks2)
                        {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                            cout<<"student name:"<< name1<<"\t"<< "father name:" << fname1 <<"\t"<< "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t"<<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                        }
                    }
                }
                if(marks4 > marks1 && marks4 > marks2 && marks4 > marks3)//if student 4 has larger marks.
                {
                          cout<<"student name:"<< name4<<"\t" << "father name:" << fname4<<"\t" << "section:" << section4<<"\t" << "roll number:" << roll_number4<<"\t" <<"CNIC:"<< CNIC4<<"\t"<<"marks:"<<marks4 <<endl;
                    if(marks1 > marks2 && marks1 > marks3)
                    {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1<<endl;
                        if(marks2 > marks3)
                        {
                           cout<<"student name:"<< name2<<"\t"<< "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl; 
                        }
                        else 
                        {
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3<<endl;
                            cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2<<endl;
                        }
                    }
                    if(marks2 > marks3 && marks2 > marks1)
                    {
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl; 
                       if(marks3 > marks1)
                       {
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                       }
                       else 
                       {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                           cout<<"student name:"<< name3<<"\t" << "father name:" << fname3<<"\t" << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                       }
                    }
                    if(marks3 > marks1 && marks3 > marks2)
                    {
                            cout<<"student name:"<< name3<<"\t" << "father name:" << fname3 << "section:" << section3<<"\t" << "roll number:" << roll_number3<<"\t" <<"CNIC:"<< CNIC3<<"\t"<<"marks:"<<marks3 <<endl;
                        if(marks1 > marks2)
                        {
                           cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t" <<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl; 
                           cout<<"student name:"<< name2<<"\t" << "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                        }
                        else
                        {
                            cout<<"student name:"<< name2<<"\t"<< "father name:" << fname2<<"\t" << "section:" << section2<<"\t" << "roll number:" << roll_number2<<"\t" <<"CNIC:"<< CNIC2<<"\t"<<"marks:"<<marks2 <<endl;
                            cout<<"student name:"<< name1<<"\t" << "father name:" << fname1<<"\t" << "section:" << section1<<"\t" << "roll number:" << roll_number1<<"\t"<<"CNIC:"<< CNIC1<<"\t"<<"marks:"<<marks1 <<endl;
                        }
                    }

                }
            }
            cout<<"you are in user option:"<<endl;
            cout<<"main menu > teacher:"<<endl;
            cout<<"1.view student record:"<<endl;
            cout<<"2.view atttendance status:"<<endl;
            cout<<"3.display result"<<endl;
            cout<<"4.Generate student report:"<<endl;
            cout<<"5.change password:"<<endl;
            cout<<"yor option";
            cin >> num;
            if(num == 2) // calculate attendance status.
            {
                cout<<"main menu > view attendance status:"<<endl;
                float day1,day2,day3,day4;
                cout<<"enter days a 1st student present in month:";
                cin >> day1;
                cout<<"enter days a 2nd student present in month:";
                cin >> day2;
                cout<<"enter days a 3rd student present in month:";
                cin >> day3;
                cout<<"enter days a 4th student present in month:";
                cin >> day4;
                int month;
                cout<<"enter month number:";
                cin >> month;
                if(month == 1 || month == 3 || month ==5 || month == 7 || month == 8 || month == 10 || month == 12)
                {
                    float per1=(100*day1)/31;
                    float per2=(100*day2)/31;
                    float per3=(100*day3)/31;
                    float per4=(100*day4)/31;
                    if(per1 > per2 && per1 > per3 && per1 > per4)
                    {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                        if(per2 > per3 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl; 
                            }
                        }
                        if(per3 > per4 && per3> per2)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per4 > per2)
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                        }
                        if(per4 > per3 && per4 > per2)
                        {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3 > per2)
                            {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl; 
                            }
                        }
                    }
                    if(per2 > per1 && per2 > per3 && per2 > per4)
                    {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                        if(per1 > per3 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per4)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per1 > per4)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per4 > per1 && per4 > per3)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per1 > per3)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                    if(per3 > per1 && per3 > per2 && per3 > per4)
                    {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                        if(per1 > per2 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per2 > per4)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1 > per4)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per4 > per1 && per4 > per2)
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per1 > per2)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                    if(per4 > per1 && per4 > per3 && per4 > per2)
                    {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                        if(per1 > per3 && per1 > per2)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per2 && per3 > per1)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per2 > per1)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per3)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1 > per3)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                }
                else if(month == 4 || month == 6 || month ==9 || month == 11 )
                {
                    float per1=(100*day1)/30;
                    float per2=(100*day2)/30;
                    float per3=(100*day3)/30;
                    float per4=(100*day4)/30;
                    if(per1 > per2 && per1 > per3 && per1 > per4)
                    {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                        if(per2 > per3 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl; 
                            }
                        }
                        if(per3 > per2 && per3 > per4)
                        {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per2 > per4)
                            {
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per4 > per3 && per4 > per2)
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per2 > per1 && per2 > per3 && per2 > per4)
                    {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                        if(per1 > per3 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per4)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per4 > per1)
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }

                        }
                        if(per4 > per3 && per4 > per1)
                        {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3>per1)
                            {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per3 > per1 && per3 > per2 && per3 > per4)
                    {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                        if(per1 > per2 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per2 > per4)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1 > per4)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per4 > per1 && per4 > per2 )
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per1>per2)
                            {
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                    if(per4 > per1 && per4 > per3 && per4 > per2)
                    {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                        if(per1 > per3 && per1 > per2)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per2)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per1 > per2)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per3)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1>per3)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                }
                else 
                {
                    float per1=(100*day1)/28;
                    float per2=(100*day2)/28;
                    float per3=(100*day3)/28;
                    float per4=(100*day4)/28;
                    if(per1 > per2 && per1 > per3 && per1 > per4)
                    {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                        if(per2 > per3 && per2 > per4)
                        {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl; 
                            }
                        }
                        if(per3 > per2 && per3 > per4)
                        {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per2 > per4)
                            {
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                            }
                            else 
                            {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl; 
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per4 > per3 && per4 > per2)
                        {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per2 > per1 && per2 > per3 && per2 > per4)
                    {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                        if(per1 > per3 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per4)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per4)
                        {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per4 > per1)
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }

                        }
                        if(per4 > per3 && per4 > per1)
                        {
                               cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per3>per1)
                            {
                               cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                    }
                    if(per3 > per1 && per3 > per2 && per3 > per4)
                    {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                        if(per1 > per2 && per1 > per4)
                        {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per2 > per4)
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per4)
                        {
                            cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1 > per4)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per4 > per1 && per4 > per2 )
                        {
                            cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                            if(per1>per2)
                            {
                               cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                               cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl; 
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }
                    if(per4 > per1 && per4 > per3 && per4 > per2)
                    {
                        cout<<"student name:" << name4<<"\t" << "monthly attendance percentage:"<< per4<<endl;
                        if(per1 > per3 && per1 > per2)
                        {
                            cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            if(per3 > per2)
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                        }
                        if(per3 > per1 && per3 > per2)
                        {
                            cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            if(per1 > per2)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                        if(per2 > per1 && per2 > per3)
                        {
                            cout<<"student name:" << name2<<"\t" << "monthly attendance percentage:"<< per2<<endl;
                            if(per1>per3)
                            {
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                            }
                            else 
                            {
                                cout<<"student name:" << name3<<"\t" << "monthly attendance percentage:"<< per3<<endl;
                                cout<<"student name:" << name1<<"\t" << "monthly attendance percentage:"<< per1<<endl;
                            }
                        }
                    }//end of attendance status.
                }
            }
            cout<<"you are in user option:";
            cout<<"main menu > teacher:"<<endl;
            cout<<"1.view student record:"<<endl;
            cout<<"2.view atttendance status:"<<endl;
            cout<<"3.display result"<<endl;
            cout<<"4.Generate student report:"<<endl;
            cout<<"5.change password:"<<endl;
            cout<<"yor option";
            cin >> num;
            int eng1=90,eng2=88 ,eng3=85,eng4=90;
            int math1=100,math2=90,math3=88,math4=80;
            int phy1=84,phy2=33,phy3=70,phy4=78;
            int urdu1=90,urdu2=80,urdu3=77,urdu4=77;
            int com1orchem1=70,com2orchem2=55,com3orchem3=65,com4orchem4=71;
            int total1=eng1+math1+phy1+urdu1+com1orchem1;
            int total2=eng2+math2+phy2+urdu2+com2orchem2;
            int total3=eng3+math3+phy3+urdu3+com3orchem3;
            int total4=eng4+math4+phy4+urdu4+com4orchem4;
            if(num == 3)//display result.
            {
                
                cout<< "student name:" << name1 << "marks is equal to:" << total1<<endl;
                cout<< "student name:" << name2 << "marks is equal to:" << total2<<endl;
                cout<< "student name:" << name3 << "marks is equal to:" << total3<<endl;
                cout<< "student name:" << name4 << "marks is equal to:" << total4<<endl;
            }
            cout<<"you are in user option:";
            cout<<"main menu > teacher:"<<endl;
            cout<<"1.view student record:"<<endl;
            cout<<"2.view atttendance status:"<<endl;
            cout<<"3.display result"<<endl;
            cout<<"4.Generate student report:"<<endl;
            cout<<"5.change password:"<<endl;
            cout<<"yor option";
            cin >> num;
            if(num == 4) // this option will display comment on result.
            {
                if(total1 >= 420)
                {
                    cout<<"student one perform excellent:"<<endl;
                }
                else if(total1 >= 360 && total1 < 420)
                {
                    cout<<"student one perfrom great:"<<endl;
                }
                else if(total1 >= 300 && total1 < 360)
                {
                    cout<<"student one perform nice"<<endl;
                }
                else 
                {
                    cout<<"student one donot perform well please work hard:"<<endl;
                }
                if(total2 >= 420)
                {
                    cout<<"student two perform excellent:"<<endl;
                }
                else if(total2 >= 360 && total2 < 420)
                {
                    cout<<"student two perfrom great:"<<endl;
                }
                else if(total2 >= 300 && total2 < 360)
                {
                    cout<<"student two perform nice"<<endl;
                }
                else 
                {
                    cout<<"student two do not perform well please work hard:"<<endl;
                }
                if(total3 >= 420)
                {
                    cout<<"student three perform excellent:"<<endl;
                }
                else if(total3 >= 360 && total3 < 420)
                {
                    cout<<"student three perfrom great:"<<endl;
                }
                else if(total3 >= 300 && total3 < 360)
                {
                    cout<<"student three perform nice"<<endl;
                }
                else 
                {
                    cout<<"student three do not perform well please work hard:"<<endl;
                }
                if(total4 >= 420)
                {
                    cout<<"student four perform excellent:"<<endl;
                }
                else if(total4 >= 360 && total4 < 420)
                {
                    cout<<"student four perfrom great:"<<endl;
                }
                else if(total4 >= 300 && total4 < 360)
                {
                    cout<<"student four perform nice"<<endl;
                }
                else 
                {
                    cout<<"student four do not perform well please work hard:"<<endl;
                }
            }
            cout<<"you are in user option:";
            cout<<"main menu > teacher:"<<endl;
            cout<<"1.view student record:"<<endl;
            cout<<"2.view atttendance status:"<<endl;
            cout<<"3.display result"<<endl;
            cout<<"4.Generate student report:"<<endl;
            cout<<"5.change password:"<<endl;
            cout<<"yor option";
            cin >> num;
            if(num == 5)//change use password.
            {
                cout<<"enter forget if you forget or want to update your password:"<<endl;
                cin>>upassword;
                if(upassword=="forget" || upassword=="update")
                {
                    int phonenum;
                    cout<<"enter phone number:"<<endl;
                    cin >> phonenum;
                    int newpass;
                    cout<<"enter new password:";
                    cin>>newpass;
                    cout<<"you are password has been updated;"<<endl;

                }
            }
        }
        else 
        {
            cout<<"wrong user name or password try again:"<<endl;
        }
        cout<<"enter user name:"<<endl;
        cin>>user;
        cout<<"enter password:"<<endl;
        cin>> password;
        string sname;
        string spassword;
        cout<<"enter login name:"<<endl;
        cin>>sname;
        cout<<"enter login password:"<<endl;
        cin>>spassword;
        if(user == sname && password == spassword)//user for student.
        {
            cout<<"main menu>user "<<endl;
            cout<<"1.change password"<<endl;
            cout<<"2.check  result"<<endl;
            cout<<"3.check notice"<<endl;
            cout<<"4.check subject:"<<endl;
            cout<<"5.fee challen"<<endl;
            cout<<"6.personal information"<<endl;
            cout<<"your option"<<endl;
            cin>>num;
            if(num == 1)//password change option.
            {
                cout<<"main menu > change password:"<<endl;
                string uspassword; //user password
                cout<<"enter forget or update if you want to change your password:"<<endl;
                cin >> uspassword;//for new password
                if(uspassword == "forget" || uspassword == "update")
                {
                    int usernum;
                    cout<<"enter phone number:"<<endl;
                    cin >> usernum;
                    int newpass;
                    cout<<"enter you are new password:"<<endl;
                    cin >> usernum;
                    cout<<"password has been updated:"<<endl;
                }
                
            }
            else 
            {
                cout<<" please you cannot remove step:"<<endl;
            }
            cout<<"main menu>user "<<endl;
            cout<<"1.change password"<<endl;
            cout<<"2.check  result"<<endl;
            cout<<"3.check notice"<<endl;
            cout<<"4.check subject:"<<endl;
            cout<<"5.fee challen"<<endl;
            cout<<"6.personal information"<<endl;
            cout<<"your option"<<endl;
            cin>>num;
            if(num == 2)//check result.
            {
                cout<<"main menu > check result:"<<endl;
                name1="hussain";
                roll_number1=126;
                marks1=400;
                float aggregate_1=(400*100)/500;
                string remarks="good";
                cout<<"name:"<<" "<<name1<<" "<<"roll number:" <<roll_number1<<" "<<"aggregate:"<<aggregate_1<<" "<<"marks:"<<marks1<<" "<<"remarks:"<<remarks<<endl;
            }
            else 
            {
                cout<<"sorry! you cannot remove step enter value in sequence:"<<endl;
            }
            cout<<"main menu>user "<<endl;
            cout<<"1.change password"<<endl;
            cout<<"2.check  result"<<endl;
            cout<<"3.check notice"<<endl;
            cout<<"4.check subject:"<<endl;
            cout<<"5.fee challen"<<endl;
            cout<<"6.personal information"<<endl;
            cout<<"your option"<<endl;
            cin>>num;
            if(num == 3)//check notice.
            {
                string user1;
                string passw;
                string pass;
                cout<<"enter user name:"<<endl;
                cin>>name1;
                cout<<"enter password:"<<endl;
                cin>>pass;
                cout<<"enter login name:"<<endl;
                cin>>user1;
                cout<<"enter password:"<<endl;
                cin>>passw;
                if(name1 == user1 && pass == passw )
                cout<<"welcome back student please submit your project on monday thanks:"<<endl;
            }
            else 
            {
                cout<<"sorry! please you cannot remove step: enter value in sequence"<<endl;
            }
            cout<<"main menu>user "<<endl;
            cout<<"1.change password"<<endl;
            cout<<"2.check  result"<<endl;
            cout<<"3.check notice"<<endl;
            cout<<"4.check subject:"<<endl;
            cout<<"5.fee challen"<<endl;
            cout<<"6.personal information"<<endl;
            cout<<"your option"<<endl;
            cin>>num;
            if(num == 4)
            {
                cout<<"main menu > check subject:"<<endl;
                name1="ali";
                string subject1="math";
                string subject2="english";
                string subject3="computer";
                cout<<"name"<< name1<<"  "<<"subject name:"<<" "<< subject1 <<" " << subject2 << " " << " " << subject3 << endl; 
            }
            else 
            {
                cout<<"sorry!"<<endl;
            }
            cout<<"main menu>user "<<endl;
            cout<<"1.change password"<<endl;
            cout<<"2.check  result"<<endl;
            cout<<"3.check notice"<<endl;
            cout<<"4.check subject:"<<endl;
            cout<<"5.fee challen"<<endl;
            cout<<"6.personal information"<<endl;
            cout<<"your option"<<endl;
            cin>>num;
            if(num == 5)
            {
                cout<<"main menu>fee challen"<<endl;
                string bank1;
                cout<<"enter bank account:";
                cin >> bank1;
                string bankid;
                cout<<"enter bank id:"<<endl;
                cin >> bankid;
                if(bank1 == bankid)
                {
                    cout<<"fee has been submitted:"<<endl;
                }
                else 
                {
                    cout<<"sorry! please submit your fee"<<endl;
                }
            }
            cout<<"main menu>user "<<endl;
            cout<<"1.change password"<<endl;
            cout<<"2.check  result"<<endl;
            cout<<"3.check notice"<<endl;
            cout<<"4.check subject:"<<endl;
            cout<<"5.fee challen"<<endl;
            cout<<"6.personal information"<<endl;
            cout<<"your option"<<endl;
            cin>>num;
            if(num == 6)
            {
                cout<<"main menu > personal information:"<<endl;
                name1="ali";
                fname1="m.iftikhar";
                section1="A";
                course1="fsc";
                roll_number1=126;
                CNIC1=4521;
                cout<<"  name:  "  <<" father name "   <<"  section  "    <<" couser "      <<" roll number "     <<" cnin "<<endl;
                cout<<name1<<"    "<<    fname1<<"    "<<  section1<<"   "<<  course1<<"   "<<  roll_number1<<"  "<<  CNIC1 <<endl;
            }
            else 
            {
                cout<<"sorry! please fellow the step:"<<endl;
            }   
        }//end of student user.
    }//end of user option.

}//end of main