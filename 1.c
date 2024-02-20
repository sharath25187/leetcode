#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int length = strlen(s);
    char stack[length];
    int top = -1;

    for (int i = 0; i < length; i++) {
        char current = s[i];

        if (current == '(' || current == '{' || current == '[') {
            stack[++top] = current;
        } else if (current == ')' && top >= 0 && stack[top] == '(') {
            top--;
        } else if (current == '}' && top >= 0 && stack[top] == '{') {
            top--;
        } else if (current == ']' && top >= 0 && stack[top] == '[') {
            top--;
        } else {
            return false;  // Invalid bracket sequence
        }
    }

    return top == -1;  // All brackets are matched
}
