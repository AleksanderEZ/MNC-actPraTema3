disp("ejercicio4apartado1")
ejercicio4apartado1()
disp("ejercicio4apartado2")
ejercicio4apartado2()

function ejercicio4apartado1() 
	A =  [0, 1, 0; 1, 1, 0; 0, 0, 0];
	B =  [3, 7, 29; 5, 1, 0; 24, 97, 2];
	C =  [1, 13, 17; 19, 37, 71; 11, 5, 2];
	
	A*B
	A*B'
	2*A*B+3*C
end

function ejercicio4apartado2() 
	A =  [1,2,3,4,5];
	B =  [2,1,65,12,98];

	B'*A
end