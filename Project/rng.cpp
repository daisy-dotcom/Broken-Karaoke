#include<ctime>
#include<cstdlib>

int random_number_generator (){
        srand(time(NULL));

        return ( rand() % 8 ) + 1;
}
