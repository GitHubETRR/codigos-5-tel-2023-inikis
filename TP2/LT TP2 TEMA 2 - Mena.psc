Algoritmo sin_titulo
	Escribir 'SISTEMA DE REGISTRO DE PUNTOS DE BASQUET'
	// declaro variables
	puntaje_total <- 0
	puntaje_nuggets <- 0
	puntaje_heats <- 0
	equipo_ganador <- 0
	cant_triples <- 0
	cant_dobles <- 0
	cant_simples <- 0
	porc_triples <- 0
	porc_dobles <- 0
	porc_simples <- 0
	Repetir
		// estos valores los reestablezco a cero cada vez que registro de nuevo
		equipo_punto <- 0
		valor_punto <- 0
		Escribir 'DEFINIR EQUIPO QUE REALIZÓ EL PUNTO'
		Escribir ' - 1: Denver Nuggets'
		Escribir ' - 2: Miami Heats'
		Escribir 'SI DESEA CALCULAR LOS RESULTADOS, ESCRIBA 0.'
		Repetir
			// consultar equipo que hizo el punto hasta que sea o 1, 2 o 0
			Leer equipo_punto
			Si !(equipo_punto>=0 Y equipo_punto<=2) Entonces
				Escribir 'Ingrese un valor de equipo correcto.'
			FinSi
		Mientras Que !(equipo_punto>=0 Y equipo_punto<=2)
		// revisamos si es cero, para calcular los resultados
		Si equipo_punto==0 Entonces
			// nos aseguramos que se registraron puntos
			Si puntaje_total==0 Entonces
				Escribir 'No se pueden calcular los resultados si no hay puntos registrados.'
				Escribir ' '
			SiNo
				Escribir 'Se calcularán los resultados.'
			FinSi
		SiNo
			Escribir 'REGISTRAR PUNTO (simple: 1, doble: 2, triple: 3):'
			Repetir
				// consultamos punto hasta que sea 1, 2 o 3
				Leer valor_punto
				Si (valor_punto<0) O (valor_punto>3) Entonces
					Escribir 'Escriba un valor de punto correcto.'
				FinSi
			Mientras Que valor_punto<0 O valor_punto>3
			// sumamos la cantidad correspondiente segun el punto
			// lo que aumenta es la cant. del punto designado
			Segun valor_punto  Hacer
				1:
					cant_simples <- cant_simples+1
				2:
					cant_dobles <- cant_dobles+1
				3:
					cant_triples <- cant_triples+1
			FinSegun
			puntaje_total <- puntaje_total+valor_punto
			// aumentamos el puntaje total, indenpendientemente del punto designado
			// aumentamos el puntaje del equipo que hizo el punto
			Segun equipo_punto  Hacer
				1:
					puntaje_nuggets <- puntaje_nuggets+valor_punto
				2:
					puntaje_heats <- puntaje_heats+valor_punto
			FinSegun
			Escribir 'Punto registrado.'
			// mostramos en pantalla el equipo actualmente ganando
			Si puntaje_nuggets>puntaje_heats Entonces
				Escribir 'Los Nuggets (',puntaje_nuggets,') van ganandole a los Heats (',puntaje_heats,').'
			SiNo
				Escribir 'Los Heats (',puntaje_heats,') van ganandole a los Nuggets (',puntaje_nuggets,').'
			FinSi
			Escribir ' '
		FinSi
		// se van a calcular los resultados y se hizo al menos 1 punto
	Mientras Que !(equipo_punto==0 Y !(puntaje_total==0))
	// mostramos en pantalla el equipo ganador
	Si puntaje_nuggets>puntaje_heats Entonces
		Escribir 'Ganan los Denver Nuggets, con ',puntaje_nuggets,' puntos. Los Miami Heats hicieron ',puntaje_heats
	SiNo
		Escribir 'Gana el equipo Miami Heats, con ',puntaje_heats,' puntos. Los Denver Nuggets hicieron ',puntaje_nuggets
	FinSi
	// calculamos porcentajes y lo mostramos
	porc_simples <- (cant_simples/puntaje_total)*100
	porc_dobles <- ((cant_dobles*2)/puntaje_total)*100
	porc_triples <- ((cant_triples*3)/puntaje_total)*100d
	Escribir 'El total de puntos que se realizaron durante el partido son ',puntaje_total
	Escribir cant_simples,' simples se realizaron, el ',porc_simples,'% del total.'
	Escribir cant_dobles,' dobles se hicieron, ',porc_dobles,'% del total.'
	Escribir cant_triples,' triples se hicieron, ',porc_triples,'% del total.'
FinAlgoritmo
