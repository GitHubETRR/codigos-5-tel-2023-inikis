Algoritmo sin_titulo
	Escribir 'CONVERSOR POLAR A CARTESIANO'
	Escribir 'Por favor ingrese el módulo de su número polar:'
	Leer m
	Escribir 'Ahora el valor del ángulo:'
	Leer a
	// paso el angulo de radian a grado
	a <- a/180*pi
	// calculo el Zx y el Zy
	zx <- m*cos(a)
	zy <- m*sen(a)
	Escribir 'Su número polar es: ',zx,' + j',zy
FinAlgoritmo
