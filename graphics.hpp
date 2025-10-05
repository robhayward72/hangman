//graphics.hpp

#ifndef GRAPHICS_HPP_
#define GRAPHICS_HPP_

#include<string>

void draw_hangman(int tries_left, 
        const std::string& current_display, 
        const std::string& incorrect_guesses);
//bool process_guess(GameState& state, char guess);

#endif//GRAPHICS_HPP_
