#include<iostream>
#include<cstdlib>
#include<string>
#include<limits>
#include<ctime>
#include<cctype>
#include"graphics.hpp"
#include"logic.hpp"

int main(){
std::srand(std::time(0));

char play_again_choice;

do{
  
    GameState game_state;
    initialize_game(game_state, "Dictionary.txt");
    char guess;
    while(game_state.tries_left > 1 && game_state.current_display != game_state.secret_word){
        system("clear");
        std::cout << "**** WELCOME TO HANGMAN ****	\n\n\n\n\n";
        draw_hangman(game_state.tries_left,
            game_state.current_display,
            game_state.incorrect_guesses);
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        process_guess(game_state, guess);
    }
    system("clear");
    draw_hangman(game_state.tries_left, 
            game_state.current_display,
            game_state.incorrect_guesses);

    if(game_state.current_display == game_state.secret_word){
        std::cout << "\n\n*** CONGRATULATIONS! You've saved him! ***\n";
    } else{
        std::cout << "GAME OVER! The secret word was; "
            << game_state.secret_word << " ***\n";
    }
    std::cout << "Would you like to play again? (Y/N): ";
    std::cin >> play_again_choice;
    } while (std::tolower(play_again_choice) == 'y');

std::cout << "Thanks for playing!! Goodbye.\n";
return 0;
}
