#include<iostream>
#include<string>
#include "struct.h"
#include "save_game.h"
#include "pick_song.h"
#include "is_answer.h"

using namespace std;
// Player can guess the name of the song
void play_game(int a[], int size, int round, int points){


        while ( round <= size ){

                Game_Data song = pick_song(a, size, round);

                string answer ;

                cout << "       Round: " << round << " of " << size << endl;

                cout << "       What is the name of the song ? ";

                cin.ignore();
                getline(cin, answer);

                while ( !(is_answer(song.title, answer)) ){

                                cout << "       Enter H for a hint , "
                                        "C to continue guessing or Q to exit: ";

                                char letter;
                                cin >> letter;

                                while ( letter != 'H' && letter != 'C' && letter != 'Q' ){
                                        cout << "       Invalid Input! Try Again " << endl;
                                        cin >> letter;
                                }

                                if (letter == 'H'){
                                        points -= 3;
                                        cout << "       " << song.hint << endl;
                                }

                                else if (letter == 'Q'){
                                        return;
                                }

                                cout << "       What is the name of the song ? ";

                                cin.ignore();
                                getline(cin,answer);

                }

                cout << "       Correct! (: ++10PTS" << endl;
                points += 10;

                ++round;

                if ( round <= size ){
                        cout << "       Enter S to save game and exit or C to continue: " ;
                        char save;
                        cin >> save;

                        while ( save != 'S' && save != 'C' ){
                                cout << "       Invalid Input! Try Again " << endl;
                                cin >> save;

                        }

                        if (save == 'S'){
                                save_game(a, size, round, points);
                                return;
                        }
                }

                else{
                        cout << "       Congratulations! You've completed the game! " << endl;
                        cout << "       Score: " << points << endl;
                        return;
                }

        }
}
