#include <iostream>
#include <string>
using namespace std;

class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; // chain Function
	}
	string getJudul()
	{
		return this->judul;
	}

} bukunya;

int main()
{
	// bukunya.setJudul("Matematika");
	// cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul(); // Chain Function
	return 0;
}