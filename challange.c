# include <stdio.h>
# include <stdlib.h>

# define PAYRATE 12.00
# define TAXRATE_300 .15
# define TAXRATE_150 .20
# define TAXRATE_REST .25
# define OVERTIME 40

int main(){

    // declare variables
    int hours = 0;
    double grossPAY = 0.0;
    double taxes = 0.0;
    double netPAY = 0.0;

    printf("Digite o número de horas trabalhadas nessa semana: ");

    // input
    scanf("%d", &hours);

    // calculate the grosspay
    if(hours <= 40){
        grossPAY = hours * PAYRATE;
    }
    else{
        grossPAY = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPAY += overTimePay;
    }

    // calculate taxes
    if(grossPAY <= 300){
        taxes = grossPAY * TAXRATE_300;
    }
    else if(grossPAY > 300 && grossPAY <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPAY - 300) * TAXRATE_150;
    }
    else if(grossPAY > 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPAY - 450) * TAXRATE_REST;
    }

    // calcule the netpay
    netPAY = grossPAY - taxes;

    // display
    printf("Seu pagamento gross desta semana é: %.2f\n", grossPAY);
    printf("Suas taxas desta semana são: %.2f\n", taxes);
    printf("Seu pagamento total é: %.2f\n", netPAY);    
    scanf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    return 0;
}