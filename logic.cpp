#include"logic.hpp"

#include<algorithm>
#include<fstream>
#include<iostream>
#include<cstdlib>
#include<cctype>
#include<vector>

std::string select_random_word(const std::string& dictionary_filename){
std::vector<std::string> words;
std::ifstream file(dictionary_filename);
std::string word;

if(file.is_open()){
    while(file >> word){
        words.push_back(word);        
        }
    file.close();
}
    else{
        std::cerr << "Error: Could not open the dictionary: " << dictionary_filename << std::endl;
    return "";
    }
if(words.empty()){
    std::cerr << "Error: Dictionary is empty." << std::endl;
    return "";
    }

int random_index = std::rand() % words.size();
return words[random_index];
}

void initialize_game(GameState& state, const std::string& dictionary_filename){
    state.secret_word = select_random_word(dictionary_filename);
    state.current_display = std::string(state.secret_word.length(), '_');
    state.tries_left = 8;
    state.incorrect_guesses ="";
}
bool process_guess(GameState& state, char guess){
    bool correct_guess = false;
    guess = std::toupper(guess);
    for(size_t i=0; i< state.secret_word.length(); ++i){
        if(state.secret_word[i] == guess){
            state.current_display[i]= guess;
            correct_guess = true;
        }    
    }
    if(!correct_guess){
        state.tries_left--;
        state.incorrect_guesses += guess;
        state.incorrect_guesses += " ";
    }
    return correct_guess;
}
