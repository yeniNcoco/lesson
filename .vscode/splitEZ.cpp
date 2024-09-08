#include <string>       // std::string
#include <iostream>     // std::cout
#include <vector>      // std::vectors
#include <sstream>      // string stream

using namespace std;

vector<string> SplitWords(string sentence) //string을 입력받아서 string으로 이뤄진 vector 구성.
{
	string word;
	istringstream iss(sentence);//out of sentence
	vector<string> v;
	while (iss >> word)
	{
		v.push_back(word);
	}
	return v;
}


int main() {
	vector<string> words;
	string sentence;

	while (true) {

		// prompt
		cout << "enter your command> ";
		// get line >>쓰면 띄어쓰기 전까지 짤림
		getline(cin, sentence);
		// split into words
		words = SplitWords(sentence);

		// if they press return just ignore that
		if (words.size() == 0) continue;

		// check for quit
		if (words[0] == "quit") {
			cout << "Goodbye" << endl;
			break;
		}

		// print vector
		for (int i = 0; i < words.size(); i++) {
			cout << words[i] << endl;
		}

	}
	return 1;
}
