Algoritmo sin_titulo
	Escribir 'DATOS DE IMPEDANCIA'
	Escribir 'Escriba el valor de su parte real:'
	Leer Zx
	Escribir 'Ahora el valor de su parte imaginaria:'
	Leer Zy
	Escribir 'Por último el valor de su frecuencia:'
	Leer F
	W <- 2*pi*F
	// la frecuencia es 0?
	Si F<>0 Entonces
		// hay imaginario?
		Si !(Zy=0) Entonces
			// sí, ¿es capacitivo o inductivo?
			Si Zy<0 Entonces
				// capacitor
				C <- 1/(W*Zy)
				Escribir 'Reactancia principalmente capacitiva para un posible capacitor de ',abs(C),'F.'
			SiNo
				// inductor
				L <- Zy/W
				Escribir 'Reactancia principalmente inductiva para un posible inductor de ',L,'Henz. No posee capacitancia'
			FinSi
		SiNo
			// no, bueno flaco está bien, entonces prosigo
		FinSi
	SiNo
		// omitimos los imaginarios
	FinSi
	// hay real?
	Si Zx<>0 Entonces
		// sí, hay imaginario?
		Escribir 'Su resistencia es ',Zx,'ohms.'
	SiNo
		// no, solo imaginario
		// no escribo nada
	FinSi
FinAlgoritmo
