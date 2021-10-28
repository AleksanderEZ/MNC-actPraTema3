disp("Ejercicio 3:1");
ejercicio3apartado1();
disp("Ejercicio 3:2");
ejercicio3apartado2();

function ejercicio3apartado1() 
	A =  [1,2,3 ; 4,5,6 ; 7,8,9]
	x =  [1.0 ; 10.0 ; 100.0]
	y =  [200.0 ; 20.0 ; 2.0]
    
    disp("a) ");
    z = A*x

	disp("b) ");
    3*A*x + 4*y
end

function ejercicio3apartado2() 
	A =  [1,2,3 ; 4,5,6 ; 7,8,9]
	x =  [1.0 ; 10.0 ; 100.0]
	y =  [200.0 ; 20.0 ; 2.0]
    
    disp("a) ColMajor");
	z = A'*x

	disp("a) Transposicion");

	z = A'*x

	disp("a) Transposicion y colmajor");

	z = A*x
end