#include <string>
#include <utility>
using std::string;
using std::pair;

// You must define or pass 'dani' to this function. Here, we assume it's passed as a parameter.
pair<string, double> KoImaNajveci(const auto& dani) {
	string dani_nedelje[] = {"Ned", "Sub", "Pet", "Cet", "Sre", "Uto", "Pon"};
	double najveci = 0.0;
	int sa_najvecim = -1;
	for (int i = 0; i < 7; i++) {
		double prosek = dani[i].Prosek();
		if (prosek > najveci) {
			najveci = prosek;
			sa_najvecim = i;
		}
	}
	return std::make_pair(dani_nedelje[sa_najvecim], najveci);
}