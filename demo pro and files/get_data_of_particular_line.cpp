#include <bits/stdc++.h>

using namespace std;
//FUNCTION FOR PRINTING THE ARRAY OF STRING ---------------------------------------------------------------------------------------------------------------------

void print_array_of_string(string* arr,int no_of_words){
    //# SIZE TOH GALT DE RAHA HAI
    //  int size = sizeof(arr) / sizeof(arr[0]);

    // cout<<"size of string array is "<<size<<endl;//printing size of string array

    //-----------------------

        for (int i = 0 ; i < no_of_words ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}





//STRING FROM LINE FUNCTION---------------------------------------------------------------------------------------------------------------------   
string* get_array_of_string(string line,int no_of_words){

    string* words = new string[no_of_words];
    int k = 0 ;
    for (int i = 0 ; i < no_of_words ; i++){
        for(int j=0 ; j < line.size() ; j++){
            if (line[k] == ' '){
                k++ ;
                break ; //to get the next word
            }
            else if (k<line.length()){
                words[i] += line[k] ;
                k++;
            }
    }
    
}
    return words ;
}











///NO OF SPACES IN A LINE FUNCTION---------------------------------------------------------------------------------------------------------------------
int get_no_of_words_in_line(string word){
  
    int count = 0 ;
    for (int i = 0 ; i < word.size() ; i++){
        if (word[i] == ' '){
            count++ ;
        }
    }
    return count ;
}


//-----------------------------------------------------------------------------------------------------------------------------------------------




string* get_words_of_particular_line(string filename , int line_no){
    fstream in ;
    in.open(filename,ios::in);
    string line ;
    int i = 0 ;
    while (getline(in,line)){
        i++ ;
        if (i == line_no){
            break ;
        }
    }
    cout<<"the line no is "<<i<<endl; //just for checking that the line no is correct
    cout<<"the line is "<<line<<endl;// just for checking that the line is correct
    
    int no_of_words = get_no_of_words_in_line(line) ;  //for getting no of words in a line

    cout<<"no of words are "<<no_of_words<<endl;

    //real work starts here
    string* words = new string[no_of_words+1];
    int j = 0 ;
    int k = 0 ;
    for (int i = 0 ; i < no_of_words ; i++){
        for(int j=0 ; j < line.size() ; j++){
            if (line[j] == ' '){
                k++ ;
                break ; //to get the next word
            }
            else{
                words[i] += line[k] ;
                k++;
            }
    }
    cout<<words[i]<<" ";
}
    in.close();
    return words ;
}



int main() {
    string  filename = "demofile.txt" ;
    string* words = get_words_of_particular_line(filename,2);

    return 0 ;
} 
