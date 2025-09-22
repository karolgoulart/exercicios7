- Explique com suas próprias palavras as diferentes abordagens dos exercícios 2 e 3.
O exercício 2 tem uma abordagem por valor e retorna uma cópia da struct. 
Isso significa que quando você chama a função, uma nova struct é alocada e preenchida nela. 
Ao final, a struct entrega a você uma cópia completa do personagem.
O exercício 3 tem uma abordagem por referência (ponteiros) e modifica os dados iniciais.
Isso significa que você passa o endereço onde o seu personagem está guardado para a função e ela vai diretamente nesse endereço e modifica a struct iriginal diretamente, sem precisar retornar nada.

- Qual abordagem você prefere usar e porquê?
Prefiro usar a abordagem por valor, ainda que essa abordagem seja menos eficiente, pois para mim ela é mais simples e como ainda sou inciante na matéria, é melhor para mim.

- Na sua opinião quais são as diferenças de uso de memória e velocidade nas duas abordagens?
Memória: A abordagem do exercício 2 necessita de mais etapas e pra uma struct grande, isso pode consumir bastante memória
A abordagem do exercício 3 recebe o endereço de memória da struct original, necessitando de menos etapas, independente do tamanho da struct.
Velocidade: No exercício 2, o processo de copiar toda a struct de uma memória para outra leva mais tempo, Para structs muito grandes, a sobrecarga pode ser significativa.
No exercício 3, o programa passa apenas pelo valor original. A modificação dos dados é feita diretamente no local original na meória. Muito mais rápido e eficiente. 
