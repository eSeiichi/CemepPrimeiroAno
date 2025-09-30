//desenvolvido por Enzo Yamakawa n�7 e Gabriel Oliveira n�8 1�Y
#include <locale.h>
#include <stdio.h>
int main()
{
	char esporte,opcao,atleta;
	setlocale(LC_ALL, "Portuguese");
//come�o do loop dos esportes
	while (1)
		{
		printf("	Ol�, todos sabemos que os jogos ol�mpicos est�o chegando,\nporque n�o aprender um pouco mais sobre esportes de invas�o e \nesportes de rede?\n	Esportes de rede: re�ne modalidades que se caracterizam \npor arremessar, lan�ar ou rebater a bola em dire��o a setores \nda quadra advers�ria nos quais o rival seja incapaz de devolv�-la\nda mesma forma ou que leve o advers�rio a cometer um erro dentro \ndo per�odo de tempo em que o objeto do jogo est� em movimento.\n");
		printf(" |1-Badminton\n |2-T�nis\n |3-T�nis de mesa\n |4-V�lei\n |5-V�lei de praia\n");
		printf("	Esportes de invas�o: conjunto de modalidades que se \ncaracterizam por comparar a capacidade de uma equipe introduzir \nou levar uma bola (ou outro objeto) a uma meta ou setor da quadra \ncampo defendido pelos advers�rios (gol, cesta, touchdown etc.),\nprotegendo, simultaneamente, o pr�prio alvo, meta ou \nsetor do campo.");

		printf(" \n |6 - Basquete\n |7 - Basquete 3x3 \n |8 - Futebol\n |9 - Handebol\n |10 - H�quei\n |11 - Polo Aqu�tico\n |12 - Rugby Seven\n");
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
				printf("\n	O Badminton � um esporte origin�rio da �ndia, mas que \ntornou-se popular em todo o mundo, especialmente na �sia, Europa \ne Am�rica do Norte, na qual pode ser praticado de forma individual \nou em pares. � bastante parecido com o t�nis e o v�lei de praia, \npor�m � praticado com raquete e um volante ou pena deve passar \npor cima de uma rede que divide ao meio o campo.O objetivo � marcar \nmais pontos que o advers�rio, com jogadas que requerem velocidade, \nagilidade, reflexos r�pidos e habilidade t�cnica.Eventos de badminton \ns�o realizados em todo o mundo, inclusive nas Olimp�adas, desde 1992 \nnos Jogos de Barcelona.\n");
				while (1)
				{
					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
									printf("saindo da sele��o de atletas...\n--------------------------------\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Ygor � um dos destaques do badminton brasileiro e j� \nconquistou v�rias medalhas em competi��es internacionais, incluindo \no ouro nnos Jogos Pan-Americanos de 2019.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Fabiana � outra atleta de destaque no cen�rio nacional e \ninternacional do badminton. Ela tamb�m possui v�rias medalhas \nem competi��es pan-americanas.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Daniel � um dos principais jogadores brasileiros de badminton, \ncompetindo tanto em eventos individuais quanto em duplas masculinas. \nEle tamb�m conquistou medalhas em competi��es pan-americanas.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o na Arena La Chapelle, entre o dia\n27 de Julho (S�bado) at� o dia 5 de Agosto (Segunda-feira).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/badminton");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//segundo esporte - t�nis
			else if (esporte == 2)
			{
				printf("\n	O t�nis fez parte do programa dos Jogos Ol�mpicos na\nedi��o inaugural, Atena s 1896, e perdurou at� os Jogos\nde Paris 1924, quando foi removido a partir da edi��o\nde Amsterd� 1928. Ap�s duas apari��es como esporte de\ndemonstra��o (M�xico 1968 e Los Angeles 1984), o t�nis\nretornou como esporte ol�mpico nos Jogos de Seul 1988, \nsendo disputado em todas suas edi��es desde ent�o.\n	Disputado individualmente ou em duplas, com bola\ne raquete, o t�nis tem como principal fundamento rebater\na bola para a quadra advers�ria at� que o jogador ou a\ndupla oponente n�o consiga rebater novamente de volta.\n	O objetivo � impedir que a bola quique no seu\nlado mais de uma vez.\n	O t�nis pode ser disputado em tr�s tipos de quadra:\n�Quadras de saibro: piso � feito de uma mistura de terra\nbatida com p� de telha.\n�Quadra r�pida: com piso sint�tico, de cimento, carpete\nou asfalto\n�Quadra de grama.\n");
				while (1)
				{	
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Luisa Veras Stefani\n |2 - Fabiana Ariel Meligeni\n |3 - Andr� Rezende S�\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Luisa Veras Stefani � uma tenista brasileira, \nmedalhista ol�mpica e primeira mulher brasileira, na Era \nAberta, a entrar no Top 10 do ranking de duplas da WTA.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Fernando Ariel Meligeni, tamb�m conhecido por\nFininho, � um ex-tenista profissional brasileiro, e\nque atualmente trabalha como comentarista nos canais\nESPN-Fox Sports. � considerado por diversos analistas\nesportivos, cr�ticos de t�nis e antigos tenistas como\num dos dez maiores tenistas brasileiros da Era Aberta.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Andr� Rezende S� � um ex-tenista brasileiro,\nnascido no estado de Minas Gerais. Se profissionalizou\nem 1996 e se aposentou em 2018, aos 40 anos, ap�s cair\nnas quartas de final do Brasil Open, jogando ao lado de\nThomaz Bellucci, de quem � t�cnico atualmente.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o no Stade Roland-Garros, entre o\ndia 27 de Julho (S�bado) at� o dia 4 de Agosto (Domingo).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/tenis");
					}	
					else if (opcao == 3)
					{
						printf("\n	Os resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//terceiro esporte - t�nis de mesa
			else if (esporte == 3)
			{
				printf("\n	O t�nis de mesa, tamb�m conhecido � o jogo em\nque duas pessoas ou duas duplas usam raquetes de madeira\npara passar uma bolinha de um lado a outro de uma rede\ninstalada em uma mesa na qual a divide em duas partes\niguais.\n	O t�nis de mesa foi criado na Inglaterra, no\ns�culo 19 e foi reconhecimento do Comit� Ol�mpico\nInternacional veio em 1977. Quatro anos mais tarde,\no t�nis de mesa foi aceito no programa das Olimp�adas.\nA estreia ocorreu em 1988, em Seul. O t�nis de mesa �\npraticado numa mesa que possui 2,74 metros de comprimento\npor 1,45 metro de largura. A altura da mesa deve ficar\na 76 cm de dist�ncia do solo. No meio da mesa � fixada\numa rede com 1,83 metro de comprimento e 15,25 cm de\naltura. O objetivo do jogo � marcar pontos.\n");
				while (1)
				{					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Hugo Hoyama\n |2 - Cl�udio Mitsuhiro Kano\n |3 - Bruna Yumi Takahashi\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Considerado o maior jogador brasileiro de todos\nos tempos, Hugo Hoyama � um mesa-tenista brasileiro,\ntendo participado de seis Olimp�adas e sete Jogos\nPan-Americanos. Em 2012 classificou-se pela Sociedade\nEsportiva Palmeiras para as Olimp�adas de Londres,\ntendo sido eliminado na primeira fase da competi��o.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Foi um jogador de t�nis de mesa brasileiro de\nempunhadura caneta canhota. Tinha como destaque em seu\njogo sua grande habilidade nos saques e seu shoto\n");
							}
							else if (atleta == 3)
							{
								printf("\n	� uma mesa-tenista ol�mpica brasileira. Chegou\na ser a n�mero 17 do mundo em junho de 2022, sendo uma\ndas melhores jogadoras das Am�ricas no ranking mundial\nda ITTF, depois de Adriana D�az, de Porto Rico, que j�\nfoi no 9 do mundo, sendo a melhor jogadora de t�nis de\nmesa da hist�ria do Brasil.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o na Arena 4 Paris Sul, entre o dia\n27 de Julho (S�bado) at� o dia 9 de Agosto (Sexta-feira).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/tenis-de-mesa");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//quarto esporte - voleibol
			else if (esporte == 4)
			{
				printf("\n	O voleibol ou v�lei � um esporte coletivo praticado\nem uma quadra dividida por uma rede. Duas equipes disputam\na partida com o objetivo de tocar a bola no campo advers�rio,\na qual deve ser arremessada por cima da rede. O esporte\n� um dos mais populares no Brasil e no mundo em termos\nde praticantes e audi�ncia.O v�lei foi criado em 1895,\npelo americano William G. Morgan, ent�o diretor de\nEduca��o F�sica da Associa��o Crist� de Mo�os (ACM) na\ncidade de Holyoke, em Massachusetts, nos Estados Unidos.\nFez sua estreia Ol�mpica nos Jogos de T�quio 1964.\n	Cada time � composto por 6 jogadores em quadra\ne 6 jogadores reserva. Ap�s o saque, cada time s� poder�\ntocar a bola tr�s vezes, sendo proibido que um jogador\ntoque a bola duas vezes seguidas. A equipe vencedora �\naquela que ganhar o maior n�mero de sets.\n");
				while (1)
				{
					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Giba conquistou o mundo e se tornou uma refer�ncia\npara jogadores de todas as gera��es. Suas atua��es foram\nessenciais para a conquista dos t�tulos ol�mpicos em Atenas\n2004 e no Rio 2016. Giba � uma inspira��o para todos os\napaixonados por v�lei e segue sendo reconhecido como\num dos melhores, mesmo ap�s se aposentar das quadras.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Sheilla � uma estrela do cen�rio do v�lei\nfeminino brasileiro. Sua versatilidade em diferentes\nposi��es na quadra e precis�o nos ataques, marcou uma\ngera��o e ser� para sempre lembrada. Sua trajet�ria �\num exemplo de dedica��o e sucesso no esporte, ela foi\nimportante nas conquistas ol�mpicas de Pequim 2008 e\nLondres 2012, acumulou t�tulos e entrou para a hist�ria.\n	Aos 38 anos se despediu das quadras e encerrou\nesse ciclo sendo uma das maiores do Brasil.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Como jogador, conquistou o cora��o dos f�s\natrav�s de suas t�cnicas impec�veis e grande paix�o\npelo esporte. Mais tarde, j� como t�cnico da sele��o\nmasculina, conquistou junto ao time duas medalhas de\nouro ol�mpicas. Sua lideran�a incr�vel e habilidades\no tornaram um dos treinadores mais respeitados do mundo\ne um dos maiores jogadores de v�lei do Brasil.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o na Arena 1 Paris Sul, entre o dia\n27 de Julho (S�bado) at� o dia 11 de Agosto (Domingo).\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/volei");
					}	
					else if (opcao == 3)
					{
						printf("--------------------------------\n\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//quinto esporte - V�lei de praia
			else if (esporte == 5)
			{
				while (1)
				{
					printf("\n	O v�lei ou voleibol de praia � um jogo disputado\npor quatro jogadores, numa quadra de areia, dividida\nna metade por uma rede. O objetivo � lan�ar a bola com\nas m�os e fazer com que ela caia na quadra do advers�rio.\nO v�lei de praia ol�mpico � disputado por duplas,\nposicionadas uma de cada lado da quadra e separadas por\numa rede. O principal objetivo do jogo � fazer com que\na bola toque o solo advers�rio, mas, para que o ponto\nseja v�lido, a bola deve passar entre as duas antenas\nposicionadas nas extremidades da rede.\n	O v�lei de praia fez sua estreia Ol�mpica nos\nJogos de Atlanta 1996 depois de aparecer pela primeira\nvez como esporte de demonstra��o nos Jogos Ol�mpicos de\n1992, em Barcelona.\n");
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Carolina Voltar \n |1 - Carolina Salgado Collett Solberg\n |2 - B�rbara Seixas de Freitas\n |3 - Ana Patr�cia Silva Ramos\nEscolha algum dos Atletas para saber mais sobre ele:");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	� uma jogadora brasileira atuante no V�lei de\npraia, modalidade na qual conquistou foi semifinalista\nno Mundial na categoria infanto-juvenil em 2002.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	(Rio de Janeiro, 8 de mar�o de 1987) � uma\njogadora de voleibol de praia brasileira, campe� mundial\ne do Circuito Mundial em 2015 e medalhista ol�mpica em 2016.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	� uma voleibolista brasileira praticante da\nmodalidade de v�lei de praia e que foi ex-voleibolista\nindoor.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o no Est�dio Torre Eiffel, entre o \ndia 27 de Julho (S�bado) at� o dia 10 de Agosto (S�bado)\nCronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/volei-de-praia");
					}	
					else if (opcao == 3)
					{
						printf("--------------------------------\n\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//sexto esporte - Basquete
			else if (esporte == 6)
			{
				printf("\n	O basquete, que em ingl�s significa bola no cesto,\nfoi criado em 1891 pelo pastor canadense presbiteriano e\ntamb�m professor de educa��o f�sica da Associa��o Crist� de\nMo�os, James Naismith e foi jogado pela primeira vez no\nBrasil em 1906.\n	O jogo � disputado por duas equipes de cinco jogadores\nque tem por objetivo passar a bola por dentro do cesto\ndisposto nas extremidades do campo, desta forma marcando\npontos. O jogo � iniciado com o lan�amento da bola no ar.\nA dura��o � de quatro per�odos de dez minutos, com um\nintervalo de meio  tempo entre o segundo e o terceiro per�odo.\n");
				while (1)
				{					
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Anderson Varej�o\n |2 - Ubiratan\n |3 - Hort�ncia Marcari\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Varej�o � o �nico brasileiro a ter sido campe�o\nda Euroliga atualmente. Ele conseguiu o feito defendendo\no Barcelona, quando tinha  20 anos. O clube catal�o\nlevantou o trof�u europeu de basquete em 2003, tornou um\n�dolo do Cleveland Cavaliers, onde permaneceu por 12 anos,\nest� no top-10 jogadores com mais partidas pela equipe de\nOhio e � o quinto na lista de atletas com mais rebotes na\nhist�ria.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Considerado o maior piv� brasileiro de todos os\ntempos, Ubiratan entrou para a Ordem de M�rito da\nFedera��o Internacional de Basquete (Fiba) em  1994.\nEm agosto de 2009, o ex-jogador foi eleito para integrar\no Hall da Fama do �rg�o mundial e, um ano depois, passou\na fazer parte do Hall da  Fama do Basquete, em Springfield,\nnos EUA.\n	Foi o primeiro jogador brasileiro de basquete a\nassinar um contrato profissional no exterior. Ele ganhou\nquatro medalhas em Mundiais com a sele��o, com o t�tulo\nde 1963 sendo o maior momento de sua trajet�ria na modalidade.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	L�der t�cnica da gera��o mais vitoriosa da\nhist�ria do basquete feminino brasileiro, Hort�ncia\n� reverenciada at� hoje como a maior da  modalidade no\npa�s. Em quadra, foi campe� dos Jogos Pan-Americanos de\nHavana-1991, campe� mundial em 1994 e medalhista de prata\nnos Jogos  Ol�mpicos de Atlanta, em 1996, assim como\nMagic Paula.\n	A Rainha Hort�ncia, como ficou conhecida, deixou\nas quadras como a maior cestinha da hist�ria da sele��o \nbrasileira e a melhor jogadora da hist�ria das Copas do\nMundo de basquete feminino.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos acontecer�o no Est�dio Pierre Mauroy\nna Arena Bercy, entre os dias 27 de Julho (S�bado) e\n11 de Agosto (Domingo). Programa��o Completa:\nhttps://olympics.com/pt/paris-2024/calendario/basquetebol\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//s�timo esporte - Basquete 3x3
			else if (esporte == 7)
			{
				printf("\n	O basquete 3x3, tamb�m conhecido como streetball\nou basquete tr�s contra tr�s, � um esporte originado do\nbasquete tradicional, diferenciando-se dele por ser\nrealizado em meia-quadra e cada um dos times ter apenas\ntr�s jogadores e que teve suas origens nas ruas de Nova\nYork durante o s�culo 20, sendo normalmente realizado em\nquadras ao ar livre.\n	Teve suas regras padronizadas em 2007 pela FIBA,\no que o tornou em um esporte formal, em junho de 2017,\nquando o Comit� Ol�mpico Internacional (COI) anunciou que\nseria um esporte ol�mpico oficial a partir dos Jogos de\nT�quio 2020.\nRegras do jogo: Um total de 64 atletas competir�o em Paris\n2024 - o mesmo n�mero de T�quio 2020. Tanto no masculino\nquanto no feminino, oito equipes de quatro atletas (tr�s em\nquadra e um suplente) competir�o.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Andr� Ferros\n |2 - Jefferson Socas\n |3 - Thayn� Silva\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Andr� Ferros come�ou no tradicional S�rio, de\nS�o Paulo, aos sete anos, onde ficou at� os 11. Depois,\nfez a base no Paulistano, at� os 14 anos. Com 15, foi\npara o Palmeiras, onde conquistou o Paulista sub-15 e\nfoi convocado para a Sele��o Paulista, sendo campe�o\nbrasileiro em An�polis. Aos 17, voltou para o Paulistano,\nonde ficou at� os 20 anos. Com 23 anos, foi para o\nPinheiros, onde foi campe�o paulista sub-23. Atuou pela\nLiga Nacional de Basquete, pela Liga Sorocabana. Com 24\nanos, entrou no S�o Paulo DC 3x3, sendo duas vezes\ncampe�o da Liga, uma vez campe�o brasileiro e junto da\nUNIP foi campe�o mundial universit�rio.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Jefferson Socas come�ou no Col�gio Bom Jesus,\nem Joinville, Santa Catarina. Jogou por Joinville at�\nos 16 anos, quando foi para a Espanha atuar pelo\nSpartans e depois no Real Madrid. Na volta ao Brasil,\natuou por Franca, Basquete Cearense, Sorocaba, Remo,\nJoinville e Flamengo Blumenau. No 3x3, disputou torneio\ninternacional no M�xico em 2016, por Joinville, e pelo\nS�o Paulo DC, em 2019.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Em 2009, foi revelada pelo time da Mangueira.\nDepois, come�ou a jogar campeonatos da LSB pelo Novo\nBasquete Rio (NBR); jogou a Liga de Basquete Feminino\n(LBF) pelo time S�o Bernardo e, em 2020, foi anunciada\npela Sodi� Doces/LSB RJ, seu atual time.A jogadora\ntamb�m foi MVP da LBF por duas vezes consecutivas, em\n2021 e 2022. Al�m de ser Ala da Sodi� Mesquita, tamb�m\nfaz parte da Sele��o Feminina de Basquete 5�5 e da\nSele��o Feminina de Basquete 3�3, equipes pelas quais\nfoi medalhista na AmericanCup 3�3 (2021) e medalhista\nde bronze na AmericanCup 5�5 (2021).\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos aconteceram no est�dio de La Concorde,\nentre os dias 30 de Julho (ter�a-feira) at� o dia 5 de\nAgosto (segunda-feira). Programa��o completa:\nhttps://olympics.com/pt/paris-2024/calendario/basquetebol-3x3\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//oitavo esporte - Futebol
			else if (esporte == 8)
			{
				printf("\n	O futebol � um esporte cujo campo de grama\napresenta 105 metros de comprimento por 68 metros de\nlargura, uma padroniza��o da Fifa. Duas equipes compostas\npor 11 jogadores disputam uma partida em que o objetivo\n� marcar o m�ximo poss�vel de gols. Jogadas violentas podem\nser punidas com cart�es amarelo (serve como advert�ncia) e\nvermelho (expuls�o do jogador), e somente o goleiro pode\nusar as m�os durante a partida. Faltas cometidas dentro\nda �rea s�o punidas com a marca��o de p�nalti (cobran�a\nfeita de uma marca que fica a 11 metros do gol).\n	As partidas duram 90 minutos (divididos em dois\ntempos de 45 minutos), e as pausas s�o repostas com\nacr�scimos determinados pelo �rbitro. Em disputas\neliminat�rias, comumente conhecidas como mata-mata,\nse o jogo estiver empatado � realizada a prorroga��o,\ncomposta por 30 minutos (divididos em dois tempos de\n15 minutos). Caso a disputa permane�a empatada, haver�\ncobran�a de p�naltis para defini��o do vencedor.\nPrimeira vez que o esporte foi jogado nas olimp�adas: \n1900 em Paris" );
				while (1)
				{	
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Vinicius Jr.\n |2 - Joelinton Cassio Apolin�rio de Lira\n |3 - Gabriel Martinelli\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	O atacante do Real Madrid foi, de maneira\nindiscut�vel, o principal brasileiro da Europa e do\nmundo desta temporada. Com a queda de produ��o de\nBenzema, Vini assumiu o protagonismo da equipe e foi\nfundamental nas campanhas nacionais e continentais.\nAl�m de ter vivido momentos de extremo brilho, como\no grande gol marcado diante do Manchester City, na\npartida de ida das semis da Liga dos Campe�es, foi o\n�nico jogador no Velho Continente a somar d�gitos\nduplos em gols e assist�ncias, al�m de Lionel Messi:\nforam 23 gols e 21 assist�ncias. O camisa 20 dos\nmerengues tamb�m se destacou fora de campo ao se\nposicionar como uma voz potente contra o racismo no\nfutebol espanhol\n");
							}
							else if (atleta == 2)
							{
								printf("\n	O multifuncional jogador do Newcastle foi um dos\nprincipais destaques da equipe. Dono de seis gols e duas\nassist�ncias, o meia � presen�a garantida na equipe de\nEddie Howe e foi muito importante, tamb�m, quando\nutilizado como ponta esquerda. Ajudou, al�m disso, a\nmanter invencibilidade de 15 jogos alcan�ada pela equipe\nna liga.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	O ponta-esquerda da equipe do norte londrino foi,\nem muitos momentos, o melhor jogador da equipe na\ntemporada. Vibrante, r�pido e de muito vigor f�sico, foi\nnominante no ataque dos Gunners com 15 gols e cinco\nassist�ncias em 36 jogos na liga. Com apenas 21 anos,\nainda tem muita margem para crescer.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos acontecer�o em v�rios est�dios, dentre\neles: Parc des Princes, Stade de Bordeaux, entre outros\ne os jogos durar�o desde o dia 24 de Julho (Quarta-feira)\nat� o dia 10 de Agosto (S�bado). Programa��o completa:\nhttps://olympics.com/pt/paris-2024/calendario/futebol\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//nono esporte - Handebol
			else if (esporte == 9)
			{
				printf("\n	O handebol � um esporte coletivo de origem\nalem�, jogado por duas equipes de sete jogadores cada,\nincluindo um goleiro. O objetivo � marcar gols lan�ando\na bola com as m�os em dire��o ao gol advers�rio, em uma\npartida dividida em dois tempos de 30 minutos cada. No\nBrasil, o handebol � amplamente praticado, principalmente\nno contexto escolar, e tem uma modalidade adaptada para\ncadeirantes, promovendo inclus�o e desenvolvimento social.\n	O sucesso do handebol brasileiro � not�vel,\nespecialmente no cen�rio feminino, onde a Sele��o\nBrasileira conquistou o t�tulo mundial em 2013. Al�m disso,\natletas como Alexandra Priscila do Nascimento e Eduarda\nAmorim foram reconhecidas como as melhores do mundo em suas\n�pocas, destacando o potencial e a qualidade do handebol\nnacional. Com sua combina��o de habilidade t�cnica, estrat�gia\ne trabalho em equipe, o handebol continua a crescer em\npopularidade e a ser uma fonte de orgulho e conquistas para\no Brasil.\nO handebol foi jogado pela primeira vez em uma olimp�ada\nem 1936 em Berlim.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Luis Gustavo da Silva Garcia\n |2 - Rog�rio Moraes Ferreira\n |3 - Thiagus Petrus Gon�alves dos Santos\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Luis Gustavo da Silva Garcia saiu de Macap�-AP\nem 2015, com apenas 14 anos, e vem fazendo hist�ria na\nmodalidade. O atleta foi eleito o melhor jogador dos\nJogos Universit�rios Brasileiros (JUBs) de 2022, ganhando\na competi��o com a Unisul e j� conquistou o t�tulo do\nBrasileiro J�nior em 2021, pelo Nacional-SC.\n O amapaense\nfoi vice-campe�o da Liga Nacional e foi eleito o melhor\njogador da competi��o vestindo a camisa do Nacional-SC.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Rog�rio Moraes nasceu em 1994, em Abaetetuba/PA.\nCom uma estatura imponente, foi natural ele se destacar\nno handebol desde jovem. Ap�s jogar por times locais,\nRog�rio mudou-se para a Europa, onde sua carreira decolou,\najudando seus clubes a conquistarem t�tulos importantes e\nfazendo parte vital da sele��o brasileira.\n");
							}
							else if (atleta == 3)
							{
								printf ("\n	Thiagus Petrus nasceu em 1989, em S�o Bernardo\ndo Campo, e desde cedo mostrou aptid�o para esportes.\nEscolheu o handebol durante a adolesc�ncia e se destacou\nrapidamente devido � sua excepcional habilidade defensiva.\nAp�s brilhar em competi��es nacionais, mudou-se para a\nEspanha, onde se tornou um dos principais defensores do\ncampeonato espanhol, e depois continuou sua carreira em\nclubes de elite europeus.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o na Arena 6 Paris Sul e no Est�dio\nPierre Mauroy, entre o dia 25 de Julho (Quinta-feira)\nat� o dia 11 de Agosto (Domingo). Programa��o completa:\nhttps://olympics.com/pt/paris-2024/calendario/handebol");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//d�cimo esporte - H�quei sobre a grama
			else if (esporte == 10)
			{
				printf("\n	O h�quei sobre grama � uma modalidade esportiva\nna qual duas equipes competem para marcar gols, movendo\numa bola com tacos em um campo de grama. Origin�rio da\nInglaterra no s�culo 18, o esporte evoluiu significativamente\ndesde ent�o, com a cria��o das primeiras regras em 1875\ne a introdu��o da �rea de arremesso em 1886, que impulsionou\no desenvolvimento t�tico e t�cnico do jogo.\n	O h�quei sobre grama foi inclu�do pela primeira\nvez nos Jogos Ol�mpicos em Londres-1908. Exceto pelas\nedi��es de Estocolmo-1912 e Paris-1924, o esporte tem\nsido parte do programa ol�mpico desde ent�o. Inicialmente\ndisputado apenas pela categoria masculina, as mulheres\ncome�aram a competir nas Olimp�adas a partir de Moscou-1980.\nAlgumas caracter�sticas principais do h�quei sobre grama\nincluem sua din�mica r�pida, habilidades de passe e dribles,\nal�m da import�ncia da estrat�gia e trabalho em equipe para\nalcan�ar o sucesso no campo.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Andr� Luiz Couto\n |2 - Matheus Borges Ferreira\n |3 - Bruno Mendon�a\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	O carioca Andr� Patroc�nio, mais conhecido como\nMesquita, joga atualmente no Carioca H�quei Clube. Em\n2013, com apenas 23 anos, participou do Campeonato\nSul-Americano de H�quei sobre a Grama pela Sele��o\nBrasileira, alcan�ando o terceiro lugar.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Companheiro de Mesquita no Carioca H�quei Clube,\naos 27 anos, Matheus disputou duas vezes o Campeonato\nBrasileiro (2016 e 2017). Este meio-campista foi um dos\njogadores que fizeram hist�ria no h�quei sobre a grama\nno Brasil, representando a Sele��o nos Jogos Ol�mpicos\nde 2016, quando o pa�s disputou esta modalidade pela\nprimeira vez nas Olimp�adas.\n");
							}
							else if (atleta == 3)
							{
								printf ("\n	Ex-jogador do Carioca H�quei Clube e atualmente\njogando pelo Rio Hockey Club, o zagueiro veterano, Bruno\nMendon�a, de 37 anos, j� disputou o Campeonato Brasileiro\nduas vezes pelo seu clube atual, al�m de tamb�m ter\nrepresentado a Sele��o Brasileira nas Olimp�adas de 2016.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o no Est�dio Yves-du-Manoir,\nentre os dias 27 de Julho (S�bado) at� o dia 9 de Agosto\n(Sexta-Feira). Programa��o completa:\nhttps://olympics.com/pt/paris-2024/calendario/hoquei-sobre-grama\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//d�cimo primeiro esporte - Polo aqu�tico
			else if (esporte == 11)
			{
				printf("\n	O polo aqu�tico � um esporte aqu�tico em que\nduas equipes competem para marcar gols em uma piscina,\nutilizando passes, dribles e tiros para vencer o\nadvers�rio. Originado no final do s�culo 19 na Inglaterra\ne na Esc�cia, o polo aqu�tico evoluiu a partir de jogos\nde rugby adaptados para serem disputados na �gua.\n	A modalidade foi inserida pela primeira vez nos\nJogos Ol�mpicos em Paris-1900, mas n�o se tornou parte\nregular do programa ol�mpico at� Londres-1908, com\ncompeti��es masculinas. As mulheres come�aram a competir\nem polo aqu�tico nas Olimp�adas a partir de Sydney-2000.\n	Caracter�sticas principais do polo aqu�tico incluem\nsua intensidade f�sica, resist�ncia cardiovascular e\nhabilidades aqu�ticas como nata��o e flutua��o. Al�m disso,\no esporte exige trabalho em equipe, estrat�gia e habilidades\nde arremesso e defesa para ter sucesso em uma partida.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
							printf("--------------------------------\n\n |0 - Voltar \n |1 - Felipe Perrone\n |2 - Marina Canetti\n |3 - Gustavo Guilmar�es\nEscolha algum dos Atletas para saber mais sobre ele: ");
							scanf("%i",&atleta);
							if (atleta == 0)
								{
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Felipe Perrone � um atleta brasileiro de polo,\ne um dos maiores representantes do nosso pa�s no\nesporte. Nascido no Rio de Janeiro, Felipe � naturalizado\nna Espanha, por�m concorreu pela sele��o brasileira nos\njogos ol�mpicos de 2016. Ele tem 3 medalhas mundiais e\n3 medalhas de campeonatos europeus. � filho do famoso\natleta Ricardo Perrone e irm�o de Kiko Perrone que\ntamb�m pratica o esporte.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Mariana � mais uma grande atleta do Brasil no\ncen�rio feminino do polo aqu�tico! Mariana Canetti\nnasceu no Rio de Janeiro e disputou o campeonato mundial\nde esportes aqu�ticos em Xangai em 2011. Nas olimp�adas\nde 2016 disputou pela sele��o brasileira e finalizou\ncom a equipe em oitavo lugar.\n");
							}
							else if (atleta == 3)
							{
								printf ("\n	O atleta Gustavo Guimar�es � mais um carioca no\ntime de polo aqu�tico que representa o Brasil. Gustavo\ndesde novo come�ou no mundo dos esportes aqu�ticos como\npromessa nos times j�nior. Ele estreou na sele��o brasileira\nem 2010 e desde ent�o disputou a olimp�ada do Rio em 2016.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o no Centro Aqu�tico e na Arena\nParis La D�fense, entre o dia 27 de Julho (S�bado) e o\ndia 11 de Agosto (Domingo). Cronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/polo-aquatico\n");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}	
				}
			}
//d�cimo segundo esporte - Rugby seven
			else if (esporte == 12)
			{
				printf("\n	Rugby 7s, rugby de sete, r�guebi de sete (portugu�s\neuropeu) ou r�gbi de sete (portugu�s brasileiro) � uma\nvariante do rugby sancionada pela World Rugby jogado com\napenas sete jogadores em cada time e em dois tempos de\nsete minutos cada. O rugby de sete � bastante popular na\nEuropa, na Oceania e em alguns pa�ses da �sia. Em geral, a\nvaria��o exige mais destreza dos jogadores, por essa raz�o\neles geralmente s�o mais leves e r�pidos comparados aos do\nrugby XV.O rugby sevens � um esporte que foi introduzido\npela primeira vez nos Jogos Ol�mpicos na edi��o de 2016.\n");
				while (1)
				{
					printf("\n |0 - voltar a lista de esportes\n |1 - atletas\n |2 - dias e datas e lugares\n |3 - resultados dos jogos\nSelecione uma op��o referente ao esporte escolhido: ");
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
									printf("saindo da sele��o de atletas\n");
									break;
								}
							else if (atleta == 1)
							{
								printf("\n	Isadora � uma jogadora de rugby sevens que\nrepresentou o Brasil nos Jogos Ol�mpicos de 2016, no\nRio de Janeiro. Ela � uma das figuras proeminentes do\nesporte no pa�s.\n");
							}
							else if (atleta == 2)
							{
								printf("\n	Outra atleta que representou o Brasil nos Jogos\nOl�mpicos de 2016. Ela � conhecida por sua habilidade e\ndetermina��o em campo.\n");
							}
							else if (atleta == 3)
							{
								printf("\n	Raquel tamb�m � uma jogadora de rugby sevens que\nj� representou o Brasil em competi��es internacionais.\n");
							}	
							else
							{
								printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
							}
						}
					}
					else if (opcao == 2)
					{
						printf("\n	Os jogos ocorrer�o no Stade de France, entre o dia\n24 de Julho (Quarta-feira) at� o dia 30 de Agosto (Ter�a\n-feira). Cronograma completo:\nhttps://olympics.com/pt/paris-2024/calendario/rugby-sevens");
					}	
					else if (opcao == 3)
					{
						printf("\nOs resultados ainda n�o foram defeinidos, aguarde por manuten��es\n--------------------------------\n");
					}
					else
					{
						printf("\n--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
					}
				}
			}
			else
			{
				printf("--------------------------------\nDigite uma op��o v�lida\n--------------------------------\n");
			}		
		}

}

