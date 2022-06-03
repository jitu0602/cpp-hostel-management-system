#include <bits/stdc++.h>

using namespace std;

class Complaint{
    private:
    int complaint_no;
    string student_name  ;
    string complaint_text  ;

    public:
    Complaint(int complaint_no){
        this->complaint_no = complaint_no ;
    }

    ///setter methods---------------------------------------------------------------------------------
    void set_student_name(string student_name){
        this->student_name = student_name ;
    }
    void set_complaint_text(string complaint_text){
        this->complaint_text = complaint_text ;
    }

    ///getter methods---------------------------------------------------------------------------------
    int get_complaint_no(){
        return complaint_no ;
    }
    string get_complaint_text(){
        return complaint_text ;
    }
    string get_student_name(){
        return student_name ;
    }
};

    


    ///display methods---------------------------------------------------------------------------------
    //                                     it will consist of no display methods --------------------------------





