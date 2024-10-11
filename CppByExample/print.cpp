#include <iostream>

template <typename ...Args>
void print(const Args& ...args) {
    (std:: cout << ... << args);
}

template <typename ...Args>
void println(const Args& ...args) {
    (std:: cout << ... << args) << "\n";
}

int main(){
    std:: cout << "Hello World\n";
    std:: cout << 1 << "\n";
    std:: cout << 2 << "\n";
    std:: cout << 3 << "\n";
    std:: cout << 4 << "\n";
    std:: cout << 5 << "\n";
    std:: cout << 6 << "\n";
    std:: cout << 7 << "\n";
    std:: cout << 8 << "\n";
    std:: cout << 9 << "\n";
    std:: cout << 10 << "\n";
    std:: cout << 11 << "\n";
    std:: cout << 12 << "\n";
    std:: cout << 13 << "\n";
    std:: cout << 14 << "\n";
    std:: cout << 15 << "\n";
    std:: cout << 16 << "\n";
    std:: cout << 17 << "\n";
    std:: cout << 18 + 8 << " " << 18 << "\n";
    std:: cout << "Hey" << ", how are you" << 19 << "\n";
    std:: cout << "-" << "_" << "-" << 20 << "\n";
    std:: cout << "21" << "\n";
    std:: cout << "22" << "\n";
    std:: cout << "23" << "\n";
    std:: cout << "24" << "\n";
    std:: cout << "25" << "\n";
    std:: cout << "25" << "\n";
    std:: cout << "26" << "\n";
    std:: cout << "27" << "\n";
    std:: cout << "😀" << "\n";
    std:: cout << "😂" << "\n";
    std:: cout << "If you're reading this, it's too late \n";
    std:: cout << 30 << "\n";
    std:: cout << 31 << "\n";
    std:: cout << 32 << "\n";
    std:: cout << 33 << "\n";
    std:: cout << 34 << "\n";
    std:: cout << 35 << "\n";
    std:: cout << 36 << "\n";
    std:: cout << 37 << "\n";
    std:: cout << 38 << "\n";
    std:: cout << 39 << "\n";
    std:: cout << 40 << "\n";
    std:: cout << "❤️" << "\n";
    std:: cout << "👺" << "\n";
    std:: cout << "🙂‍↔️" << "\n";
    std:: cout << "🫨" << "\n";
    std:: cout << "😍" << "\n";
    std:: cout << "🫠" << "\n";
    std:: cout << "🥸" << "\n";
    std:: cout << "🤩" << "\n";
    std:: cout << "¡™™£¢£¢" << "\n";
    std:: cout << 50.00 << "\n";
    std:: cout << "😛" << "\n";
    std::string emojis[5] = {"😍", "💀", "🤯", "🤩"};
    std:: cout << emojis[0] << "\n";
    std:: cout << emojis[1] << "\n";
    std:: cout << emojis[2] << "\n";
    std:: cout << emojis[3] << "\n";
    std:: cout << "🤮" << "\n";
    std:: cout << "😶‍🌫️" << "\n";
    std:: cout << "🤠" << "\n";
    std:: cout << "🥳" << "\n";
    std:: cout << 60 << "\n";
    int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std:: cout << 60 + nums[0] << "\n";
    std:: cout << 60 + nums[1] << "\n";
    std:: cout << 60 + nums[2] << "\n";
    std:: cout << 60 + nums[3] << "\n";
    std:: cout << 60 + nums[4] << "\n";
    std:: cout << 60 + nums[5] << "\n";
    std:: cout << 60 + nums[6] << "\n";
    std:: cout << 60 + nums[7] << "\n";
    std:: cout << 60 + nums[8] << "\n";
    std:: cout << "people want to see your vision \n";
    std:: cout << "👾" << "\n";
    std:: cout << "72" << "\n";
    std:: cout << "73" << "\n";
    std:: cout << "74" << "\n";
    std:: cout << "75" << "\n";
    std:: cout << "76" << "\n";
    std:: cout << "77" << "\n";
    std:: cout << "78" << "\n";
    std:: cout << "79" << "\n";
    std:: cout << "80" << "\n";
    std:: cout << "81" << "\n";
    std:: cout << "I can see why people don't like c++ \n" << "I like it tho \n";
    print("🥸");
    std:: cout << "\nPoquito a poco" << "\n";
    print("made my own print function");
    println("\nfeels like i'm using python");
    println("hi");
    println("bye");
    println("Hola");
    println("10");
    println("9");
    println(8);
    println(7);
    println(6);
    println(5);
    println(4);
    println(3);
    println("Getting out of tutorial hell will save you");
    println("But there are some tutorials you still need");
    println("C++, Go, Python");
    println("For the diamonds gotta see through the dust");
}