#include <string>
#include <map>

extern std::string secret_word;
extern std::map<char, bool> guessed_word;
extern char guess;

bool correct_guess(char guess, std::map<char, bool> &guessed_word);