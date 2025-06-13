#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << "Chatbot: Hello! I'm your chatbot. Type 'bye' to exit.\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        if (userInput == "hi" || userInput == "hello") {
            cout << "Chatbot: Hi there! 😊\n";
        } else if (userInput == "how are you") {
            cout << "Chatbot: I'm just code, but I'm great!\n";
        } else if (userInput == "bye") {
            cout << "Chatbot: Bye! Have a good day.\n";
            break;
        } else {
            cout << "Chatbot: Hmm... I don't understand.\n";
        }
    }

    return 0;
}

