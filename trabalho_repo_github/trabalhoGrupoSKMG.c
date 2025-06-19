

#include <stdio.h>
#include <unistd.h>  // Para usar sleep()

void loadingBar() {
    const int barWidth = 30;

    printf("\nProcessando");
    for (int i = 0; i <= barWidth; i++) {
        printf(".");
        fflush(stdout);
        usleep(100000); // 0.1 segundo
    }
    printf("\n\n");
}

int main() {
    // Estilo decorativo com ASCII Art
    printf("============================================\n");
    printf("||                                        ||\n");
    printf("||       💻 FAZENDO O TRABALHO AGORA...     ||\n");
    printf("||                                        ||\n");
    printf("============================================\n");

    loadingBar();

    printf("✅ Trabalho em andamento com sucesso!\n");
    printf("============================================\n");

    return 0;
}
