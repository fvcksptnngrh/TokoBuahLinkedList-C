#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Fruit {
    char name[50];
    float price;
    int quantity;
};

struct Node {
    struct Fruit data;
    struct Node* next;
};

void insert(struct Node** head, char name[], float price, int quantity) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) { // Periksa jika malloc gagal
        perror("Gagal mengalokasikan memori");
        exit(EXIT_FAILURE); // Keluar jika gagal
    }
    strcpy(newNode->data.name, name);
    newNode->data.price = price;
    newNode->data.quantity = quantity;
    newNode->next = *head;
    *head = newNode;
}

void display(struct Node* head) {
    struct Node* current = head;
    float total = 0;
    printf("\n%-20s %-20s %-13s %-10s\n", "Nama Buah", "Harga per item", "Jumlah", "Total");
    while (current != NULL) {
        printf("%-20s %-20.2f %-13d %-10.2f\n", current->data.name, current->data.price,
               current->data.quantity, current->data.price * current->data.quantity);
        total += current->data.price * current->data.quantity;
        current = current->next;
    }
    printf("\nTOTAL PEMBAYARAN: %.2f\n", total);
}

int main() {
    struct Node* head = NULL;
    char name[50];
    float price;
    int quantity;
    while (1) {
        printf("Masukan Jenis Buah (string kosong untuk berhenti) : ");
        fgets(name, 50, stdin);
        name[strlen(name) - 1] = '\0'; // remove newline character
        if (strlen(name) == 0) {
            break;
        }
        printf("Masukan Harga satuan: ");
        scanf("%f", &price);
        printf("Masukan Jumlah pembelian: ");
        scanf("%d", &quantity);
        getchar(); // consume newline character
        insert(&head, name, price, quantity);
    }
    display(head);
    return 0;
}