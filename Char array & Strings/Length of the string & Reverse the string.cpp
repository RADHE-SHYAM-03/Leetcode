#include <iostream>

using namespace std;

int getlength(const char ch[]) {
    int count = 0;
    int i = 0;
    while (ch[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

void reverse(char ch[]) {
    int start = 0;
    int end = getlength(ch) - 1;
    while (start <= end) {
        // Swap characters directly
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char ch[100];
    cout << "Enter a string:\n";
    cin >> ch;

    int length = getlength(ch);
    cout << "Length of the string: " << length << endl;
    cout << "Initial string is: " << ch << endl;

    reverse(ch);
    cout << "After Reversed: " << ch << endl;

    return 0;
}
