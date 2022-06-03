#include <bits/stdc++.h>

using namespace std;

class Hostel{
    private:
        string hostel_block ;
        int rooms_filled ;
        int rooms_available ;

    public:
        Hostel(string hostel_block){
            this->hostel_block = hostel_block ;
        }

        ///setter methods---------------------------------------------------------------------------------

        void set_rooms_filled(int rooms_filled){
            this->rooms_filled = rooms_filled ;
        }
        void set_rooms_available (int rooms_available){
            this->rooms_available = rooms_available ;
        }

        ///getter methods---------------------------------------------------------------------------------

        string get_hostel_block(){
            return hostel_block ;
        }
        int get_rooms_filled(){
            return rooms_filled ;
        }
        int get_rooms_available(){
            return rooms_available ;
        }

        ///display methods---------------------------------------------------------------------------------
        //                                      ** work to be done here ** ------------------------------



        // ~Hostel();
        

};

class Hostel_Allot{
    private:
    int serial_no ;
    int student_id ;
    string stundent_name ;
    int room_no ;
    public:
    Hostel_Allot(int serial_no){
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
        this->stundent_name = stundent_name ;
    }
    void set_room_no(int room_no){
        this->room_no = room_no ;
    }
    //getter methods
    int get_serial_no(){
        return serial_no ;
    }
    int get_student_id(){
        return student_id ;
    }
    string get_student_name(){
        return stundent_name ;
    }
    int get_room_no(){
        return room_no ;
    }

//call destructor
    // ~Hostel_Allot();


};