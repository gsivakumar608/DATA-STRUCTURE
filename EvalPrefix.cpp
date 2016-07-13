#include <iostream>
#include <stack>
using namespace std;
int evaluateExpress(char,char,char);
char formatExpress(char);

char formatExpress(char* x){
	
	char prefixOperator;
	char operand1;
	char operand2;
	int result;
	stack<char> prefixStack;
	for(int i=strlen(x);i>0;i--){
		
		if(isalpha(x[i])){
			//printf("true:%c\n",x[i]);
			prefixStack.push(x[i]);
		}
		else{
			//prefixOperator=x[i];
			cout << prefixStack.top();
			//operand2=prefixStack.pop();
			//result=evaluateExpress(prefixOperator,operand1,operand2);
			//printf("%c",operand1);
		}
}
}

int evaluateExpress(char prefixOperator,char operand1,char operand2){
	cout << prefixOperator;
	return 0;	
}
int main(){
	int a=10;
	int b=2;
	int c=3;
	int d=10;
	int e=4;
	char x[40];
	//printf("Enter the expression");
	strcpy(x,"-+/a^bc*de*ac");
	//for(int i=strlen(x);i>0;i--){
		formatExpress(x);
	//}
	



}
