Algoritmo sin_titulo
	Escribir 'SUMADOR DE DOS N�MEROS COMPLEJOS RECTANGULARES'
	Escribir 'Por favor, ingrese el valor X del primer n�mero complejo'
	Leer zx1
	Escribir 'Ahora ingrese el valor Y de mismo n�mero'
	Leer zy1
	Escribir 'Escriba el valor X del segundo n�mero'
	Leer zx2
	Escribir 'Por �ltimo, el valor Y'
	Leer zy2
	// calculamos el cartesiano de la suma
	zxf <- zx1+zx2
	zyf <- zy1+zy2
	Escribir '�C�mo desea expresar la suma?'
	Escribir 'C - Cartesiana'
	Escribir 'P - Polar'
	Leer eleccion
	// repetimos la eleccion como medida de seguridad super avanzada
	Si eleccion<>'C' Y eleccion<>'P' Entonces
		Repetir
			Escribir 'Por favor eliga C o P'
			Leer eleccion
		Mientras Que eleccion<>'C' Y eleccion<>'P'
	FinSi
	Segun eleccion  Hacer
		'P':
			// calculo el polar
			modulo <- rc(zxf^2+zyf^2)
			ang <- atan(zyf/zxf)*(180/pi)
			Escribir 'La suma expresada en polar: ',modulo,' e^j',ang,'�'
		'C':
			Escribir 'La suma expresada en cartesiano es: ',zxf,' j',zyf
		De Otro Modo:
			Escribir 'Por alguna extra�a raz�n, el programa fall�'
	FinSegun
FinAlgoritmo
