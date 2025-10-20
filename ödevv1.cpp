#include <stdio.h>
#include <conio.h>
main()
 {
int sayi1, sayi2, sayi3, sayi4, toplam = 0, asal;
    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    for(sayi3 = sayi1 + 1; sayi3 < sayi2; sayi3++) {
        asal = 1;
        for(sayi4 = 2; sayi4 < sayi3; sayi4++) {
            if(sayi3 % sayi4 == 0)
                asal = 0;
        }
        if(asal == 1)
            toplam = toplam + sayi3;
    }

    printf("Toplam = %d", toplam);
    return 0;
}
