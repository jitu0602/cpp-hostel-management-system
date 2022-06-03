#include <bits/stdc++.h>
#include "otherEssentialMethods.cpp"

using namespace std;

// // hostel file paths ---------------------------------------------------------------------------------
// string h1 = "hostel_aravali.txt";
// string h2 = "hostel_everest.txt";
// string h3 = "hostel_sayadri.txt";

// //mess file paths -------------------------------------------------------------------------------------
// string m1 = "mess_nonveg.txt";
// string m2 = "mess_veg.txt";

// //complian file paths ---------------------------------------------------------------------------------
// string c1 = "complaint.txt";





int main(){

    cout<<"Hey! Welcome to the hostel  management system"<<endl;
    mainMenu:
       
        cout<<"*********Main Menu************"<<endl;
        cout<<"Please select your choice"<<endl;
        cout<<"1. Make a complain"<<endl;
        cout<<"2. Administrator login "<<endl;
        cout<<"3. exit"<<endl;
        int choice;
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"You have selected complain"<<endl<<endl;
                complain_main();
                goto mainMenu;
                break;
            case 2:
                cout<<"You have selected administrator login"<<endl;
                admin_login();
                goto mainMenu;
                break;
            case 3:
                cout<<"You have selected exit"<<endl;
                exit(0);
                break;
            default:
                cout<<"You have selected wrong choice"<<endl;
                cout<<"Please select correct choice again "<<endl;
                cout<<endl<<endl<<endl;
                
    }
}