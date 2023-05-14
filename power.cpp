#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>



void print_vector(std::vector <int> &data){

    for(int i = 0; i<data.size(); i++){
        std::cout << data[i] << "\t";
    }
}

void play_game(){
    

    //Random number generation
    int random_number = rand() % 251;
    std::cout<<"\nGame is starting."<<std::endl;
    
    std::cout<<"Random number generated was : "<<random_number<<std::endl;

    //Player's guess print statement
    int player_guess;
    std::cout << "\nGuess a number between 0 to 250.\n";

    //Vector for storing answers
    std::vector <int> players_guesses_vector;


    while(true){
        

        //Storing player's guess
        std::cin >> player_guess;  
        players_guesses_vector.push_back(player_guess);


        if(player_guess == random_number){
            std::cout << "\nCongratulations you won !\n";
            std::cout << "You gussed the answer in "<< players_guesses_vector.size() << " tries.\n";
            std::cout << "Your guess history looks like : ";
            print_vector( players_guesses_vector );
            std::cout << "\n";
            break;
        }
        else if(player_guess < random_number){
            std::cout << "\nToo low.\n";
        }
        else{
            std::cout << "\nToo high.\n";
        }
    }


    
};

int main(){
    
    //create perfect random number
    //seed random number generator using srand
    srand(time(NULL)); 
    
    int menu_choice;
    do{
        std::cout<<"1. Play Game."<<std::endl;
        std::cout<<"2. Quit Game."<<std::endl;
        std::cin>>menu_choice;

        switch(menu_choice){
            case 1:
                play_game();
                break;
            case 2:
                std::cout<<"\nbuebue\n"<<std::endl;
                break;
        
        }
    }while(menu_choice != 2);

    return 0;
}