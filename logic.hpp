//logic.hpp

#ifndef LOGIC_HPP_
#define LOGIC_HPP_

#include<string>
#include<vector>

struct GameState{
    std::string secret_word;
    std::string current_display;
    std::string incorrect_guesses;
    int tries_left;
};

void initialize_game(GameState& state, const std::string& dictionary_filename);

std::string select_random_word(const std::string& dictionary_filename);

bool process_guess(GameState& state, char guess);

#endif //LOGIC_HPP_
