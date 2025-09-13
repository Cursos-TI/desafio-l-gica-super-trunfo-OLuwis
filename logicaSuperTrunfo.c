#include <stdio.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
	int qntdCartas = 0;
	int codigo1, codigo2, codigo3;
	int populacao1, populacao2, populacao3;
	int pontosTurismo1, pontosTurismo2, pontosTurismo3;
	float pib1, pib2, pib3;
	float area1, area2, area3;

	int opcao1, opcao2;

	printf("\n");
	printf(" Bem-vindo ao Super Trunfo");
	printf("\n");

	do {
		printf("\n");
		printf(" Opções:");
		printf("\n");

		printf("\n");
		printf(" 1 - Comparar Cartas");
		printf("\n");
		printf(" 2 - Adicionar Cartas");
		printf("\n");
		printf(" 3 - Apagar Cartas");
		printf("\n");
		printf(" 4 - Sair jogo");
		printf("\n");

		printf("\n");
		scanf("%d", &opcao1);

		if (opcao1 == 4) {
			return 0;
		}

		if (opcao1 != 1 && opcao1 != 2 && opcao1 != 3) {
			printf("\n");
			printf(" Opção Inválida ");
			printf("\n");
		}

		if (opcao1 == 1) {
			opcao1 = 0;

			bool slotA, slotB;
			int codigoA, codigoB;
			int populacaoA, populacaoB;
			int pontosTurismoA, pontosTurismoB;
			float pibA, pibB;
			float areaA, areaB;

			do {
				if (qntdCartas < 2) {
					opcao2 = 0;
					printf("\n");
					printf(" Necessário duas cartas minimamente");
					printf("\n");
					break;
				}

				printf("\n");
				printf(" Opções:");
				printf("\n");

				for (int i = 1; i <= qntdCartas; i++) {
					printf("\n");
					printf(" %d - Carta %d", i, i);
				}

				printf("\n");
				printf(" 4 - Voltar");
				printf("\n");

				printf("\n");
				printf(" Selecione a carta A:");
				printf("\n");

				scanf("%d", &opcao2);

				if (opcao2 == 4) {
					opcao2 = 0;
					opcao1 = 0;
					break;
				}

				if (opcao2 == 3 && qntdCartas < 3) {
					opcao2 = 0;

					printf("\n");
					printf(" Opção Inválida:");
					printf("\n");
				}

				if (opcao2 == 1) {
					codigoA = codigo1;
					populacaoA = populacao1;
					pibA = pib1;
					areaA = area1;
					pontosTurismoA = pontosTurismo1;
				}

				if (opcao2 == 2) {
					codigoA = codigo2;
					populacaoA = populacao2;
					pibA = pib2;
					areaA = area2;
					pontosTurismoA = pontosTurismo2;
				}

				if (opcao2 == 3) {
					codigoA = codigo3;
					populacaoA = populacao3;
					pibA = pib3;
					areaA = area3;
					pontosTurismoA = pontosTurismo3;
				}

				if (opcao2 != 0) {
					printf("\n");
					printf(" Selecione a carta B:");
					printf("\n");

					scanf("%d", &opcao2);
				}

				if (opcao2 == 4) {
					opcao2 = 0;
					opcao1 = 0;
					break;
				}

				if (opcao2 == 3 && qntdCartas < 3) {
					opcao2 = 0;

					printf("\n");
					printf(" Opção Inválida:");
					printf("\n");
				}

				if (opcao2 == 1) {
					codigoB = codigo1;
					populacaoB = populacao1;
					pibB = pib1;
					areaB = area1;
					pontosTurismoB = pontosTurismo1;
				}

				if (opcao2 == 2) {
					codigoB = codigo2;
					populacaoB = populacao2;
					pibB = pib2;
					areaB = area2;
					pontosTurismoB = pontosTurismo2;
				}

				if (opcao2 == 3) {
					codigoB = codigo3;
					populacaoB = populacao3;
					pibB = pib3;
					areaB = area3;
					pontosTurismoB = pontosTurismo3;
				}

				if (opcao2 != 0) {
					opcao2 = 0;

					do {
						printf("\n");
						printf(" Opções:");
						printf("\n");

						printf("\n");
						printf(" 1 - População");
						printf("\n");
						printf(" 2 - PIB");
						printf("\n");
						printf(" 3 - Área");
						printf("\n");
						printf(" 4 - Pontos de Turismo");
						printf("\n");
						printf(" 5 - Voltar");
						printf("\n");

						printf("\n");
						printf(" Selecione o critério de comparação");
						printf("\n");

						scanf("%d", &opcao2);

						if (opcao2 == 5) {
							opcao2 = 0;
							break;
						}

						if (opcao2 != 1 && opcao2 != 2 && opcao2 != 3 && opcao2 != 4) {
							printf("\n");
							printf(" Opção Inválida ");
							printf("\n");
						}

						if (opcao2 == 1) {
							if (populacaoA == populacaoB) {
								printf("\n");
								printf(" As cartas empataram no critério: População");
								printf("\n");
								break;
							}

							if (populacaoA > populacaoB) {
								printf("\n");
								printf(" Carta A ganhou no critério: População");
								printf("\n");
							} else {
								printf("\n");
								printf(" Carta B ganhou no critério: População");
								printf("\n");
							}
						}

						if (opcao2 == 2) {
							if (pibA == pibB) {
								printf("\n");
								printf(" As cartas empataram no critério: PIB");
								printf("\n");
								break;
							}

							if (pibA > pibB) {
								printf("\n");
								printf(" Carta A ganhou no critério: PIB");
								printf("\n");
							} else {
								printf("\n");
								printf(" Carta B ganhou no critério: PIB");
								printf("\n");
							}
						}

						if (opcao2 == 3) {
							if (areaA == areaB) {
								printf("\n");
								printf(" As cartas empataram no critério: Área");
								printf("\n");
								break;
							}

							if (areaA > areaB) {
								printf("\n");
								printf(" Carta A ganhou no critério: Área");
								printf("\n");
							} else {
								printf("\n");
								printf(" Carta B ganhou no critério: Área");
								printf("\n");
							}
						}

						if (opcao2 == 4) {
							if (pontosTurismoA == pontosTurismoB) {
								printf("\n");
								printf(" As cartas empataram no critério: Pontos de Turismo");
								printf("\n");
								break;
							}

							if (pontosTurismoA > pontosTurismoB) {
								printf("\n");
								printf(" Carta A ganhou no critério: Pontos de Turismo");
								printf("\n");
							} else {
								printf("\n");
								printf(" Carta B ganhou no critério: Pontos de Turismo");
								printf("\n");
							}
						}
					} while (opcao2 != 1 && opcao2 != 2 && opcao2 != 3 && opcao2 != 4);
				}
			} while (opcao2 != 1 && opcao2 != 2 && opcao2 != 3 && opcao2 != 4);
		}

		if (opcao1 == 2) {	
			opcao1 = 0;
			if (qntdCartas < 3) {
				if (qntdCartas == 0) {
					printf("\n");
					printf(" Insira o código da Carta:");
					printf("\n");
					scanf("%d", &codigo1);

					printf("\n");
					printf(" Insira a população da Carta:");
					printf("\n");
					scanf("%d", &populacao1);

					printf("\n");
					printf(" Insira o PIB da Carta:");
					printf("\n");
					scanf("%f", &pib1);

					printf("\n");
					printf(" Insira a área da Carta:");
					printf("\n");
					scanf("%f", &area1);

					printf("\n");
					printf(" Insira o número de pontos turísticos da Carta:");
					printf("\n");
					scanf("%d", &pontosTurismo1);
				}

				if (qntdCartas == 1) {
					printf("\n");
					printf(" Insira o código da Carta:");
					printf("\n");
					scanf("%d", &codigo2);

					printf("\n");
					printf(" Insira a população da Carta:");
					printf("\n");
					scanf("%d", &populacao2);

					printf("\n");
					printf(" Insira o PIB da Carta:");
					printf("\n");
					scanf("%f", &pib2);

					printf("\n");
					printf(" Insira a área da Carta:");
					printf("\n");
					scanf("%f", &area2);

					printf("\n");
					printf(" Insira o número de pontos turísticos da Carta:");
					printf("\n");
					scanf("%d", &pontosTurismo2);
				}

				if (qntdCartas == 2) {
					printf("\n");
					printf(" Insira o código da Carta:");
					printf("\n");
					scanf("%d", &codigo3);

					printf("\n");
					printf(" Insira a população da Carta:");
					printf("\n");
					scanf("%d", &populacao3);

					printf("\n");
					printf(" Insira o PIB da Carta:");
					printf("\n");
					scanf("%f", &pib3);

					printf("\n");
					printf(" Insira a área da Carta:");
					printf("\n");
					scanf("%f", &area3);

					printf("\n");
					printf(" Insira o número de pontos turísticos da Carta:");
					printf("\n");
					scanf("%d", &pontosTurismo3);
				}

				qntdCartas++;
			}

			if (qntdCartas >= 3) {
				printf("\n");
				printf(" Máximo de cartas atingido");
				printf("\n");
			}
		}

		if (opcao1 == 3) {
			do {
				printf("\n");
				printf(" Opcões:");
				printf("\n");

				for (int i = 1; i <= qntdCartas; i++) {
					printf("\n");
					printf(" %d - Carta %d", i, i);
				}

				printf("\n");
				printf(" 4 - Voltar");
				printf("\n");

				printf("\n");
				scanf("%d", &opcao2);

				if (opcao2 <= qntdCartas) {
					if (opcao2 == 3) {
						codigo3 = 0;
						populacao3 = 0;
						pib3 = 0;
						area3 = 0;
						pontosTurismo3 = 0;
					}

					if (opcao2 == 2) {
						codigo2 = codigo3;
						populacao2 = populacao3;
						pib2 = pib3;
						area2 = area3;
						pontosTurismo2 = pontosTurismo3;

						codigo3 = 0;
						populacao3 = 0;
						pib3 = 0;
						area3 = 0;
						pontosTurismo3 = 0;
					}

					if (opcao2 == 1) {
						codigo1 = codigo2;
						populacao1 = populacao2;
						pib1 = pib2;
						area1 = area2;
						pontosTurismo1 = pontosTurismo2;

						codigo2 = codigo3;
						populacao2 = populacao3;
						pib2 = pib3;
						area2 = area3;
						pontosTurismo2 = pontosTurismo3;

						codigo3 = 0;
						populacao3 = 0;
						pib3 = 0;
						area3 = 0;
						pontosTurismo3 = 0;
					}

					opcao2 = 0;
					opcao1 = 0;
					qntdCartas--;
				}
				
				if (opcao2 == 4) {
					opcao2 = 0;
					opcao1 = 0;
					break;
				}

				if (opcao2 > qntdCartas) {
					opcao2 = 0;
					opcao1 = 0;

					printf("\n");
					printf(" Opção Inválida ");
					printf("\n");
				}
			} while (opcao2 != 1 && opcao2 != 2 && opcao2 != 3);
		}
	} while (opcao1 != 1 && opcao1 != 2 && opcao1 != 3);

    return 0;
}
