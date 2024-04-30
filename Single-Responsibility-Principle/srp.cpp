#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
    string name;
    int id;
    string email;

public:
    Usuario(string UserName, int UserId, string UserEmail) 
        : name(UserName), id(UserId), email(UserEmail) {}

    void print() const {
        cout << "Nome: " << name << ", ID: " << id << ", Email: " << email << endl;
    }
};

int main() {
    Usuario test("Gabriel", 123, "teste@gmail.com");
    test.print();

    return 0;
}
