#include <bits/stdc++.h>

using namespace std;


//method for printing a file--------------------------------------------------------------------------------------------------------------
void printFile(string fileName){
    ifstream file;
    file.open(fileName);
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
}




// NO OF WORDS FUNCTION -----------------------------------------------------------------------------------------------------------------
int get_no_of_words(string file_name){
    int no_of_words = 0 ;
    fstream file ;
    file.open(file_name,ios::in);
    string word ;
    while (file >> word ){
        no_of_words++ ;
    }
    file.close();
    return no_of_words ;
}




//NO OF LINES FUNCTION -----------------------------------------------------------------------------------------------------------------
int get_no_of_lines(string file_name)
{
 
	string line;   // To read each line from code
	int count=0;    // Variable to keep count of each line
	
	ifstream mFile (file_name);   
	
	if(mFile.is_open()) 
	{
		while(mFile.peek()!=EOF)
		{
			getline(mFile, line);
			count++;
		}
		mFile.close();
	    return count ;
	}
	else
		cout<<"Couldn't open the file\n";
 
	return 0;
}




//WORD AT INDEX FUNCTION---------------------------------------------------------------------------------------------------------------------
 string get_word_at_index(string file_name , int index){
    int no_of_words = 0 ;
    fstream file ;
    file.open(file_name,ios::in);
    string word ;
    while (file >> word ){
        no_of_words++ ;
    }
    file.close();
    if (index > no_of_words){
        return "index out of range" ;
    }
    file.open(file_name,ios::in);
    int i = 0 ;
    string word_at_index ;
    while (file >> word ){
        i++ ;
        if (i == index){
            word_at_index = word ;
        }
    }
    file.close();
    return word_at_index ;
}




//GET DATA LINE NO FUNCTION---------------------------------------------------------------------------------------------------------------------

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



// ---------------------------------* BE READY FOR STRING CONVERTER METHODS * ---------------------------------------------------------------------------------------------------------------------





///NO OF SPACES IN A LINE FUNCTION---------------------------------------------------------------------------------------------------------------------
int get_no_of_words_in_line(string line){
  
    int count = 0 ;
    for (int i = 0 ; i < line.size() ; i++){
        if (line[i] == ' '){
            count++ ;
        }
    }
    return count ;
}


//-----------------------------------------------------------------------------------------------------------------------------------------------

//FUNCTION FOR PRINTING THE ARRAY OF STRING --------------------------------------------------------------------------------------------------------------------


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





///              ***STRING CONVERTER METHODS ENDS HERE *** --------------------------------------------------------------------------------------------------------------------- 











// //MAIN FUNCTION---------------------------------------------------------------------------------------------------------------------
// int main(){

//     // no of lines in main fuction ------------------------------------------------------------------------------------- 
//     string file_name = "demo pro and files/demofile.txt" ;
//     int no_of_lines = get_no_of_lines(file_name);
//     cout<<"no of lines are:"<<no_of_lines<<endl;


//     //no of words in main fuction -------------------------------------------------------------------------------------
//     int no_of_words = get_no_of_words(file_name);
//     cout<<"no of words are " << no_of_words <<endl;

//     // word at index in main function -------------------------------------------------------------------------------------
//     int index = 6  ;
//     string word_at_index = get_word_at_index(file_name , index);
//     cout<<"word at index "<<index<<" is "<<word_at_index<<endl;


//     // get data line no in main function -------------------------------------------------------------------------------------
//       string word = "dinesh";
//     int line_no = get_data_line_no(file_name,word);
//     cout<<"line no is "<<line_no<<endl;


    
//     return 0 ;

// }
