#include <string>
#include <utility>
using std::string;
using std::pair;

// Pretpostavimo da postoji klasa Dan sa metodom Prosek()
class Dan {
public:
	double Prosek() const {
		// Primer implementacije
		return 0.0;
	}
};
template<typename T>
pair<string, double> KoImaNajveci(const T& dani) {
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