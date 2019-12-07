# # Sort-Time!

#### Projeto feito utilizando Qt Creator para a disciplina de Técnicas de Programação 2019.1!

A aplicação "Sort_Time", realizada no Qt creator e com linguagem C++, permite que o usuário faça um Sorteio de Times inserindo na tabela (tableWidget)os dados dos atletas a ser efetuado, tais como: o nome e idade. Após preencher os dados, o usuário vai ter retorno dos times sorteados . A "Sort-Time" tem como objetivo acelerar o tempo para  selecionar os times, já que o usuário alem de sortear na hora da pelada ele pode pode carregar os dados de em arquivo .csv. 
	 O programa é bem genérico o usuário pode entrar com quantos atletas quiser e em seguida dizer quantos times tem, será explicado a seguir no manual.
			 Dependendo de como  o usuário desejar organizar a tabela por ordem alfabética e por idade.
# Como fazer o cadastro
Onde tem "Nome" e "idade" o usuário entra com o nome e idade , respectivamente, do atleta em questão. E ao lado da idade retorna a qual categoria o atleta faz parte.
![Tela inicial](https://github.com/danubiofilho/SORTTIME/blob/master/Prints/Tela%20Inicial.png)
## Estatística
Ao clicar na aba "estatística" o usuário vai ter acesso a maior idade, menor idade e a media das idades.![aba de estatística](https://github.com/danubiofilho/SORTTIME/blob/master/Prints/estatistica.png)
## Como usar os botões
No canto superior esquerdo tem a opção "arquivo" e ao clicar aparece três novas opções,  "Carregar", "Salvar" e "Limpar Tabela", e funcionam respectivamente,  carrega um arquivo csv. já preenchido antes da pelada pelo usuário e assim acelera o processo, apos cadastrar  todos os atletas o usuário pode arquivar para posteriormente saber quem estava na pelada, e por fim ao Limpar a Tabela o usuário exclui todos os atletas já cadastrados. No canto inferior, a opção de fazer ordenação, seja por ordem alfabética ou por idade, e sortear tem função de determinar os times.
![Botões da tela](https://github.com/danubiofilho/SORTTIME/blob/master/Prints/carragr%20e%20salvar.png)
## Casos especiais
O usuário não pode cadastrar atleta com menos de 3 caracteres, menores de 5 anos de idade ou cadastrar vazio.
![cadastrar invalido](https://github.com/danubiofilho/SORTTIME/blob/master/Prints/cadastrar%20invalido.png)
## Como alterar na Tabela
Para alterar o nome ou idade o usuário deve ta dois cliques, e selecionar que deseja fazer a alteração, e inserir o novo nome ou nova idade. E assim irá sobrescrever.![excluir/editar na tabela]
(https://github.com/danubiofilho/SORTTIME/blob/master/Prints/atualizar%20na%20tabela.png)

## Como Sortear times Completos
	  por exemplo, foram cadastrados 12 atletas, ele pode ter  3 times com 4 atletas, onde os 4 primeiros (1-4) do primeiro time, os 4 segundos (5-8) no segundo time, e os 4 últimos (9-12)no terceiro time. Como pode escolher outra combinação, sempre dizendo o numero de jogadores por time e a ordem seria os primeiros times.
![Times Completos](https://github.com/danubiofilho/SORTTIME/blob/master/Prints/12%20atletas.png) 
# Como sortear times não completos
	Caso a combinação seja de times que não sejam completos o(s) ultimo(os) atletas ficam no time de fora. Por exemplo, caso sejam 18 atletas e se deseja times de 5  pessoas, os 15 primeiros formam 5 times de 5(na ordem já discutida), e os 3 ultimos formam o "time de fora" e para completar o quarto time com os que já jogaram.
![Times Não Completos](https://github.com/danubiofilho/SORTTIME/blob/master/Prints/atletas%2018%20jogadores.png)
