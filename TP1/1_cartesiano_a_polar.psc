Algoritmo sin_titulo
	Escribir 'CONVERSOR CARTESIANO A POLAR'
	Escribir 'Por favor, ingrese la parte real de su número cartesiano:'
	Leer zx
	Escribir 'Y ahora su parte imaginaria:'
	Leer zy
	// calculo el modulo
	m <- rc(zx^2+zy^2)
	// y despues el angulo, convirtiendolo de radian a grados
	a <- atan(zy/zx)*(180/pi)
	Escribir 'Su número cartesiano ',zx,' j',zy,' expresado en polar es: ',m,' e^j',a,'°'
FinAlgoritmo
