#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> results;
        generate(results, "", 0, 0, n);
        return results;
    }

private:
    void generate(vector<string>& results, string current, int openCount, int closeCount, int n) {
        // Base case: if the length of the current string is 2n, a valid combination is found
        if (current.length() == 2 * n) {
            results.push_back(current);
            return;
        }

        // Add an opening parenthesis if the count of open parentheses is less than n
        if (openCount < n) {
            generate(results, current + '(', openCount + 1, closeCount, n);
        }

        // Add a closing parenthesis if it can match an open parenthesis
        if (closeCount < openCount) {
            generate(results, current + ')', openCount, closeCount + 1, n);
        }
    }
};
