#include <iostream>
#include <string>

using namespace std;

class Book  {
	private:
		string title;
		int chapter;
		int page;
	public:
		void setBook(string bookTitle, int bookChapter, int bookPage) {
			title = bookTitle;
			chapter = bookChapter;
			page = bookPage;
		}
		void getInf() {
			cout << "Book: " << title << endl << "Chapter: " << chapter << endl << "Page: " << page << endl;
		}
};

int main() {
	string title;
	int chapter, page;
	cout << "Enter book title: ";
	cin >> title;
	cout << "Enter chapter: ";
	cin >> chapter;
	cout << "Enter page: ";
	cin >> page;
	Book book1;
	book1.setBook(title, chapter, page);
	book1.getInf();
	
	return 0;
}
