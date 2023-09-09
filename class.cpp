#include <iostream>
#include <sstream>
using namespace std;

class Student {
    public:
        // setter members
        void set_age(int a) { age = a; }
        void set_standard(int s) { standard = s; }
        void set_first_name(string f) { first = f; }
        void set_last_name(string l) { last = l; }

        // getter members
        int get_age() { return age; }
        int get_standard() { return standard; }
        string get_first_name() { return first; }
        string get_last_name() { return last; }

        // member function that outputs info with commas :)
        
        string to_string() {
            stringstream ss;
            char ch = ',';
            ss << age << ch << first << ch << last << ch << standard;
            ss >> str;
             
            return str;  
        }

    private:
        int age;
        int standard;
        string first;
        string last;
        string str;
      

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
