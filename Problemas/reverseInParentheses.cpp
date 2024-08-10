#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

std::string solution(const std::string& inputString) {
    std::stack<std::string> st;
    std::string current;

    for (char c : inputString) {
        if (c == '(') {
            // Push current string onto the stack and start a new one
            st.push(current);
            current.clear();
        } else if (c == ')') {
            // Reverse current string
            std::reverse(current.begin(), current.end());
            // Pop the string from the stack and append the reversed string
            std::string top = st.top();
            st.pop();
            top += current;
            current = top;
        } else {
            // Append the character to the current string
            current += c;
        }
    }

    return current;
}

/*int main() {
    // Ejemplos de prueba
    std::string test1 = "(bar)";
    std::string test2 = "foo(bar)baz";
    std::string test3 = "foo(bar)baz(blim)";
    std::string test4 = "foo(bar(baz))blim";

    // Imprimir resultados
    std::cout << "Input: " << test1 << " -> Output: " << solution(test1) << std::endl;
    std::cout << "Input: " << test2 << " -> Output: " << solution(test2) << std::endl;
    std::cout << "Input: " << test3 << " -> Output: " << solution(test3) << std::endl;
    std::cout << "Input: " << test4 << " -> Output: " << solution(test4) << std::endl;

    return 0;
}*/
