#include <iostream>
int main()
{
	using namespace std;
	float rost;
	const int fut = 12;
	cout << "Enter vash rost: _______\b\b\b\b\b\b\b";
	cin >> rost;
	cout << "\nVash rost v futah i duimah: " << static_cast<int>(rost/fut) << " futov i " << rost/fut - static_cast<int>(rost / fut) << " duimov.";
	return 0;

}