#include<iostream>
#include "reload_game.h"
#include "play_game.h"
#include<cstdlib>
#include<string>
using namespace std;


// Player chooses game settings
void main_menu(){

        int choice, size, round, points;

        cout << "        ****  *    *  *****  *****  *****     *****  *   *  ***** " << endl;
        cout << "       *      *    *  *      *      *           *    *   *  *     " << endl;
        cout << "       *      *    *  *****  *****  *****       *    *****  ***** " << endl;
        cout << "       * ***  *    *  *          *      *       *    *   *  *     " << endl;
        cout << "       *   *  *    *  *          *      *       *    *   *  *     " << endl;
        cout << "        ***    ****   *****  *****  *****       *    *   *  ***** " << endl;

        cout << "                       *****  *****  *     *   ****                " << endl;
        cout << "                       *      *   *  **    *  *                    " << endl;
        cout << "                       *****  *   *  *  *  *  *                    " << endl;
        cout << "                           *  *   *  *    **  * ***                " << endl;
        cout << "                           *  *   *  *     *  *   *                " << endl;
        cout << "                       *****  *****  *     *   ***                 " << endl;

        cout <<"        1. New Game             2. Resume               3. Exit " << endl;

        cin >> choice;

        while( choice != 3 ){

                if ( choice == 1 ){

                        system("rm -r save.txt");

                        cout <<  "      Choose a level of difficulty\n"
                                "       1. Beginner             2. Intermediate         3. Expert";

                        cout << endl;
                        int level;
                        cin >> level;

                        while ( level < 0 || level > 3 ){

                                cout << "       Invalid Input! Try again" << endl;
                                cin >> level;

                        }

                        cout << "      Choose a genre\n"
                                "         1. Pop\n"
                                "         2. R&B\n"
                                "         3. Hip Hop/Rap\n"
                                "         4. Rock\n";

                        int genre;
                        cin >> genre;

                        while ( genre < 0 || genre > 4) {
                          cout << "       Invalid Input! Try again" << endl;
                          cin >> genre;
                        }



                                round = 1;
                                switch(level){

                                        case 1 :
                                        size = 2;
                                        break;

                                        case 2 :
                                        size = 4;
                                        break;

                                        case 3 :
                                        size = 8;
                                        break;
                                }

                                int *a = new int [size];
                                points = 0;
                                play_game(a, size, genre, round, points);

				delete [] a;

                                return;
                }

                else if ( choice == 2 ){

                        if (reload_game() == -1){
                                cin >> choice;
                        }

                        else{
                                return;
                        }
                }

                else {
                        cout << "       Invalid Input! Try Again." << endl;
                        cin >> choice;
                }

        }
}
