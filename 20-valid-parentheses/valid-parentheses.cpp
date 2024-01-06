class Solution {
public:
    bool isValid(string s) {
        stack<char> parenthesesStack;

        for (char currentChar : s) {
            if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
                parenthesesStack.push(currentChar);
            } else {
                if (parenthesesStack.empty()) {
                    return false; // No matching opening bracket found
                }

                char openingBracket = parenthesesStack.top();
                parenthesesStack.pop();

                if ((currentChar == ')' && openingBracket != '(') ||
                    (currentChar == '}' && openingBracket != '{') ||
                    (currentChar == ']' && openingBracket != '[')) {
                    return false; // Mismatched brackets
                }
            }
        }

        return parenthesesStack.empty(); // All brackets balanced if stack is empty
    }
};
