Algoritmo sin_titulo
	Escribir 'TENSIÓN y CORRIENTE a IMPEDANCIA'
	Escribir 'Ingrese el módulo de su tensión'
	Leer V_mod
	Escribir 'Ahora ingrese el ángulo:'
	Leer V_ang
	Escribir 'Ingrese el módulo de su corriente'
	Leer I_mod
	Escribir 'Ahora su ángulo:'
	Leer I_ang
	Escribir 'Por último el valor de su frecuencia:'
	Leer F
	// polar
	Z_mod <- V_mod/I_mod
	Z_ang <- (V_ang-I_ang)/180*pi
	// cartesiano
	Zx <- Z_mod*sen(Z_ang)
	Zy <- Z_mod*cos(Z_ang)
	// omega
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
			Escribir 'No hay imaginario'
		FinSi
	SiNo
		// omitimos los imaginarios
		Escribir 'F=0. Omitimos los imaginarios'
	FinSi
	// hay real?
	Si Zx<>0 Entonces
		// sí, hay imaginario?
		Escribir 'Su resistencia es ',Zx,'ohms.'
	SiNo
		// no, solo imaginario
		// no escribo nada
		Escribir 'No hay real'
	FinSi
FinAlgoritmo
