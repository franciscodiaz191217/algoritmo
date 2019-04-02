
#include<iostream>
using namespace std;

int main() {
	int cuenta;
	float descuento;
	int i;
	int montocredito;
	float ncuenta;
	int nocredito;
	int opc;
	float opc1;
	float opc2;
	float opc3;
	float res;
	nocredito = 1;
	ncuenta = 0;
	opc1 = 0;
	res = 0;
	opc2 = 1;
	opc3 = 2;
	do {
		cout << "Desea ver el menu de articulos  con las ofertas y descuentos,  1)si, 2)no" << endl;
		cin >> opc;
	} while (!(opc==1 || opc==2));
	if (opc==1) {
		cout << " (1).- Impresora Multifuncional IMP/SCAN/COP/FAX USB/WIERELESS" << endl;
		cout << "precio : $ 5,398.99" << endl;
		cout << "++++++++++++++++++++++++++++++++++" << endl;
		cout << " (2).- Calculadora de bolsillo CASIO" << endl;
		cout << "precio : $ 35.00, 20% de descuento al usar el credito de la tienda" << endl;
		cout << "++++++++++++++++++++++++++++++++++++" << endl;
		cout << " (3).- Laptop HP 14¨ procesador intel celeron, DD 500 GB, RAM 4 GB" << endl;
		cout << "precio : $ 6,190, De regalo audifonos inalambrico" << endl;
		cout << "***********************************" << endl;
		do {
			cout << "DESEA SOLICITAR UN CREDIO, (1)si,  (2)no" << endl;
			cin >> opc1;
		} while (!(opc1==1 || opc1==2));
		if (opc1==1) {
			do {
				cout << "(1):$10,000. (2):$15,000. (3):$20,000." << endl;
				cin >> montocredito;
			} while (!(montocredito>0 && montocredito<4));
			switch (montocredito) {
			case 1:
				cout << "Su numero de cuenta es:965100" << endl;
				break;
			case 2:
				cout << "Su numero de cuenta es:945914" << endl;
				break;
			case 3:
				cout << "Su numero de cuenta es:201014" << endl;
				break;
			}
		} else {
			opc1 = 0;
			res = 2;
		}
		for (i=1;i<=2;i++) {
			do {
				cout << "¿Que producto llevara?" << endl;
				cin >> opc;
			} while (!(opc== 1|| opc==2 || opc==3));
			if (opc1>0) {
				if (opc2==1) {
					do {
					//	do {
							cout << "ingrese su numero de cuenta" << endl;
							cin >> cuenta;
					//	} while (!(cuenta==965100 || cuenta==945914 || cuenta==201014));
						opc2 = 2;
						switch (cuenta) {
						case 965100:
							ncuenta = 10000;
							break;
						case 945914:
							ncuenta = 15000;
							break;
						case 201014:
							ncuenta = 20000;
							break;
						default:
							cout << "no se reconoce, ingrese de nuevo el numero de cuenta" << endl;
							opc2 = 1;
						}
					} while (opc2!=2);
				}
			} else {
				nocredito = 0;
			}
			switch (opc) {
			case 1:
				if (nocredito>0) {
					ncuenta = ncuenta-5398.99;
					cout << "Monto disponible :" << ncuenta << endl;
				} else {
					ncuenta = ncuenta+5398.99;
				}
				break;
			case 2:
				if (nocredito>0) {
					descuento = (35.00/100)*80;
					ncuenta = ncuenta-descuento;
					cout << "Monto disponible :" << ncuenta << endl;
				} else {
					ncuenta = ncuenta+35;
				}
				break;
			case 3:
				if (nocredito>0) {
					ncuenta = ncuenta-6190;
					cout << "Monto disponible :" << ncuenta << endl;
				} else {
					ncuenta = ncuenta+6190;
				}
				break;
			}
			if (opc3>1) {
				do {
					cout << "¿Desea realizar otra compra?, (1)Si/(2)No" << endl;
					cin >> opc3;
				} while (!(opc3==1 || opc3==2));
				if (opc3==2) {
					opc3 = 0;
					i = i+1;
				}
			}
		}
		if (res==2) {
			cout << "Total :" << ncuenta << endl;
		} else {
			if (ncuenta>=0) {
				cout << "Su monto sigue activo " << endl;
			} else {
				cout << "Su monto se a exedido" << endl;
				cout << "su compra no se podra llevar a cabo" << endl;
			}
		}
	} else {
		cout << "vuelva pronto :) " << endl;
	}
	return 0;
}

