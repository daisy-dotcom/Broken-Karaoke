#include<fstream>
using namespace std;
void save_game(int a[], int size, int genre, int round, int points){

        ofstream fout;

        fout.open("save.txt");

        fout << size << endl;
        fout << genre << endl;
        fout << round << endl;
        fout << points << endl;

        for ( int i = 0 ; i < round-1 ; i++){
                fout << a[i] << " ";
        }

        fout << endl;

        fout.close();

}
