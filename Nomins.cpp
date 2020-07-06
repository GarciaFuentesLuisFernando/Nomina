#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int op;
	char con[4];
	do
	{
	
	printf("\t\tSISTEMA DE NOMINA\n\n");
	printf("1.-NOMBRE DE LA EMPRESA\n");
	printf("2.-DIRECCION DE LA EMPRESA\n");
	printf("3.-FOLIO\n");
	printf("4.-DEPARTAMENTO\n");
	printf("5.-NUMERO DE EMPLEADO/PUESTO\n");
	printf("6.-NOMBRE/CURP\n");
	printf("7.-RFC/IMSS\n");
	printf("8.-SEMANA\n");
	printf("9.-PERIODO\n");
	printf("10.-PERCEPCIONES\n");
	printf("11.-DEDUCCIONES\n");
	printf("12.TOTAL PERCEPCIONES\n");
	printf("13.TOTAL DEDUCCIONES\n\n");
	
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			printf("EMPRESA:\n");
			printf("PICHVAC S.A");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
		break;
		case 2:
			printf("DIRECCION:\n");
			printf("CDMX,COL. NUEVA INDUSTRIAL VALLEJO,");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 3:
			printf("FOLIO:\n");
			printf("001122");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 4:
			printf("DEPARTAMENTO:\n");
			printf("SISTEMAS");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 5:
			printf("NUMERO DE EMPLEADO:\n");
			printf("0417\n");
			printf("PUESTO:\n");
			printf("SOPORTE TECNICO\n");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 6:
			printf("NOMBRE:\n");
			printf("LUIS FERNANDO G.\n");
			printf("CURP:\n");
			printf("GAFL100201JMNSR67");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 7:
			printf("RFC:\n");
			printf("GAFL100201J\n");
			printf("IMSS:\n");
			printf("01020405009");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 8:
			printf("SEMANA:\n");
			printf("3");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 9:
			printf("PERIODO:\n");
			printf("12 Agosto 2020 A 19 AGOSTO 2020");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 10:
			printf("PERCEPCIONES:\n");
			printf("a) SEGURO DEL RETIRO\n");
			printf("b) SUBSIDIO PARA EL EMPLEO\n");
			printf("c) SUBCIDIO POR INCAPACIDAD\n");
			printf("d) SUELDOS,SALARIOS,RAYAS,JORNALES\n");
			printf("e) VALES DE DESPENSA\n");
			printf("f) VALES DE GASOLINA\n");
			printf("g) VALES DE RESTAURANTE\n");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
		case 11:
			printf("DEDUCCIONES:\n");
			printf("a) DESCUENTO POR INCAPACIDAD\n");
			printf("b) ERRORES\n");
			printf("c) ISR\n");
			printf("d) OTROS\n");
			printf("e) PAGO DE ABONOS\n");
			printf("f) PAGO POR CREDITO DE VIVIENDA\n");
			printf("g) PAGOS HECHOS CON EXCESO AL TRABAJADOR\n");
			printf("\nEscriba cualquier tecla y presione enter para regresar al menu\n");
			scanf("%s",&con);
			break;
}	
if ((op<=0) || (op>11))
{
	printf("\nOPCION INVALIDA INGRESE EL NUMERO DE LA OPCION MOSTRADA EN EL MENU\n\n");
};
}while (!(con=="luis"));

	return 0;
	
}
