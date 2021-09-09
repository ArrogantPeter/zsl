#include <iostream>
using namespace std;
class Worker{
	public:
	string name;
	string surname="Kowalska";
	string nationality="Polska";
	//definicja metody showName
	void showName(){
		cout << "Twoje imiê: "<<name;
	};
	void showSurname();
	void showAllData();
};

void Worker::showSurname(){
cout<<"test metody showSurname";
};
void Worker::showAllData(){
		cout<<"imiê i nazwisko: "<<name<<" "<<surname<<"\nNarodowoœæ: "<<nationality;
	};
int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	Worker pracownik;
	pracownik.name="Krystyna";
	cout<<"Narodowoœæ: "<< pracownik.nationality<<endl;
	pracownik.nationality="USA";
	cout<<"Narodowoœæ: "<< pracownik.nationality<<endl;
	pracownik.showName();
	cout<<endl;
	pracownik.showSurname();
	cout<<endl;
	pracownik.showAllData();
	return 0;
}

