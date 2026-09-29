#include <bits/stdc++.h>
using namespace std;

int main(){
    //& eh AND
    //| eh or
    //^ eh xor
    //~ eh not
    // << ou >> eh shift que eh deslocar
    int x = 7;          //0111
    int y = 12;         //1100
    cout << "O bin 0111 and 1100 eh 0100 = ";
    cout << (x & y) << "\n\n";

    cout << "O bin 0111 or 1100 eh 1111 = ";
    cout << (x | y) << "\n\n";

    cout << "Por fim o bin 0111 xor 1100 eh 1011 = ";
    cout << (x ^ y) << "\n\n";

    cout << "Para transormar um num negativo usamos ~ + 1: \n";
    cout << "O inverso de 7 eh " << (~x + 1) << "\n\n";

    cout << "Sobre o shift, se fizermos para a esquerda multiplicamos por potencias de 2 i.e 1^2, 2^2n\n";
    cout << "7 << 1 = " << (x << 1) << "\n";
    cout << "O mesmo acontece para a direita, mas dividindo\n";
    cout << "7 >> 1 = " << (7 >> 1) << "\n\n";

    //agora as operacoes de testar, ligar, desligar e alternar

    x = 21;         //10101
    //testar um bit e ver se ele eh 1 ou 0
    cout << "Vamos testar se o bit de 7 = 10101 esta ligado ou desligado\n";
    if(x & (1 << 2)){   //se x and 1 << 2 isto eh 100 for 1 eh porque o bit de x esta ligado
        cout << "O bit 3 de 21 esta ligado\n\n";
    }else{
        cout << "O bit 3 de 21 esta desligado\n\n";
    }
    //Pode ser usado o (x >> i) & 1
    if(x & (1 << 3)){   
        cout << "O bit 4 de 21 esta ligado\n\n";
    }else{
        cout << "O bit 4 de 21 esta desligado\n\n";
    }

    //Agora para ligar um bit
    cout << "Vamos ligar o bit 4 de 21\n";
    x = x | (1 << 3);   //desloco 1 tres casas, logo 1000 e 10101 or 1000 = 11101
    cout << "10101 com o bit 4 ligado eh 11101 que eh = " << x << "\n\n";

    //Agora desligar um bit
    cout << "Vamos agora desligar esse bit 4 de 29 e voltar a 21\n";
    x = x & ~(1 << 3);  //temos 1000, como not eh 0111 e como eh And entao se o bit for 1 o da casa 4 eh desligado
    cout << "11101 com o bit 4 desligado eh = " << x << "\n\n";

    //Agora alternar o bit ou trocar de 0 para 1 e vice-versa
    cout << "Vamos inverter agora o terceiro bit de 10101\n";
    x = x ^ (1 << 2);   //como estamos fazendo uma xor e botamos o 1, entao se no x for 1 ele vai ser 0 e se for 0 ele vai ser 1
    cout << "Teremos 10001 que eh = " << x << "\n\n";
    
    //Agora o bit menos significativo
    x = 14;
    cout << "vamos achar o bit menos significativo de 14 = 1110\n";
    cout << "o bit menos significativo de 1110 eh o segundo que torna o num = " << (x&-x) << "\n\n";
    //invertemos 1110 para 0001 + 1 = 0010 e quando fazemos os and, retornamos so o que tem 1 no primeiro numero
    return 0;   
}