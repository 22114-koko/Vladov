#include <iostream>
#include "Author.h"
#include "Book.h"
#include "Member.h"
#include "Loan.h"
#include "Library.h"
using namespace std;

int Book::totalBooks = 0;

int main()
{
    Library lib;

    Author a{"Dimitar Talev", 1900};

    Book b1{"Zhelezniyat Svetilnik", a, 1945, 30.00, "ISBN-101"};
    Book b2{"Prezhivyat Bog", a, 1953, 28.40, "ISBN-102"};

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addMember(Member{"Petar Petrov", "M001", 2023});

    cout << lib.to_string() << "\n";

    if (lib.loanBook("ISBN-101", "M001", "2025-11-03", "2025-11-17"))
        cout << "Loan created.\n";

    cout << "\nAvailable ISBN-101? " << boolalpha << lib.isBookAvailable("ISBN-101") << "\n";
    lib.returnBook("ISBN-101", "M001");
    cout << "Available ISBN-101? " << boolalpha << lib.isBookAvailable("ISBN-101") << "\n\n";

    for (const auto& bk : lib.findByAuthor("Dimitar Talev")) {
        cout << bk.to_string() << "\n";
    }

    return 0;
}
