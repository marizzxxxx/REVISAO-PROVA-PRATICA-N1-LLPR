#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		int nasc, cod, contri, conta1, conta2;
		
		printf("Informe o seu código:");
		scanf("%d", &cod);
		
		printf("Informe o ano que você nasceu:");
		scanf("%d", &nasc);
		
		printf("Informe o ano que ingressou na esmpresa:");
		scanf("%d", &contri);
		
		conta1 = 2022 - nasc;
		
		conta2 = 2022 - contri;
		
	if(conta1>=65 || conta2>= 30 || (conta1>=60 && conta2>=25)) {
		printf("O funcionário tem %d e trabalha à = %d.\nRequerer Aposentadoria.", conta1, conta2);
	} else {
		printf("Não Requerer.", conta1, conta2);
	}
	 	
	return 0;
	}
	
