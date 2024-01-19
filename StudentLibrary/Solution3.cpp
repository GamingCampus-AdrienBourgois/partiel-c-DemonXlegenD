#include "Solution3.h"
#include <algorithm>
#include <cctype>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

bool Solution3::compareSansCasse(const std::string& a, const std::string& b) {

    std::string aMinuscules = a;
    std::string bMinuscules = b;

    std::transform(aMinuscules.begin(), aMinuscules.end(), aMinuscules.begin(), ::tolower);
    std::transform(bMinuscules.begin(), bMinuscules.end(), bMinuscules.begin(), ::tolower);

    return aMinuscules < bMinuscules;
}

void Solution3::SortWords() {
    //Utilise une fonction lambda, je n'arrive pas à utilisé la fonction du dessus pour le mettre dans le sort
    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {

        std::string aMinuscules = a;
        std::string bMinuscules = b;

        std::transform(aMinuscules.begin(), aMinuscules.end(), aMinuscules.begin(), ::tolower);
        std::transform(bMinuscules.begin(), bMinuscules.end(), bMinuscules.begin(), ::tolower);

        return aMinuscules < bMinuscules;
        });
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
