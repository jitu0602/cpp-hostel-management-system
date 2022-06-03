#include <bits/stdc++.h>

using namespace std;


int  get_data_line_no(string filename, string word){
    fstream in ;
    in.open(filename,ios::in);
    string line ;
    int i = 0 ;
    while (getline(in,line)){
        i++ ;
        if (line.find(word) != string::npos){
            return i ; // line no found here 
        }
    }
    in.close();
    return 0 ; // if word is not found
}


int main(){
    string filename = "demofile.txt";
    string word = "dinesh";
    int line_no = get_data_line_no(filename,word);
    cout<<"line no is "<<line_no<<endl;
    return 0 ;

}