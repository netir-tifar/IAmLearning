#include <iostream>
#include <fstream>
#include <stack>
using namespace std;


int main ()
{
	ifstream fin ("balanccedbracket.in");
	string s = "{[(])}";
	fin >> s;
	int len = s.length();
	stack <char> stack;
	int i = 0;
	while (i < len)
	{
		stack.push(s[i]);
		char s2 = stack.top();
		i++;
		if ((s2 == '(' && s[i] == ')') || (s2 == '{' && s[i] == '}')||(s2 == '[' && s[i] == ']'))
			stack.pop();
		else 
			stack.push (s[i]);
	
		i++;
	}
	
	if (stack.empty()) cout << "YES"<<endl;
	else cout << "NO" << endl;
	
	return 0;
}
