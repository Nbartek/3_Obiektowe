#include <iostream>
#include <string>
#include "User.h"
#include "Guest.h"
#include "UserRepo.h"
#include "ILogin.h"
using namespace std;

int main() {
	UserRepo repo;
	
	for (User* u : repo.users) {
		
		ILogin* u1 = dynamic_cast<ILogin*>(u);
		if (u1 != nullptr) {
			cout << u->Info() << endl;
		}
	}
	
	for (User* u : repo.users) {
		cout << u->Info() << endl;
	}
	return 0;
}