//desenvolvido por Enzo Yamakawa nº7 e Gabriel Oliveira nº8 1ºY
#include <locale.h>
#include <stdio.h>
int main()
{
	char esporte,opcao,atleta;
	setlocale(LC_ALL, "Portuguese");
//começo do loop dos esportes
	while (1)
		{
		printf("	Olá, todos sabemos que os jogos olímpicos estão chegando,\nporque não aprender um pouco mais sobre esportes de invasão e \nesportes de rede?\n	Esportes de rede: reúne modalidades que se caracterizam \npor arremessar, lançar ou rebater a bola em direção a setores \nda quadra adversária nos quais o rival seja incapaz de devolvê-la\nda mesma forma ou que leve o adversário a cometer um erro dentro \ndo período de tempo em que o objeto do jogo está em movimento.\n");
		printf(" |1-Badminton\n |2-Tênis\n |3-Tênis de mesa\n |4-Vôlei\n |5-Vôlei de praia\n");
		printf("	Esportes de invasão: conjunto de modalidades que se \ncaracterizam por comparar a capacidade de uma equipe introduzir \nou levar uma bola (ou outro objeto) a uma meta ou setor da quadra \ncampo defendido pelos adversários (gol, cesta, touchdown etc.),\nprotegendo, simultaneamente, o próprio alvo, meta ou \nsetor do campo.");

		printf(" \n |6 - Basquete\n |7 - Basquete 3x3 \n |8 - Futebol\n |9 - Handebol\n |10 - Hóquei\n |11 - Polo Aquático\n |12 - Rugby Seven\n");
		printf("\nEscolha o esporte desejado (1~12) e se quiser encerrar programa,\ndigite \'0\': ");
		scanf("%i",&esporte);
		printf("----------------------------------------------------------------\n");
		
//encerrar porgrama
			if (esporte == 0)
			{
				printf("\nencerrando programa!\n");
				break;
			}
//primeiro esporte - badminton
			else if (esporte == 1)
			{
				printf("\n	O Badminton é um esporte originário da Índia, mas que \ntornou-se popular em todo o mundo, especialmente na Ásia, Europa \ne América do Norte, na qual pode ser praticado de forma individual \nou em pares. É bastante parecido com o tênis e o vôlei de praia, \nporém é praticado com raquete e um volante ou pena deve passar \npor cima de uma rede que divide ao meio o campo.O objetivo é marcar \nmais pontos que o adversário, com jogadas que requerem velocidade, \nagilidade, reflexos rápidos e habilidade técnica.Eventos de badminton \nsão realizados em todo o mundo, inclusive nas Olimpíadas, desde 1992 \nnos Jogos de Barcelona.\n");
				while (1)
				{
					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Ygor Coelho\n |2 - Fabiana Silva\n |3 - Daniel Paiola\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);             
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas...\n--------------------------------\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Ygor é um dos destaques do badminton brasileiro e já \nconquistou várias medalhas em competições internacionais, incluindo \no ouro nnos Jogos Pan-Americanos de 2019.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Fabiana é outra atleta de destaque no cenário nacional e \ninternacional do badminton. Ela também possui várias medalhas \nem competições pan-americanas.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Daniel é um dos principais jogadores brasileiros de badminton, \ncompetindo tanto em eventos individuais quanto em duplas masculinas. \nEle também conquistou medalhas em competições pan-americanas.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão na Arena La Chapelle, entre o dia\n27 de Julho (Sábado) até o dia 5 de Agosto (Segunda-feira).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/badminton");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//segundo esporte - tênis
			else if (esporte == 2)
			{
				printf("\n	O tênis fez parte do programa dos Jogos Olímpicos na\nedição inaugural, Atena s 1896, e perdurou até os Jogos\nde Paris 1924, quando foi removido a partir da edição\nde Amsterdã 1928. Após duas aparições como esporte de\ndemonstração (México 1968 e Los Angeles 1984), o tênis\nretornou como esporte olímpico nos Jogos de Seul 1988, \nsendo disputado em todas suas edições desde então.\n	Disputado individualmente ou em duplas, com bola\ne raquete, o tênis tem como principal fundamento rebater\na bola para a quadra adversária até que o jogador ou a\ndupla oponente não consiga rebater novamente de volta.\n	O objetivo é impedir que a bola quique no seu\nlado mais de uma vez.\n	O tênis pode ser disputado em três tipos de quadra:\n•Quadras de saibro: piso é feito de uma mistura de terra\nbatida com pó de telha.\n•Quadra rápida: com piso sintético, de cimento, carpete\nou asfalto\n•Quadra de grama.\n");
				while (1)
				{	
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Luisa Veras Stefani\n |2 - Fabiana Ariel Meligeni\n |3 - André Rezende Sá\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Luisa Veras Stefani é uma tenista brasileira, \nmedalhista olímpica e primeira mulher brasileira, na Era \nAberta, a entrar no Top 10 do ranking de duplas da WTA.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Fernando Ariel Meligeni, também conhecido por\nFininho, é um ex-tenista profissional brasileiro, e\nque atualmente trabalha como comentarista nos canais\nESPN-Fox Sports. É considerado por diversos analistas\nesportivos, críticos de tênis e antigos tenistas como\num dos dez maiores tenistas brasileiros da Era Aberta.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	André Rezende Sá é um ex-tenista brasileiro,\nnascido no estado de Minas Gerais. Se profissionalizou\nem 1996 e se aposentou em 2018, aos 40 anos, após cair\nnas quartas de final do Brasil Open, jogando ao lado de\nThomaz Bellucci, de quem é técnico atualmente.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão no Stade Roland-Garros, entre o\ndia 27 de Julho (Sábado) até o dia 4 de Agosto (Domingo).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/tenis");
					}	
					else if (opcao == 3)
					{
						printf("\n	Os resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//terceiro esporte - tênis de mesa
			else if (esporte == 3)
			{
				printf("\n	O tênis de mesa, também conhecido é o jogo em\nque duas pessoas ou duas duplas usam raquetes de madeira\npara passar uma bolinha de um lado a outro de uma rede\ninstalada em uma mesa na qual a divide em duas partes\niguais.\n	O tênis de mesa foi criado na Inglaterra, no\nséculo 19 e foi reconhecimento do Comitê Olímpico\nInternacional veio em 1977. Quatro anos mais tarde,\no tênis de mesa foi aceito no programa das Olimpíadas.\nA estreia ocorreu em 1988, em Seul. O tênis de mesa é\npraticado numa mesa que possui 2,74 metros de comprimento\npor 1,45 metro de largura. A altura da mesa deve ficar\na 76 cm de distância do solo. No meio da mesa é fixada\numa rede com 1,83 metro de comprimento e 15,25 cm de\naltura. O objetivo do jogo é marcar pontos.\n");
				while (1)
				{					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Hugo Hoyama\n |2 - Cláudio Mitsuhiro Kano\n |3 - Bruna Yumi Takahashi\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Considerado o maior jogador brasileiro de todos\nos tempos, Hugo Hoyama é um mesa-tenista brasileiro,\ntendo participado de seis Olimpíadas e sete Jogos\nPan-Americanos. Em 2012 classificou-se pela Sociedade\nEsportiva Palmeiras para as Olimpíadas de Londres,\ntendo sido eliminado na primeira fase da competição.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Foi um jogador de tênis de mesa brasileiro de\nempunhadura caneta canhota. Tinha como destaque em seu\njogo sua grande habilidade nos saques e seu shoto\n");
							}
							else if (atleta == 3)
							{
								printf("\n	É uma mesa-tenista olímpica brasileira. Chegou\na ser a número 17 do mundo em junho de 2022, sendo uma\ndas melhores jogadoras das Américas no ranking mundial\nda ITTF, depois de Adriana Díaz, de Porto Rico, que já\nfoi no 9 do mundo, sendo a melhor jogadora de tênis de\nmesa da história do Brasil.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão na Arena 4 Paris Sul, entre o dia\n27 de Julho (Sábado) até o dia 9 de Agosto (Sexta-feira).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/tenis-de-mesa");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//quarto esporte - voleibol
			else if (esporte == 4)
			{
				printf("\n	O voleibol ou vôlei é um esporte coletivo praticado\nem uma quadra dividida por uma rede. Duas equipes disputam\na partida com o objetivo de tocar a bola no campo adversário,\na qual deve ser arremessada por cima da rede. O esporte\né um dos mais populares no Brasil e no mundo em termos\nde praticantes e audiência.O vôlei foi criado em 1895,\npelo americano William G. Morgan, então diretor de\nEducação Física da Associação Cristã de Moços (ACM) na\ncidade de Holyoke, em Massachusetts, nos Estados Unidos.\nFez sua estreia Olímpica nos Jogos de Tóquio 1964.\n	Cada time é composto por 6 jogadores em quadra\ne 6 jogadores reserva. Após o saque, cada time só poderá\ntocar a bola três vezes, sendo proibido que um jogador\ntoque a bola duas vezes seguidas. A equipe vencedora é\naquela que ganhar o maior número de sets.\n");
				while (1)
				{
					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Giba\n |2 - Sheila Castro\n |3 - Bernadinho\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Giba conquistou o mundo e se tornou uma referência\npara jogadores de todas as gerações. Suas atuações foram\nessenciais para a conquista dos títulos olímpicos em Atenas\n2004 e no Rio 2016. Giba é uma inspiração para todos os\napaixonados por vôlei e segue sendo reconhecido como\num dos melhores, mesmo após se aposentar das quadras.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Sheilla é uma estrela do cenário do vôlei\nfeminino brasileiro. Sua versatilidade em diferentes\nposições na quadra e precisão nos ataques, marcou uma\ngeração e será para sempre lembrada. Sua trajetória é\num exemplo de dedicação e sucesso no esporte, ela foi\nimportante nas conquistas olímpicas de Pequim 2008 e\nLondres 2012, acumulou títulos e entrou para a história.\n	Aos 38 anos se despediu das quadras e encerrou\nesse ciclo sendo uma das maiores do Brasil.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Como jogador, conquistou o coração dos fãs\natravés de suas técnicas impecáveis e grande paixão\npelo esporte. Mais tarde, já como técnico da seleção\nmasculina, conquistou junto ao time duas medalhas de\nouro olímpicas. Sua liderança incrível e habilidades\no tornaram um dos treinadores mais respeitados do mundo\ne um dos maiores jogadores de vôlei do Brasil.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão na Arena 1 Paris Sul, entre o dia\n27 de Julho (Sábado) até o dia 11 de Agosto (Domingo).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/volei");
					}	
					else if (opcao == 3)
					{
						printf("--------------------------------\n\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//quinto esporte - Vôlei de praia
			else if (esporte == 5)
			{
				while (1)
				{
					printf("\n	O vôlei ou voleibol de praia é um jogo disputado\npor quatro jogadores, numa quadra de areia, dividida\nna metade por uma rede. O objetivo é lançar a bola com\nas mãos e fazer com que ela caia na quadra do adversário.\nO vôlei de praia olímpico é disputado por duplas,\nposicionadas uma de cada lado da quadra e separadas por\numa rede. O principal objetivo do jogo é fazer com que\na bola toque o solo adversário, mas, para que o ponto\nseja válido, a bola deve passar entre as duas antenas\nposicionadas nas extremidades da rede.\n	O vôlei de praia fez sua estreia Olímpica nos\nJogos de Atlanta 1996 depois de aparecer pela primeira\nvez como esporte de demonstração nos Jogos Olímpicos de\n1992, em Barcelona.\n");
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Carolina Voltar \n |1 - Carolina Salgado Collett Solberg\n |2 - Bárbara Seixas de Freitas\n |3 - Ana Patrícia Silva Ramos\nEscolha algum dos Atletas para saber mais sobre ele:");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	É uma jogadora brasileira atuante no Vôlei de\npraia, modalidade na qual conquistou foi semifinalista\nno Mundial na categoria infanto-juvenil em 2002.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	(Rio de Janeiro, 8 de março de 1987) é uma\njogadora de voleibol de praia brasileira, campeã mundial\ne do Circuito Mundial em 2015 e medalhista olímpica em 2016.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	É uma voleibolista brasileira praticante da\nmodalidade de vôlei de praia e que foi ex-voleibolista\nindoor.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão no Estádio Torre Eiffel, entre o \ndia 27 de Julho (Sábado) até o dia 10 de Agosto (Sábado)\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/volei-de-praia");
					}	
					else if (opcao == 3)
					{
						printf("--------------------------------\n\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//sexto esporte - Basquete
			else if (esporte == 6)
			{
				printf("\n	O basquete, que em inglês significa bola no cesto,\nfoi criado em 1891 pelo pastor canadense presbiteriano e\ntambém professor de educação física da Associação Cristã de\nMoços, James Naismith e foi jogado pela primeira vez no\nBrasil em 1906.\n	O jogo é disputado por duas equipes de cinco jogadores\nque tem por objetivo passar a bola por dentro do cesto\ndisposto nas extremidades do campo, desta forma marcando\npontos. O jogo é iniciado com o lançamento da bola no ar.\nA duração é de quatro períodos de dez minutos, com um\nintervalo de meio  tempo entre o segundo e o terceiro período.\n");
				while (1)
				{					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Anderson Varejão\n |2 - Ubiratan\n |3 - Hortência Marcari\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Varejão é o único brasileiro a ter sido campeão\nda Euroliga atualmente. Ele conseguiu o feito defendendo\no Barcelona, quando tinha  20 anos. O clube catalão\nlevantou o troféu europeu de basquete em 2003, tornou um\nídolo do Cleveland Cavaliers, onde permaneceu por 12 anos,\nestá no top-10 jogadores com mais partidas pela equipe de\nOhio e é o quinto na lista de atletas com mais rebotes na\nhistória.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Considerado o maior pivô brasileiro de todos os\ntempos, Ubiratan entrou para a Ordem de Mérito da\nFederação Internacional de Basquete (Fiba) em  1994.\nEm agosto de 2009, o ex-jogador foi eleito para integrar\no Hall da Fama do órgão mundial e, um ano depois, passou\na fazer parte do Hall da  Fama do Basquete, em Springfield,\nnos EUA.\n	Foi o primeiro jogador brasileiro de basquete a\nassinar um contrato profissional no exterior. Ele ganhou\nquatro medalhas em Mundiais com a seleção, com o título\nde 1963 sendo o maior momento de sua trajetória na modalidade.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Líder técnica da geração mais vitoriosa da\nhistória do basquete feminino brasileiro, Hortência\né reverenciada até hoje como a maior da  modalidade no\npaís. Em quadra, foi campeã dos Jogos Pan-Americanos de\nHavana-1991, campeã mundial em 1994 e medalhista de prata\nnos Jogos  Olímpicos de Atlanta, em 1996, assim como\nMagic Paula.\n	A Rainha Hortência, como ficou conhecida, deixou\nas quadras como a maior cestinha da história da seleção \nbrasileira e a melhor jogadora da história das Copas do\nMundo de basquete feminino.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos acontecerão no Estádio Pierre Mauroy\nna Arena Bercy, entre os dias 27 de Julho (Sábado) e\n11 de Agosto (Domingo). Programação Completa:\nhttps://olympics.com/pt/paris-2024/calendario/basquetebol\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//sétimo esporte - Basquete 3x3
			else if (esporte == 7)
			{
				printf("\n	O basquete 3x3, também conhecido como streetball\nou basquete três contra três, é um esporte originado do\nbasquete tradicional, diferenciando-se dele por ser\nrealizado em meia-quadra e cada um dos times ter apenas\ntrês jogadores e que teve suas origens nas ruas de Nova\nYork durante o século 20, sendo normalmente realizado em\nquadras ao ar livre.\n	Teve suas regras padronizadas em 2007 pela FIBA,\no que o tornou em um esporte formal, em junho de 2017,\nquando o Comitê Olímpico Internacional (COI) anunciou que\nseria um esporte olímpico oficial a partir dos Jogos de\nTóquio 2020.\nRegras do jogo: Um total de 64 atletas competirão em Paris\n2024 - o mesmo número de Tóquio 2020. Tanto no masculino\nquanto no feminino, oito equipes de quatro atletas (três em\nquadra e um suplente) competirão.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - André Ferros\n |2 - Jefferson Socas\n |3 - Thayná Silva\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	André Ferros começou no tradicional Sírio, de\nSão Paulo, aos sete anos, onde ficou até os 11. Depois,\nfez a base no Paulistano, até os 14 anos. Com 15, foi\npara o Palmeiras, onde conquistou o Paulista sub-15 e\nfoi convocado para a Seleção Paulista, sendo campeão\nbrasileiro em Anápolis. Aos 17, voltou para o Paulistano,\nonde ficou até os 20 anos. Com 23 anos, foi para o\nPinheiros, onde foi campeão paulista sub-23. Atuou pela\nLiga Nacional de Basquete, pela Liga Sorocabana. Com 24\nanos, entrou no São Paulo DC 3x3, sendo duas vezes\ncampeão da Liga, uma vez campeão brasileiro e junto da\nUNIP foi campeão mundial universitário.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Jefferson Socas começou no Colégio Bom Jesus,\nem Joinville, Santa Catarina. Jogou por Joinville até\nos 16 anos, quando foi para a Espanha atuar pelo\nSpartans e depois no Real Madrid. Na volta ao Brasil,\natuou por Franca, Basquete Cearense, Sorocaba, Remo,\nJoinville e Flamengo Blumenau. No 3x3, disputou torneio\ninternacional no México em 2016, por Joinville, e pelo\nSão Paulo DC, em 2019.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Em 2009, foi revelada pelo time da Mangueira.\nDepois, começou a jogar campeonatos da LSB pelo Novo\nBasquete Rio (NBR); jogou a Liga de Basquete Feminino\n(LBF) pelo time São Bernardo e, em 2020, foi anunciada\npela Sodiê Doces/LSB RJ, seu atual time.A jogadora\ntambém foi MVP da LBF por duas vezes consecutivas, em\n2021 e 2022. Além de ser Ala da Sodiê Mesquita, também\nfaz parte da Seleção Feminina de Basquete 5×5 e da\nSeleção Feminina de Basquete 3×3, equipes pelas quais\nfoi medalhista na AmericanCup 3×3 (2021) e medalhista\nde bronze na AmericanCup 5×5 (2021).\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos aconteceram no estádio de La Concorde,\nentre os dias 30 de Julho (terça-feira) até o dia 5 de\nAgosto (segunda-feira). Programação completa:\nhttps://olympics.com/pt/paris-2024/calendario/basquetebol-3x3\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//oitavo esporte - Futebol
			else if (esporte == 8)
			{
				printf("\n	O futebol é um esporte cujo campo de grama\napresenta 105 metros de comprimento por 68 metros de\nlargura, uma padronização da Fifa. Duas equipes compostas\npor 11 jogadores disputam uma partida em que o objetivo\né marcar o máximo possível de gols. Jogadas violentas podem\nser punidas com cartões amarelo (serve como advertência) e\nvermelho (expulsão do jogador), e somente o goleiro pode\nusar as mãos durante a partida. Faltas cometidas dentro\nda área são punidas com a marcação de pênalti (cobrança\nfeita de uma marca que fica a 11 metros do gol).\n	As partidas duram 90 minutos (divididos em dois\ntempos de 45 minutos), e as pausas são repostas com\nacréscimos determinados pelo árbitro. Em disputas\neliminatórias, comumente conhecidas como mata-mata,\nse o jogo estiver empatado é realizada a prorrogação,\ncomposta por 30 minutos (divididos em dois tempos de\n15 minutos). Caso a disputa permaneça empatada, haverá\ncobrança de pênaltis para definição do vencedor.\nPrimeira vez que o esporte foi jogado nas olimpíadas: \n1900 em Paris" );
				while (1)
				{	
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Vinicius Jr.\n |2 - Joelinton Cassio Apolinário de Lira\n |3 - Gabriel Martinelli\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	O atacante do Real Madrid foi, de maneira\nindiscutível, o principal brasileiro da Europa e do\nmundo desta temporada. Com a queda de produção de\nBenzema, Vini assumiu o protagonismo da equipe e foi\nfundamental nas campanhas nacionais e continentais.\nAlém de ter vivido momentos de extremo brilho, como\no grande gol marcado diante do Manchester City, na\npartida de ida das semis da Liga dos Campeões, foi o\núnico jogador no Velho Continente a somar dígitos\nduplos em gols e assistências, além de Lionel Messi:\nforam 23 gols e 21 assistências. O camisa 20 dos\nmerengues também se destacou fora de campo ao se\nposicionar como uma voz potente contra o racismo no\nfutebol espanhol\n");
							}
							else if (atleta == 2)
							{
								printf("\n	O multifuncional jogador do Newcastle foi um dos\nprincipais destaques da equipe. Dono de seis gols e duas\nassistências, o meia é presença garantida na equipe de\nEddie Howe e foi muito importante, também, quando\nutilizado como ponta esquerda. Ajudou, além disso, a\nmanter invencibilidade de 15 jogos alcançada pela equipe\nna liga.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	O ponta-esquerda da equipe do norte londrino foi,\nem muitos momentos, o melhor jogador da equipe na\ntemporada. Vibrante, rápido e de muito vigor físico, foi\nnominante no ataque dos Gunners com 15 gols e cinco\nassistências em 36 jogos na liga. Com apenas 21 anos,\nainda tem muita margem para crescer.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos acontecerão em vários estádios, dentre\neles: Parc des Princes, Stade de Bordeaux, entre outros\ne os jogos durarão desde o dia 24 de Julho (Quarta-feira)\naté o dia 10 de Agosto (Sábado). Programação completa:\nhttps://olympics.com/pt/paris-2024/calendario/futebol\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//nono esporte - Handebol
			else if (esporte == 9)
			{
				printf("\n	O handebol é um esporte coletivo de origem\nalemã, jogado por duas equipes de sete jogadores cada,\nincluindo um goleiro. O objetivo é marcar gols lançando\na bola com as mãos em direção ao gol adversário, em uma\npartida dividida em dois tempos de 30 minutos cada. No\nBrasil, o handebol é amplamente praticado, principalmente\nno contexto escolar, e tem uma modalidade adaptada para\ncadeirantes, promovendo inclusão e desenvolvimento social.\n	O sucesso do handebol brasileiro é notável,\nespecialmente no cenário feminino, onde a Seleção\nBrasileira conquistou o título mundial em 2013. Além disso,\natletas como Alexandra Priscila do Nascimento e Eduarda\nAmorim foram reconhecidas como as melhores do mundo em suas\népocas, destacando o potencial e a qualidade do handebol\nnacional. Com sua combinação de habilidade técnica, estratégia\ne trabalho em equipe, o handebol continua a crescer em\npopularidade e a ser uma fonte de orgulho e conquistas para\no Brasil.\nO handebol foi jogado pela primeira vez em uma olimpíada\nem 1936 em Berlim.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Luis Gustavo da Silva Garcia\n |2 - Rogério Moraes Ferreira\n |3 - Thiagus Petrus Gonçalves dos Santos\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Luis Gustavo da Silva Garcia saiu de Macapá-AP\nem 2015, com apenas 14 anos, e vem fazendo história na\nmodalidade. O atleta foi eleito o melhor jogador dos\nJogos Universitários Brasileiros (JUBs) de 2022, ganhando\na competição com a Unisul e já conquistou o título do\nBrasileiro Júnior em 2021, pelo Nacional-SC.\n O amapaense\nfoi vice-campeão da Liga Nacional e foi eleito o melhor\njogador da competição vestindo a camisa do Nacional-SC.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Rogério Moraes nasceu em 1994, em Abaetetuba/PA.\nCom uma estatura imponente, foi natural ele se destacar\nno handebol desde jovem. Após jogar por times locais,\nRogério mudou-se para a Europa, onde sua carreira decolou,\najudando seus clubes a conquistarem títulos importantes e\nfazendo parte vital da seleção brasileira.\n");
							}
							else if (atleta == 3)
							{
								printf ("\n	Thiagus Petrus nasceu em 1989, em São Bernardo\ndo Campo, e desde cedo mostrou aptidão para esportes.\nEscolheu o handebol durante a adolescência e se destacou\nrapidamente devido à sua excepcional habilidade defensiva.\nApós brilhar em competições nacionais, mudou-se para a\nEspanha, onde se tornou um dos principais defensores do\ncampeonato espanhol, e depois continuou sua carreira em\nclubes de elite europeus.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão na Arena 6 Paris Sul e no Estádio\nPierre Mauroy, entre o dia 25 de Julho (Quinta-feira)\naté o dia 11 de Agosto (Domingo). Programação completa:\nhttps://olympics.com/pt/paris-2024/calendario/handebol");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//décimo esporte - Hóquei sobre a grama
			else if (esporte == 10)
			{
				printf("\n	O hóquei sobre grama é uma modalidade esportiva\nna qual duas equipes competem para marcar gols, movendo\numa bola com tacos em um campo de grama. Originário da\nInglaterra no século 18, o esporte evoluiu significativamente\ndesde então, com a criação das primeiras regras em 1875\ne a introdução da área de arremesso em 1886, que impulsionou\no desenvolvimento tático e técnico do jogo.\n	O hóquei sobre grama foi incluído pela primeira\nvez nos Jogos Olímpicos em Londres-1908. Exceto pelas\nedições de Estocolmo-1912 e Paris-1924, o esporte tem\nsido parte do programa olímpico desde então. Inicialmente\ndisputado apenas pela categoria masculina, as mulheres\ncomeçaram a competir nas Olimpíadas a partir de Moscou-1980.\nAlgumas características principais do hóquei sobre grama\nincluem sua dinâmica rápida, habilidades de passe e dribles,\nalém da importância da estratégia e trabalho em equipe para\nalcançar o sucesso no campo.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - André Luiz Couto\n |2 - Matheus Borges Ferreira\n |3 - Bruno Mendonça\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	O carioca André Patrocínio, mais conhecido como\nMesquita, joga atualmente no Carioca Hóquei Clube. Em\n2013, com apenas 23 anos, participou do Campeonato\nSul-Americano de Hóquei sobre a Grama pela Seleção\nBrasileira, alcançando o terceiro lugar.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Companheiro de Mesquita no Carioca Hóquei Clube,\naos 27 anos, Matheus disputou duas vezes o Campeonato\nBrasileiro (2016 e 2017). Este meio-campista foi um dos\njogadores que fizeram história no hóquei sobre a grama\nno Brasil, representando a Seleção nos Jogos Olímpicos\nde 2016, quando o país disputou esta modalidade pela\nprimeira vez nas Olimpíadas.\n");
							}
							else if (atleta == 3)
							{
								printf ("\n	Ex-jogador do Carioca Hóquei Clube e atualmente\njogando pelo Rio Hockey Club, o zagueiro veterano, Bruno\nMendonça, de 37 anos, já disputou o Campeonato Brasileiro\nduas vezes pelo seu clube atual, além de também ter\nrepresentado a Seleção Brasileira nas Olimpíadas de 2016.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão no Estádio Yves-du-Manoir,\nentre os dias 27 de Julho (Sábado) até o dia 9 de Agosto\n(Sexta-Feira). Programação completa:\nhttps://olympics.com/pt/paris-2024/calendario/hoquei-sobre-grama\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//décimo primeiro esporte - Polo aquático
			else if (esporte == 11)
			{
				printf("\n	O polo aquático é um esporte aquático em que\nduas equipes competem para marcar gols em uma piscina,\nutilizando passes, dribles e tiros para vencer o\nadversário. Originado no final do século 19 na Inglaterra\ne na Escócia, o polo aquático evoluiu a partir de jogos\nde rugby adaptados para serem disputados na água.\n	A modalidade foi inserida pela primeira vez nos\nJogos Olímpicos em Paris-1900, mas não se tornou parte\nregular do programa olímpico até Londres-1908, com\ncompetições masculinas. As mulheres começaram a competir\nem polo aquático nas Olimpíadas a partir de Sydney-2000.\n	Características principais do polo aquático incluem\nsua intensidade física, resistência cardiovascular e\nhabilidades aquáticas como natação e flutuação. Além disso,\no esporte exige trabalho em equipe, estratégia e habilidades\nde arremesso e defesa para ter sucesso em uma partida.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Felipe Perrone\n |2 - Marina Canetti\n |3 - Gustavo Guilmarões\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Felipe Perrone é um atleta brasileiro de polo,\ne um dos maiores representantes do nosso país no\nesporte. Nascido no Rio de Janeiro, Felipe é naturalizado\nna Espanha, porém concorreu pela seleção brasileira nos\njogos olímpicos de 2016. Ele tem 3 medalhas mundiais e\n3 medalhas de campeonatos europeus. É filho do famoso\natleta Ricardo Perrone e irmão de Kiko Perrone que\ntambém pratica o esporte.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Mariana é mais uma grande atleta do Brasil no\ncenário feminino do polo aquático! Mariana Canetti\nnasceu no Rio de Janeiro e disputou o campeonato mundial\nde esportes aquáticos em Xangai em 2011. Nas olimpíadas\nde 2016 disputou pela seleção brasileira e finalizou\ncom a equipe em oitavo lugar.\n");
							}
							else if (atleta == 3)
							{
								printf ("\n	O atleta Gustavo Guimarães é mais um carioca no\ntime de polo aquático que representa o Brasil. Gustavo\ndesde novo começou no mundo dos esportes aquáticos como\npromessa nos times júnior. Ele estreou na seleção brasileira\nem 2010 e desde então disputou a olimpíada do Rio em 2016.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão no Centro Aquático e na Arena\nParis La Défense, entre o dia 27 de Julho (Sábado) e o\ndia 11 de Agosto (Domingo). Cronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/polo-aquatico\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}	
				}
			}
//décimo segundo esporte - Rugby seven
			else if (esporte == 12)
			{
				printf("\n	Rugby 7s, rugby de sete, râguebi de sete (português\neuropeu) ou rúgbi de sete (português brasileiro) é uma\nvariante do rugby sancionada pela World Rugby jogado com\napenas sete jogadores em cada time e em dois tempos de\nsete minutos cada. O rugby de sete é bastante popular na\nEuropa, na Oceania e em alguns países da Ásia. Em geral, a\nvariação exige mais destreza dos jogadores, por essa razão\neles geralmente são mais leves e rápidos comparados aos do\nrugby XV.O rugby sevens é um esporte que foi introduzido\npela primeira vez nos Jogos Olímpicos na edição de 2016.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma opção referente ao esporte escolhido: ");
					scanf("%i",&opcao);
					if (opcao == 0)
					{
						printf("Voltando para a lista de esportes\n");
						printf("--------------------------------\n");
						break;
					}
					else if (opcao == 1)
					{
						while (1)
						{
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Isadora Cerullo\n |2 - Paula Ishibashi\n |3 - Raquel Kochhann\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da seleção de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Isadora é uma jogadora de rugby sevens que\nrepresentou o Brasil nos Jogos Olímpicos de 2016, no\nRio de Janeiro. Ela é uma das figuras proeminentes do\nesporte no país.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Outra atleta que representou o Brasil nos Jogos\nOlímpicos de 2016. Ela é conhecida por sua habilidade e\ndeterminação em campo.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Raquel também é uma jogadora de rugby sevens que\njá representou o Brasil em competições internacionais.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrerão no Stade de France, entre o dia\n24 de Julho (Quarta-feira) até o dia 30 de Agosto (Terça\n-feira). Cronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/rugby-sevens");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda não foram defeinidos, aguarde por manutenções\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma opção válida\n--------------------------------\n");
					}
				}
			}
			else
			{
				printf("--------------------------------\nDigite uma opção válida\n--------------------------------\n");
			}		
		}

}

