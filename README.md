# Program Kasir Toko Buah Sederhana (C & Linked List)

Program C sederhana ini berfungsi sebagai simulasi kasir toko buah. Program menggunakan struktur data linked list untuk menyimpan data buah yang dibeli (nama, harga satuan, jumlah) dan kemudian menampilkan daftar belanja beserta total pembayarannya.

## Fitur

* Memasukkan data buah (nama, harga, jumlah) secara berulang.
* Menyimpan data menggunakan *singly linked list*.
* Menampilkan daftar buah yang sudah dimasukkan beserta total harga per item.
* Menghitung dan menampilkan total pembayaran keseluruhan.
* Berhenti memasukkan data dengan menginput string kosong (menekan Enter tanpa mengetik nama buah).

## Prasyarat

* Compiler C (seperti **GCC**, disarankan via MinGW-w64 untuk Windows).

## Cara Kompilasi dan Menjalankan

1.  **Pastikan Compiler GCC Terinstal:** Dan pastikan `gcc` dapat diakses dari terminal Anda (sudah ditambahkan ke PATH).
2.  **Buka Terminal:** Buka terminal (Command Prompt, PowerShell, Git Bash, atau terminal VS Code) di direktori tempat Anda menyimpan file `linkedlist.c`.
3.  **Kompilasi:** Jalankan perintah berikut untuk mengompilasi kode:
    ```bash
    gcc linkedlist.c -o linkedlist -Wall -Wextra
    ```
    * Ini akan menghasilkan file executable bernama `linkedlist.exe` (Windows) atau `linkedlist` (Linux/macOS).
4.  **Jalankan:** Jalankan program yang sudah dikompilasi:
    * **Windows:**
        ```bash
        .\linkedlist.exe
        ```
    * **Linux/macOS:**
        ```bash
        ./linkedlist
        ```
5.  Ikuti instruksi di layar untuk memasukkan data buah.
