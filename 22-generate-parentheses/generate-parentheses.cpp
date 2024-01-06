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
        // if the length of the current string is 2n, a valid combination is found
        if (current.length() == 2 * n) {
            results.push_back(current);
            return;
        }

    
        if (openCount < n) {
            generate(results, current + '(', openCount + 1, closeCount, n);
        }

        if (closeCount < openCount) {
            generate(results, current + ')', openCount, closeCount + 1, n);
        }
    }
};
