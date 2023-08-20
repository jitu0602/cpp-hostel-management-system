#include<bits/stdc++.h>
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

    cout<<"\t\t\tHey! Welcome to the hostel  management system"<<endl;
    mainMenu:
       
        cout<<"\t\t\t*********Main Menu************"<<endl;
        cout<<"\t\t\t\tPlease select your choice"<<endl;
        cout<<"\t\t\t\t1. Administrator login "<<endl;
        cout<<"\t\t\t\t2. Make a complain"<<endl;
        //cout<<"\t\t\t\t2. Administrator login "<<endl;
        cout<<"\t\t\t\t3. exit"<<endl<<"\t\t\t\t";
    
        int choice;
        cin>>choice;
        switch (choice){
            case 1:
                cout<<"\t\t\t\tYou have selected administrator login"<<endl;
                admin_login();
                goto mainMenu;
                break;
            case 2:
                //system("clr");
                cout<<"\t\t\t\tYou have selected complain"<<endl<<endl;
                complain_main();
                goto mainMenu;
                break;
            case 3:
                cout<<"\t\t\t\tYou have selected exit"<<endl;
                exit(0);
                break;
            default:
                cout<<"\t\t\tYou have selected wrong choice"<<endl;
                cout<<"\t\t\tPlease select correct choice again "<<endl;
                cout<<endl<<endl<<endl;
                
    }
}