class Book:
    def __init__(self, title, author, overall_copies):
        self.title = title
        self.author = author
        self.total_copies = overall_copies
        self.present_copies = overall_copies

    def issued(self):
        if self.present_copies >=1 :
            self.present_copies -= 1
            return True
        else:
            return False

    def returned_book(self):
        self.present_copies +=1

class Student:
    def __init__(self, name, Roll_no):
        self.name = name
        self.Roll_no = Roll_no
        self.issued_books = []

    def issued_book(self, book):
        if book.issued():
            self.issued_books.append(book)

    def returned_book(self, book):
        if book in self.issued_books:
            self.issued_books.remove(book)
            book.returned_book()

class Library:
    def __init__(self):
        self.books = []
        self.Student = []

    def add_book(self, book):
        self.books.append(book)

    def remove_book(self, book):
        if book in self.books:
            self.books.remove(book)

    def add_Student(self, Student):
        self.Student.append(Student)

    def remove_Student(self, Student):
        if Student in self.Students:
            self.Student.remove(Student)

    def list_books(self):
        for book in self.books:
            print(f"Title: {book.title}, Author: {book.author}, Available Copies: {book.present_copies}")

    def list_Student(self):
        for Student in self.Student:
            print(f"Name: {Student.name}, Student roll.no: {Student.Roll_no}")
