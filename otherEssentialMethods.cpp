#include <bits/stdc++.h>
#include "student.cpp"
#include "complaint.cpp"
#include "mess.cpp"
#include "filemethods.cpp"
#include "hostel.cpp"


//all files variables
string h1 = "hostel_aravali.txt";
string h2 = "hostel_everest.txt";
string h3 = "hostel_sayadri.txt";

string m1 = "mess_veg.txt";
string m2 = "mess_nonveg.txt";

string cmp = "complaint.txt";






//All functions used -------------------------------------
//complain methods
Complaint create_complaint_obj();
void write_complaint_to_file(Complaint c);
void complain_main();


//admin methods
void admin_login();
void admin_switch_case();

//hostel methods
void allot_hostel_switch_case();
void allot_hostel_fun(string hostel_filename);
Hostel_Allot create_hostel_obj(string hostel_filename);
void write_hostel_to_file(Hostel_Allot h,string hostel_filename);

//mess methods
void allot_mess_switch_case();
void allot_mess_fun(string mess_filename);
Mess_Allot create_mess_obj(string mess_filename);
void write_mess_to_file(Mess_Allot m,string mess_filename);


//see hostel methods
void see_hostel_switch_case();

//see mees methods
void see_mess_switch_case();


//complaint methods

Complaint create_complaint_obj(){
    int complaint_no ;
    string student_name;
    string complaint_text;
    complaint_no = get_no_of_lines(cmp) + 1 ;
    Complaint c(complaint_no);
    cout<<"\t\t\t*********Complaint************"<<endl;
    cout<<"\t\t\tenter your name and roll no."<<endl<<"\t\t\t\t" ;
  
    cin.ignore();
    getline(cin,student_name);
    c.set_student_name(student_name+"->");
    
    cout<<"\t\t\tenter complaint text : "<<endl<<"\t\t\t\t";
    //multiple words input 
    cin.ignore();
    getline(cin,complaint_text);
    c.set_complaint_text(complaint_text);
    cout<<"complaint added successfully"<<endl<<endl <<endl;
    return c ;
}


void write_complaint(Complaint complaint){
    string a = "complaint.txt";
    fstream out ;
    out.open(a.c_str(),ios::app);
    out<<complaint.get_complaint_no()<<" "<<complaint.get_student_name()<<":-> "<<complaint.get_complaint_text()<<endl;
    out.close();
    
}

void complain_main(){   
  Complaint c = create_complaint_obj();
    write_complaint(c);

}

//complaint methods complete-----------------------------------------------------











//admin methods --------------------------
void admin_login(){
    int admin_id;
    string admin_password;
    cout<<"\t\t\t\tenter admin id : ";
    cin>>admin_id;
    cout<<"\t\t\t\tenter admin password : ";
    cin>>admin_password;
    if(admin_id == 1 && admin_password == "admin"){
        cout<<"\t\t\twelcome admin"<<endl;
        // now the admin login is done decdide how to proceed further **work to be done ** -------------
        admin_switch_case();

    }else{
        cout<<"\t\t\tinvalid admin id or password"<<endl;

    }
    return ;
}


void admin_switch_case(){
    admin_menu:
    cout<<"\t\t\t\t----------Admin Menu----------"<<endl;
    cout<<"\t\t\t\t1.see all complains  "<<endl;
    cout<<"\t\t\t\t2.allot hostel to student "<<endl;
    cout<<"\t\t\t\t3.allot mess to student "<<endl;
    cout<<"\t\t\t\t4.See list of students in particular hostel "<<endl;
    cout<<"\t\t\t\t5.see list of students in particular mess "<<endl;
    cout<<"\t\t\t\t6.exit"<<endl;
    cout<<"\t\t\t\t7.go to main menu"<<endl<<"\t\t\t\t";


    int choice;
    cin.ignore();
    cin.clear();
    fflush(stdin);
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"\t\t\t\tyou have selected see all complains"<<endl;
            cout<<"no.| Std name | Complaint body"<<endl<<endl;
            printFile(cmp);
            cout<<endl<<endl;
            goto admin_menu;
            break;

        case 2:
            cout<<"\t\t\t\tyou have selected allot hostel to student"<<endl;
            allot_hostel_switch_case();
            cout<<endl<<endl;
            goto admin_menu;
            break;
        
        case 3:
            cout<<"\t\t\t\tyou have selected allot mess to student"<<endl;
            allot_mess_switch_case();
            cout<<endl<<endl;
            goto admin_menu;
            break;

        case 4:
            cout<<"\t\t\t\tyou have selected see list of students in particular hostel"<<endl;
            see_hostel_switch_case();
            goto admin_menu;
            break;

        case 5:
            cout<<"\t\t\t\tyou have selected see list of students in particular mess"<<endl;
            see_mess_switch_case();
            goto admin_menu;
            break;

        case 6 :
            cout<<"\t\t\t\tyou have selected exit"<<endl;
            exit(0);
            break;
        
        case 7:
            cout<<"\t\t\t\tyou have selected go to main menu"<<endl<<endl;
            break;

        default:
            cout<<"\t\t\t\tinvalid choice Please try again"<<endl;
            goto admin_menu;
            break;
            
    }
}












