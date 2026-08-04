class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") {
                s.push(stoi(tokens[i]));
            }
            else if (tokens[i] == "+") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second + first);
            }
            else if (tokens[i] == "-") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second - first);
            }
            else if (tokens[i] == "*") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second * first);
            }
            else if (tokens[i] == "/") {
                int first = s.top(); s.pop();
                int second = s.top(); s.pop();
                s.push(second / first);
            }
        }
        return s.top();
    }
};