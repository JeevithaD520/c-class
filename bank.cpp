#include <iostream.
#include <vector>
using namespace std;

class person
{
public:
    string name;
    string pan_card_number;
    Person(string person_name, string person_pan)
    {
        name=user_name;
        pancard=person-pan;
    }

    void display_details()
    {
        cout<<"user details"<<endl;
        cout<<"username:"<<name<<endl;
        cout<<"pancard:"<<pancard_number<<endl;
        cout<<"==================================="<<endl;
    }
};

int main()
{
    int options;
    
    string name,pancard;
    vector<person> list_of_users;

    while(true)
    {
        cout<<"choose an option 1 or 2:"<<endl;
        cin>>a;

        switch(a)
        {
            case 1:
            cout<<"create account."<<endl;
            cout<<"enter the name:"<,endl;
        cin>>name;
        cout<<"enter the pancard:"<<endl;
        cin.>pancard;
            break;
            case 2:
            cout<<"view account."<,endl;
            cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the pancard:"<<endl;
        cin>>pancard;
        break;
        default:
        cout<<"invalid"<<endl;
        }
        break;
    }
}
