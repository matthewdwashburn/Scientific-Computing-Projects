#include <iostream>
using namespace std;
/*
 * @author Matthew Washburn
 */
class Cereal {
    private:
        char type;
        char id;
        int calories;
        int protein;
        int fat;
        int sodium;
        int sugar;
        string name;
    public:
    Cereal();
    Cereal(char t, char i, string n);
    Cereal(char t, char i, int cal, int pro, int fatval, int sod, int sug, string n);
// Getters
    int getCalories();
    int getProtein();
    int getFat();
    int getSodium();
    int getSugar();
    char getType();
    char getMfr();
    string getName();
// Setters
    void setCalories(int cal);
    void setProtein(int pro);
    void setFat(int fatval);
    void setSodium(int sod); 
    void setSugar(int sug); 
// Healthy Function
    bool IsThisHealthy();
};
// Setters
void Cereal::setCalories(int cal) {
    calories = cal;
    }
void Cereal::setProtein(int pro) {
    protein = pro;
    }
void Cereal::setFat(int fatval) {
    fat = fatval;
    }
void Cereal::setSodium(int sod) {
    sodium = sod;
    }
void Cereal::setSugar(int sug) {
    sugar = sug;
    }
// Getters
int Cereal::getCalories() {
    return calories;
    }
int Cereal::getProtein() {
    return protein;
    }
int Cereal::getFat() {
    return fat;
    }
int Cereal::getSodium() {
    return sodium;
    }
int Cereal::getSugar() {
    return sugar;
    }
char Cereal::getType() {
    return type;
    }
char Cereal::getMfr() {
    return id;
    }
string Cereal::getName() {
    return name;
    }

Cereal::Cereal() {cout << "Set Everything to 0." << endl;
calories = protein = fat = sodium = sugar = 0;
}
Cereal::Cereal(char t, char i, string n): type(t), id(i), name(n) {
calories = protein = fat = sodium = sugar = 0;
}
Cereal::Cereal(char t, char i, int cal, int pro, int fatval, int sod, int sug, string n)
: type(t), id(i), calories(cal), protein(pro), fat(fatval), sodium(sod), sugar(sug), name(n) {
}
bool Cereal::IsThisHealthy() {
    return (fat <= 5 && sodium <= 200 && sugar <= 10);
}
int
main()
{
    cout << "Program is working!" << endl;
return 0;
} // main