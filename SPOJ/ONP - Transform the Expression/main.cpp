#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
    int cases = 0;
    string expression;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        cin >> expression;
        stack<string> operatorStack, operandStack;
        for(char & j : expression)
        {
            string character = {j};
//            {
//
//                operatorStack.push(character);
//            }
            if(character == "(")
            {
                operatorStack.push(character);
            }
            else if(character == "+")
            {
                if(!operatorStack.empty())
                {
                    string nextOperator = operatorStack.top();
                    while(nextOperator == "-" || nextOperator == "*" || nextOperator == "/" || nextOperator == "^")
                    {
                        string operand1, operand2;

                        operand2 = operandStack.top();
                        operandStack.pop();

                        operand1 = operandStack.top();
                        operandStack.pop();

                        operandStack.push(operand1.append(operand2).append(nextOperator));

                        operatorStack.pop();

                        if(!operatorStack.empty())
                            nextOperator = operatorStack.top();
                        else
                            break;

                    }
                }
                operatorStack.push(character);
            }
            else if(character == "-")
            {
                if(!operatorStack.empty())
                {
                    string nextOperator = operatorStack.top();
                    while(nextOperator == "*" || nextOperator == "/" || nextOperator == "^")
                    {
                        string operand1, operand2;

                        operand2 = operandStack.top();
                        operandStack.pop();

                        operand1 = operandStack.top();
                        operandStack.pop();

                        operandStack.push(operand1.append(operand2).append(nextOperator));

                        operatorStack.pop();
                        if(!operatorStack.empty())
                            nextOperator = operatorStack.top();
                        else
                            break;
                    }
                }
                operatorStack.push(character);
            }
            else if(character == "*")
            {
                if(!operatorStack.empty())
                {
                    string nextOperator = operatorStack.top();
                    while(nextOperator == "/" || nextOperator == "^")
                    {
                        string operand1, operand2;

                        operand2 = operandStack.top();
                        operandStack.pop();

                        operand1 = operandStack.top();
                        operandStack.pop();

                        operandStack.push(operand1.append(operand2).append(nextOperator));

                        operatorStack.pop();
                        if(!operatorStack.empty())
                            nextOperator = operatorStack.top();
                        else
                            break;
                    }
                }
                operatorStack.push(character);
            }
            else if(character == "/")
            {
                if(!operatorStack.empty())
                {
                    string nextOperator = operatorStack.top();
                    while(nextOperator == "^")
                    {
                        string operand1, operand2;

                        operand2 = operandStack.top();
                        operandStack.pop();

                        operand1 = operandStack.top();
                        operandStack.pop();

                        operandStack.push(operand1.append(operand2).append(nextOperator));

                        operatorStack.pop();
                        if(!operatorStack.empty())
                            nextOperator = operatorStack.top();
                        else
                            break;
                    }
                }
                operatorStack.push(character);
            }
            else if(character == "^")
            {
                operatorStack.push(character);
            }
            else if(character == ")")
            {
                string nextOperator = operatorStack.top();
                operatorStack.pop();
                while(nextOperator != "(")
                {
                    string operand1, operand2;

                    operand2 = operandStack.top();
                    operandStack.pop();

                    operand1 = operandStack.top();
                    operandStack.pop();

                    operandStack.push(operand1.append(operand2).append(nextOperator));

                    nextOperator = operatorStack.top();
                    operatorStack.pop();
                }
            }
            else
            {
                operandStack.push(character);
            }
        }
        while(!operatorStack.empty())
        {
            string nextOperator = operatorStack.top();
            operatorStack.pop();

            string operand1, operand2;

            operand2 = operandStack.top();
            operandStack.pop();

            operand1 = operandStack.top();
            operandStack.pop();

            operandStack.push(operand1.append(operand2).append(nextOperator));
        }

        cout << operandStack.top() << "\n";
    }
    return 0;
}