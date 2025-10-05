#include<string>
#include<iostream>

void draw_hangman(int tries_left, 
                const std::string& current_word_display,
                const std::string& incorrect_guesses){
    std::cout << "\n\n\n\n\n\n";

    switch (tries_left){

        case 8:
        std::cout << "              + \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break;

        case 7:
        std::cout << "         +----+ \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break;

        case 6:
        std::cout << "         +----+ \n";
        std::cout << "         0    | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break;

        case 5:
        std::cout << "         +----+ \n";
        std::cout << "         0    | \n";
        std::cout << "         |    | \n";
        std::cout << "         |    | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break;

        case 4:
        std::cout << "         +----+ \n";
        std::cout << "         0    | \n";
        std::cout << "         |\\   | \n";
        std::cout << "         | \\  | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break;

        case 3:
        std::cout << "         +----+ \n";
        std::cout << "         0    | \n";
        std::cout << "        /|\\   | \n";
        std::cout << "       / | \\  | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break;   

        case 2:
        std::cout << "         +----+ \n";
        std::cout << "         0    | \n";
        std::cout << "        /|\\   | \n";
        std::cout << "       / | \\  | \n";
        std::cout << "        /     | \n";
        std::cout << "       /      | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break; 

        case 1:
        std::cout << "         +----+ \n";
        std::cout << "         0    | \n";
        std::cout << "        /|\\   | \n";
        std::cout << "       / | \\  | \n";
        std::cout << "        / \\   | \n";
        std::cout << "       /   \\  | \n";
        std::cout << "              | \n";
        std::cout << "              | \n";
        std::cout << "     ---------| \n";
        std::cout << "     ---------- \n";
        break; 
}
std::cout << "\n\n";
std::cout << "Wrong guesses: " << incorrect_guesses << std::endl;
std::cout << "\n\n";
//need to show all guessed letters as well as underscores for unguessed letters
for(char c : current_word_display){
    std::cout << c << ' ';
}
std::cout << "\n\n\n";
std::cout << "\n";
}
