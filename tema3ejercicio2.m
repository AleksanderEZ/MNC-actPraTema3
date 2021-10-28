disp("Ejercicio 2:1");
ejercicio2apartado1();
disp("Ejercicio 2:2");
ejercicio2apartado2();
disp("Ejercicio 2:3");
ejercicio2apartado3();
% En matlab no hay incrementos y el uno es para iniciar MKL

function ejercicio2apartado1() 
	vector1 = [ 5.0,0.0,27.0 ];
	vector2 = [ 0.0,5.0,0.0 ];

	disp("Producto escalar: " + dot(vector1, vector2));
end

function ejercicio2apartado2() 
	vN =  ['A', 'l','e','k','s','a','n','d','e','r'];
	vA = ['O', 'l', 'i', 'v', 'a', 'r', 'e', 's', 0, 0];

    vR = 3.*vA + vN;
    vR = map(vR);
    vR = round(vR)
    vR = char(vR)
	disp(vR);
end

function ejercicio2apartado3() 
	birthdate = [ 1.0, 0.0, 0.0, 9.0, 2.0, 0.0, 0.0, 0.0 ];
	disp(birthdate);
	norm2 = norm(birthdate);
	disp("Norma2: " + norm2);
	mod11 = mod(floor(norm2), 11);
	disp("Nota de MNC: " + mod11);
end

function keyword = map(original) 
	keyword = 97 + (122 - 97) * (original / 461);
end