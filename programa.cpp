#include <iostream>
using namespace std;

// esta funcao recebe dois parametros e retorna um inteiro
int funcao4(int a, int b)
{
	int x = (a+b)*(a-b)+(a-b)/(a+b);
	return x;
}

int main()
{
  // Mostra uma mensagem de ola mundo
  cout << "ola mundo com nova formula." << endl;
  return 0;
}
