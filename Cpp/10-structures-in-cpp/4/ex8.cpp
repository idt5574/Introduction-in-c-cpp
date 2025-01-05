#include <iostream>
#include <cstring>

typedef struct {
	char author[50];	// автор
	char title[100];	// заголовок
	short year;		// год издания
} BOOK;

struct Node {
public:
	BOOK data;
	Node* next;

public:
	Node(char author[50], char title[100], short year) {
		strcpy(data.author, author);
        strcpy(data.title, title);
        data.year = year;
		this->next = NULL;
	}
};

struct OneLinkedList {
public:
	Node* head, * tail;

public:
	OneLinkedList() {
		this->head = this->tail = NULL;
	}

	~OneLinkedList() {
		while (head != NULL) pop_front();
	}

	void pop_front() {
		if (head == NULL) return;
		if (head == tail) {
			delete tail;
			head = tail = NULL;
			return;
		}

		Node* node = head;
		head = node->next;
		delete node;
	}

	void push_back(char author[50], char title[100], short year) {
		Node* node = new Node(author, title, year);
		if (head == NULL) head = node;
		if (tail != NULL) tail->next = node;
		tail = node;
	}

	void push_front(char author[50], char title[100], short year) {
		Node* node = new Node(author, title, year);
		node->next = head;
		head = node;
		if (tail == NULL) tail = node;
	}

	void pop_back() {
		if (tail == NULL) return;
		if (head == tail) {
			delete tail;
			head = tail = NULL;
			return;
		}

		Node* node = head;
		for (; node->next != tail; node = node->next);

		node->next = NULL;
		delete tail;
		tail = node;
	}

	Node* getAt(int k) {
		if (k < 0) return NULL;

		Node* node = head;
		int n = 0;
		while (node && n != k && node->next) {
			node = node->next;
			n++;
		}

		return (n == k) ? node : NULL;
	}

	void insert(int k, char author[50], char title[100], short year) {
		Node* left = getAt(k);
		if (left == NULL) return;

		Node* right = left->next;
		Node* node = new Node(author, title, year);

		left->next = node;
		node->next = right;
		if (right == NULL) tail = node;
	}

	void erase(int k) {
		if (k < 0) return;
		if (k == 0) {
			pop_front();
			return;
		}

		Node* left = getAt(k - 1);
		Node* node = left->next;
		if (node == NULL) return;

		Node* right = node->next;
		left->next = right;
		if (node == tail) tail = left;
		delete node;
	}
};

int main(void)
{
    using namespace std;
    
    OneLinkedList lib;
	lib.push_front("Пушкин А.С.", "Пиковая дама", 2007);
	lib.push_back("Тургенев И.С.", "Муму", 2011);
    lib.push_back("Толстой А.Н.", "Аэлита", 1995);
    lib.push_back("Балакирев С.М.", "Моя жизнь, мои достижения", 2045);

    // __assertion_tests(lib);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}