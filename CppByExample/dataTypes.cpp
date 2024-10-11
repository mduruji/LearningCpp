#include <iostream>
#include <string>
using namespace std;

template <typename ...Args>
void println(const Args& ...args) {
    (cout << ... << args) << endl;
}

int main() {
    string emojis[5] = {"😍", "💀", "🤯", "🤩"};
    string cry = "😭";
    string smile = "😄";
    string heart = "🩷";
    string bat = "🦇";
    string quote = "coding with emojis is so cool";
    string soccer_ball = "⚽️";
    string clock = "⏰";
    string kitchen_knife = "🔪";
    string bubbles = "🫧";
    string rain = "🌧️";
    string bomb = "💣";
    string water = "🌊";
    string fly = "🪰";
    string got_to_the_moon = "🚀";
    string dynamite = "🧨";
    string mula_baybay = "💵";
    string monument = "🗿";
    string fox = "🦊";
    string head_phones = "🎧";
    string building = "🏢";
    println(cry, smile, fox);
    println(bomb, fly, rain);

    int uno = 1;
    int dos = 2;
    int tres = 3;
    int cuatro = 4;
    int cinco = 5;
    int seis = 6;
    int siete = 7;
    int ocho = 8;
    int nueve = 9;
    int diez = 10;
    int once = 11;
    int doce = 12;
    int trece = 13;
    int cartoce = 14;
    int quince = 15;
    int diesiseis = 16;
    int diecisiete = 17;
    int dieciocho = 18;
    int diecinueve = 19;
    int veinte = 20;
    
    println(uno, veinte, doce);

    double vientiuno = 21.00;
    double vientidos = 22.00;
    double vientitres = 23.00;
    double vienticuatro = 24.00;
    double vienticinqo = 25.00;
    double vientiseis = 26.00;
    double vientisiete = 27.00;
    double vientiocho = 28.00;
    double vientinueve = 29.00;
    double treinta = 30.00;
    double treinta_y_uno = 31.00;
    double treinta_y_dos = 32.00;
    double treinta_y_tres = 33.00;
    double treinta_y_cuatro = 34.00;
    double treinta_y_cinco = 35.00;
    double trienta_y_seis = 36.00;
    double treinta_y_siete = 37.00;
    double treinta_y_ocho = 38.00;
    double treinta_y_nueve = 39.00;
    double cuarenta = 40.00;

    bool truth = true;
    bool lie = false;

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'f';
    char g = 'g';
    char h = 'h';
    char i = 'i';
    char j = 'j';
    char k = 'k';
    char l = 'l';
    char m = 'm';
    char n = 'n';
    char o = 'o';
    char p = 'p';
    char q = 'q';
    char r = 'r';
    char s = 's';
    char t = 't';
    char u = 'u';
    char v = 'v';
    char w = 'w';
    char x = 'x';
    char y = 'y';
    char z = 'z';

    println("who else can't say the alphabet without recalling the song lol ", smile);
}