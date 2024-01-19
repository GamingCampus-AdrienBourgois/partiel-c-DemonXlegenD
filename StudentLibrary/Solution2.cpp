#include "Solution2.h"

#include <ostream>
#include <fstream>
#include <sstream>
#include <string>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	float balance = 0.f;
	std::ifstream fichier("BankAccount/" + accountName + ".txt");

	if (fichier.is_open()) {
		std::string ligne;
		while (std::getline(fichier, ligne)) {
			std::istringstream iss(ligne);
			std::string action;
			float montant;
			if (iss >> action >> montant) {
				if (action == "DEPOSIT") balance += montant;
				else if(action == "WITHDRAW") balance -= montant;
			}
		}
	}
	else {
		throw std::exception("BANK ACCOUNT NOT FIND");
	}
	return balance;
}

#endif
