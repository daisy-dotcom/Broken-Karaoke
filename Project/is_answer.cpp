#include<string>
#include<cctype>
using namespace std;
// Convert answer give by player to lowercase 
// and compare to the actual answer

bool is_answer(string answer , string guess){

        string guess_tolower = "";

        for ( int i = 0; i < guess.length(); ++i ){
                if ( isupper(guess[i]) ){
                        guess_tolower += tolower(guess[i]);
                }

                else {
                        guess_tolower += guess[i];
                }
        }

        if ( guess_tolower == answer ){
                return true;
        }

        else{
                return false;
        }
}
