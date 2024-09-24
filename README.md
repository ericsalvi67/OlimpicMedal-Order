# OlimpicMedal-Order

Faça um programa que leia para N países (o valor de N é definido diretiva #define): 
o nome do país, com o número de medalhas de ouro, prata e bronze. 
O programa deverá escrever os países ordenados de acordo com o número de medalhas. 
A ordem dos países  é dada pelo número de medalhas de ouro. 
Se há empate em medalhas de ouro, o país que tiver mais medalhas de prata fica a frente.
Havendo empate em medalhas de ouro e prata, fica mais bem colocado o país com mais medalhas de bronze.
Se dois ou mais países empatarem nos três tipos de medalhas, seu programa deve mostrá-los em ordem alfabética.

/-------------------/
Considerando um N=8 e dada as seguintes informações dos países.

Belgica 2 2 2

Brasil 7 6 6

Franca 10 18 14

Italia 8 12 8

Australia 8 11 10

Colombia 3 2 3

Suica 3 2 2

Tailandia 2 2 2
 
/-------------------/
o programa deve produzir a seguinte saída

Franca 10 18 14

Italia 8 12 8

Australia 8 11 10

Brasil 7 6 6

Colombia 3 2 3

Suica 3 2 2

Belgica 2 2 2

Tailandia 2 2 2
