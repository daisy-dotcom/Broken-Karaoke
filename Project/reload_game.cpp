#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include "play_game.h"
using namespace std;

// Checks if there is a saved game to continue

int reload_game(){

        ifstream fin;

        fin.open("save.txt");

        if (fin.fail()){
                cout << "       There is no previously saved game."
                        " 1. Start New Game     3. Exit " << endl;
                return -1;
        }

        else{
                string input, played;
                int size, genre, round, points;
                int line_num = 0;

                while ( getline(fin,input) ){
                        ++line_num;

                        switch(line_num){

                                case 1 :
                                size = stoi(input);
                                break;

                                case 2 :
                                genre = stoi(input);
                                break;

                                case 3 :
                                round = stoi(input);
                                break;

                                case 4 :
                                points = stoi(input);
                                break;

                                case 5 :
				                        played = input;
                                break;


                        }

                }

                fin.close();

                        int *a = new int [size];

                        stringstream songs;

                        songs << played;

                        string value;

                        int i = 0;

                        while ( songs >> value ){
                                a[i] = stoi(value);
                                i++;
                        }

                play_game(a, size, genre, round, points);

                delete [] a;
                return 0;
        }

}
