#include "Solution2.h"

#include <ostream>
#include <iostream>
#include <fstream>
#include <string>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	float Balance = 0.f;
	std::ifstream fichier("BankAccount\\" + accountName + ".txt");

	std::string op;
	float amount;

	if (!fichier.is_open()) {
		throw std::exception("Impossible d'ouvrir le fichier");
	}

	while (fichier >> op >> amount) {
		if (op == "DEPOSIT") {
			Balance += amount;
		}
		else {
			Balance -= amount;
		}
	}

	return Balance;
}

#endif
