#include<iostream>
using namespace std;

bool isPalindrome(int l, int r, string &s){
	if(l >= r)
		return true;
	if(s[l] != s[r])
		return false;
	return isPalindrome(l + 1, r - 1, s);
}

int main(){
	string s;
	cout << "Type any word to check is it Palindrome or not: ";
	cin >> s;

	if(isPalindrome(0, s.size() - 1, s))
		cout << s + " is palindrome.";
	else
		cout << s + " is not palindrome.";
	
	return 0;
}