#include <iostream>
//#include <fstream>
#include <stack>
using namespace std;


int main ()
{
	//ifstream fin ("balanccedbracket.in");
	string s = "{[(])}";
	//fin >> s;
	int len = s.length();
	stack <char> stack;
	int i = 0;
	stack.push(s[i]);
	//if there's an unbalanced pair stack won't be empty
	while (i < len && !stack.empty())
	{
		
		char s2 = stack.top();
		//cout << s2 ;
		
		
		i++;
		//cout <<s2 << s[i] << endl;
		
		if ((s2 == '(' && s[i] == ')') || (s2 == '{' && s[i] == '}')||(s2 == '[' && s[i] == ']'))
			stack.pop();
		else
			stack.push (s[i]);
	
	}
	
	if (stack.empty()) cout << "YES"<<endl;
	else cout << "NO" << endl;
	
	return 0;
}
