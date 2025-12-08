1) Author

Представя автор с име и година на раждане.

Членове:

string name

int birthYear

Функционалност:

конструктори (default + параметризиращ)

string to_string() const

getters + setters (валидиране за периода 1850–2025)

const-коректност

2) Book

Представя книга в библиотеката.

Членове:

string title

Author author

int year

double price

string isbn

Статични членове:

static int totalBooks – брои активните Book обекти

Rule of 5:

копиращ конструктор

преместващ конструктор

копиращ оператор

преместващ оператор

деструктор

Методи:

string to_string() const

setters + валидации (цената ≥ 0, годината в диапазон)

static int getTotalBooks()

3) Member

Читател, регистриран в библиотеката.

Членове:

string name

string memberId

int yearJoined

Методи:

валидация: memberId не може да е празен

string to_string() const

4) Loan

Представя заем на книга от член.

Членове:

string isbn

string memberId

string startDate

string dueDate

bool returned

Методи:

void markReturned()

bool isOverdue(const string&) const

string to_string() const

Валидация:

dueDate >= startDate
(лексикографска проверка YYYY-MM-DD)

5) Library

Управлява всички книги, членове и заеми.

Членове:

vector<Book> books

vector<Member> members

vector<Loan> loans

Функционалност:

addBook(), addMember()

bool hasBook(const string&) const

bool isBookAvailable(const string&) const

bool loanBook(...)

bool returnBook(...)

vector<Book> findByAuthor(const string&) const

string to_string() const
(обобщена информация: брой книги, членове, активни заеми)
Library info:
Books: 2
Members: 1
Active loans: 0

Loan created.
Available ISBN-101? false
Available ISBN-101? true

Book: Zhelezniyat Svetilnik (1945)
Author: Dimitar Talev (1900)
Price: 30.00
ISBN: ISBN-101

Book: Prezhivyat Bog (1953)
Author: Dimitar Talev (1900)
Price: 28.40
ISBN: ISBN-102
