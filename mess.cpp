#include <bits/stdc++.h>

using namespace std;

class Mess{
    private:
    string mess_block ;
    int strength ;

    public:
    Mess(string mess_block){
    //constructor---------------------------------------------------------------------------------
        this->mess_block = mess_block ;
    }

    ///setter methods---------------------------------------------------------------------------------

    void set_strength(int strength){
        this->strength = strength ;
    }

    ///getter methods---------------------------------------------------------------------------------

    int get_strength(){
        return strength ;
    }

    ///display methods---------------------------------------------------------------------------------
    //                                      ** work to be done here ** --------------------------------


};


class Mess_Allot{
    private:
    int serial_no ;
    int student_id ;
    string student_name ;
    int mess_roll_no ;
    public:
    Mess_Allot(int serial_no){
        this->serial_no = serial_no ;
    }
    //setter methods
    void set_serial_no(int serial_no){
        this->serial_no = serial_no ;
    }
    void set_student_id(int student_id){
        this->student_id = student_id ;
    }
    void set_student_name(string stundent_name){
        this->student_name = stundent_name ;
    }
    void set_mess_roll_no(int mess_roll_no){
        this->mess_roll_no = mess_roll_no ;
    }
    //getter methods
    int get_serial_no(){
        return serial_no ;
    }
    int get_student_id(){
        return student_id ;
    }
    string get_student_name(){
        return student_name ;
    }
    int get_mess_roll_no(){
        return mess_roll_no ;
    }

};
