// X32391	ASIGNACIÓN (2)

#include <iostream>
using namespace std;

int main() {
	int gastsem, ahorro , noasigsem;
	int contador = 0, valor_gastos = 0;

	cin >> gastsem >> ahorro >> noasigsem;
	
	for (int i = 0; i < noasigsem; i++) { 
		int asignacion_semanal;

		cin >> asignacion_semanal;

		valor_gastos += asignacion_semanal - gastsem;
		
		if (ahorro + valor_gastos > 0) 
			++contador;
	}

	cout << contador << endl;

	return 0;
}
