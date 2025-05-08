# Bağlı Liste (Linked List) Uygulaması - C++

Bu proje, C++ dilinde tek yönlü (singly) bağlı liste veri yapısının temel işlemlerini içermektedir.

## 🔧 Özellikler

- Başa eleman ekleme (`insertAtBeginning`)
- Sona eleman ekleme (`insertAtEnd`)
- Belirli bir düğümden sonra eleman ekleme (`insertAfter`)
- Belirli bir değeri silme (`deleteValue`)
- Listeyi yazdırma (`printList`)
- Destructor (yıkıcı fonksiyon) ile bellek temizliği

## 🧠 Kullanılan Yapılar

- `Node` yapısı: Veriyi (`int data`) ve bir sonraki düğümün adresini (`Node* next`) tutar.
- `LinkedList` sınıfı: Tüm işlemleri kapsayan sınıftır, `head` pointer'ı ile liste yönetilir.

## ▶️ Örnek Akış

1. Listeye başa ve sona elemanlar eklenir.
2. Değeri `15` olan düğüm bulunduktan sonra `insertAfter()` ile hemen arkasına `56` eklenir.
3. Değeri `10` olan düğüm silinir.
4. Son hali `printList()` fonksiyonu ile yazdırılır.

## 🖥️ Kod Çıktısı (Örnek)

15 -> 10 -> 20 -> 30 -> NULL
15 -> 56 -> 20 -> 30 -> NULL

## 💾 Bellek Güvenliği

Destructor fonksiyonu sayesinde tüm düğümler program sonunda serbest bırakılır (delete işlemiyle), böylece bellek sızıntısı önlenir.

---

# Linked List Application - C++

This project implements the basic operations of a singly linked list in C++.

## 🔧 Features

- Insert at beginning (`insertAtBeginning`)
- Insert at end (`insertAtEnd`)
- Insert after a specific node (`insertAfter`)
- Delete a node by value (`deleteValue`)
- Print the list (`printList`)
- Destructor for memory cleanup

## 🧠 Data Structures

- `Node` struct: Holds integer data and pointer to the next node.
- `LinkedList` class: Manages the list with a `head` pointer and supports various operations.

## ▶️ Example Flow

1. Elements are added to the beginning and end of the list.
2. After finding the node with value `15`, `56` is inserted immediately after it using `insertAfter()`.
3. Node with value `10` is deleted.
4. Final list state is printed using `printList()`.

## 🖥️ Sample Output

15 -> 10 -> 20 -> 30 -> NULL
15 -> 56 -> 20 -> 30 -> NULL

## 💾 Memory Safety

A destructor is implemented to ensure all nodes are properly deleted at the end of the program, preventing memory leaks.
