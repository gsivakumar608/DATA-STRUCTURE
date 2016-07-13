# include <iostream>
#include <stack>

using namespace std;
class StackImpl{
public:
	stack<char> stackChar;
bool balancedParanthesis(char expression[6]){
//	cout << expression;
	for(int i=0;i<6;i++){
		if(expression[i] == '(' || expression[i] == '{' || expression[i] == '['){
			stackChar.push(expression[i]);
		}
		else if(expression[i]== ')' || expression[i]== '}' || expression[i]== ']'){
			if(stackChar.empty())
				return false;
			else if (expression[i]== ')' && (stackChar.top()!= '(')){
				return false;
			}
			else if (expression[i]== '}' && (stackChar.top()!= '{')){
				return false;
			}
			else if (expression[i]== ']' && (stackChar.top()!= '[')){
				return false;
			}
			else{
				stackChar.pop();
			}
		}
		}
		
	
	if(stackChar.empty()){
		cout << "Balanced!\n";
	}
	else{
		cout << "Imbalanced!";
	}
	}


};

int main(){
 //cout << "Sashank"	;
 StackImpl *stacksImpl=new StackImpl();
 char expression[]={'(',')','[',']','{','}'};
  char expression1[]={'(',')','[',']','{'};
 stacksImpl->balancedParanthesis(expression);
 stacksImpl->balancedParanthesis(expression1);
}
