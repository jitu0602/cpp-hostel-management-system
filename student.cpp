#include <bits/stdc++.h>

using namespace std;



class student
{
private:
    int student_id;
    string student_name ;
    string hostel_block="none" ;
    int room_no;
    string mess_block = "none";
public:

    //consturctors -------------------------------------------------------------------------------
    student(int student_id){
       this->student_id = student_id;
   }
    //----------------------------------------------------------------------------------------------

    // setter methods -------------------------------------------------------------------------------
    void set_student_name(string name){
        student_name = name;
    }
    void set_hostel_block(string block){
        hostel_block = block;
    }
    void set_mess_block(string block){
        mess_block = block;
    }
    void set_room_no(int no){
        room_no = no;
    }


    // getter methods -------------------------------------------------------------------------------
    int get_student_id(){
        return student_id;
    }
    string get_student_name(){
        return student_name;
    }
    string get_hostel_block(){
        return hostel_block;
    }
    int get_room_no(){
        return room_no;
    }

    //display methods -------------------------------------------------------------------------------
    void display_student_details(){
        cout<<"student id : "<<student_id<<endl;
        cout<<"student name : "<<student_name<<endl;
        cout<<"hostel block : "<<hostel_block<<endl;
        cout<<"room no : "<<room_no<<endl;
        cout<<"mess block : "<<mess_block<<endl;
    }

  //distructor -------------------------------------------------------------------------------------
    ~student();
};