///allot hostel switch case 
void allot_hostel_switch_case(){
    allot_hostel_switch_case:
    int choice;
    cout<<"select the hostel to allot : "<<endl;
    cout<<"1.aravali"<<endl;
    cout<<"2.everest"<<endl;
    cout<<"3.sayadri"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            allot_hostel_fun(h1);
            cout<<"hostel allotted successfully"<<endl;
            break;
        case 2:
            allot_hostel_fun(h2);
            cout<<"hostel allotted successfully"<<endl;
            break;
        case 3:
            allot_hostel_fun(h3);
            cout<<"hostel allotted successfully"<<endl;
            break;
        default:
            cout<<"invalid choice please try again"<<endl<<endl;
            goto allot_hostel_switch_case;
            break;
    }

}

//hostel allotment
void allot_hostel_fun(string hostel_filename ){
    Hostel_Allot h = create_hostel_obj(hostel_filename);
    write_hostel_to_file(h,hostel_filename);

}
Hostel_Allot create_hostel_obj(string hostel_filename){
    //declaring variables
    int serial_no;
    int  student_id;
    string student_name;
    int room_no;

    //getting values
    serial_no = get_no_of_lines(hostel_filename) + 1 ;
    cout<<"enter student id : "<<endl;
    cin>>student_id;
    cout<<"enter student name : "<<endl;
    cin>>student_name;
    room_no=serial_no;

    //creating object
    Hostel_Allot  h(serial_no) ;
    h.set_student_id(student_id);
    h.set_student_name(student_name);
    h.set_room_no(room_no);

    // //writing to file
   return h ;
 
    

}

void write_hostel_to_file(Hostel_Allot h,string hostel_filename){
    fstream out ;
    out.open(hostel_filename.c_str(),ios::app);
    out<<h.get_serial_no()<<" "<<h.get_student_id()<<" "<<h.get_student_name()<<" "<<h.get_room_no()<<endl;
    out.close();
}





//allot mess ***************************************************************
//allot mess switch case

void allot_mess_switch_case(){
    allot_mess_switch_case:
    int choice;
    cout<<"select the mess to allot : "<<endl;
    cout<<"1.allot veg mess "<<endl;
    cout<<"2.allot non-veg mess"<<endl;
    cout<<"3.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            allot_mess_fun(m1);
            cout<<"mess allotted successfully"<<endl<<endl;
            break;
        case 2:
            allot_mess_fun(m2);
            cout<<"mess allotted successfully"<<endl<<endl;
            break;
        case 3:
            break;
        default:
            cout<<"invalid choice please try again"<<endl<<endl;
            goto allot_mess_switch_case;
            break;
    }
}

void allot_mess_fun(string mess_filename){
    Mess_Allot m = create_mess_obj(mess_filename);
    write_mess_to_file(m,mess_filename);
}

Mess_Allot create_mess_obj(string mess_filename){
    //declaring variables
    int serial_no;
    int  student_id;
    string student_name;
    int mess_roll_no;

    //getting values
    serial_no = get_no_of_lines(mess_filename) + 1 ;
    cout<<"enter student id : "<<endl;
    cin>>student_id;
    cout<<"enter student name : "<<endl;
    cin>>student_name;
    mess_roll_no=serial_no;

    //creating object
    Mess_Allot  m(serial_no) ;
    m.set_student_id(student_id);
    m.set_student_name(student_name);
    m.set_mess_roll_no(mess_roll_no);

    // //writing to file
   return m ;
 
    

}

void write_mess_to_file(Mess_Allot m,string mess_filename){
    fstream out ;
    out.open(mess_filename.c_str(),ios::app);
    out<<m.get_serial_no()<<" "<<m.get_student_id()<<" "<<m.get_student_name()<<" "<<m.get_mess_roll_no()<<endl;
    out.close();
}

//mess methods finish--------------------------------------------------------------------------------------




//see aal list of students in particular hostel

void see_hostel_switch_case(){
    see_hostel_switch_case:
    int choice;
    cout<<"select the hostel to see : "<<endl;
    cout<<"1.aravali"<<endl;
    cout<<"2.everest"<<endl;
    cout<<"3.sayadri"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"no.|Std id |Std name |room no "<<endl<<endl;
            printFile(h1);
            cout<<endl<<endl;
            break;
        case 2:
            cout<<"no.|Std id |Std name |room no "<<endl<<endl;
            printFile(h2);
            cout<<endl<<endl;
            break;
        case 3:
            cout<<"no.|Std id |Std name |room no "<<endl<<endl;
            printFile(h3);
            cout<<endl<<endl;
            break;
        default:
            cout<<"invalid choice please try again"<<endl<<endl;
            break;
    }
}


//see list of students in particular mess

void see_mess_switch_case(){
    see_mess_switch_case:
    int choice;
    cout<<"select the mess to see : "<<endl;
    cout<<"1.veg mess"<<endl;
    cout<<"2.non-veg mess"<<endl;
    cout<<"3.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"no.|Std id |Std name |mess.roll.no. "<<endl<<endl;
            printFile(m1);
            cout<<endl<<endl;
            break;
        case 2:
            cout<<"no.|Std id |Std name |mess.roll.no. "<<endl<<endl;
            printFile(m2);
            cout<<endl<<endl;
            break;
        case 3:
            break;
        default:
            cout<<"invalid choice please try again"<<endl;
            break;
    }
}



