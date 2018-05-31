#include"QueueArray.h"
#include"QueueArray.cpp"
#include"QueueList.h"
#include"QueueList.cpp"

int main() {

	
		Queue_arr <int> s;
		s.push(4);
		s.push(8);
		while (!s.empty()) {
			cout << s.front() << endl;
			s.pop();
		}
		

		Queue_list <int> ss;
		ss.push(6);
		ss.push(5);
		while (!ss.empty()) {
			cout << ss.front() << endl;
			ss.pop();
		}

	system("pause");
	return 0;
}