#include <iostream>
#include<string>
#include<vector>
#include<regex>
#include<random>

using namespace std;

class BirthNumber {
public:
    int k;
    string name;
    string s1, s2, s3, s4, s5, s6, s7, s8, s9,str,str1;
    

    BirthNumber(int _year, int _month, int _day)
        : year_(_year), month_(_month), day_(_day) {}

    void Hyouji(const char* mes) const {//計算した運命数を出力する

        cout << name << mes << birth_number_ << endl;
    }



    void Keisan() {//運命数の計算を行う
        int b1 = sum_digits(year_)
            + sum_digits(month_)
            + sum_digits(day_);

        while (b1 > 9) {//9以下になるまで

            b1 = sum_digits(b1);
        }
        birth_number_ = b1;
    }

    void Ukekka() {//占いの結果を出力


        if (birth_number_ == 1)
        {
            string s1 = "\nYou are always cheerful, passionate, and a strong leader.\n"

                "There is also a place where you hate to lose, and you tend to always prefer number one with high pride.\n"

                " He is also very curiousand dislikes being given instructions by people.\n"

                " While he is good - natured, he also has a stubbornand childish side.\n";
               

            cout << s1 << endl;

          

        }
        else if (birth_number_ == 2)
        {

            string s2 = "\nYou are very sensitive and sensitive.\n"
                "He is devoted to people, has a strong sense of camaraderie, and values ​​relationships.\n"
                "I have a lot of imagination because I have a lot of ideas, but sometimes I can't decide because I'm indecisive.\n"
                "Negative will make you hysterical.\n";
             

            cout << s2 << endl;

         
              
        }

        else if (birth_number_ == 3)
        {
            string s3 = "\nYou who can think optimistically about things.\n"
                "Basically, I don't have to worry because I am always free and have no attachment.\n"

                "Even if you act on your own initiative, there will be no major mistakes and it will be easy to succeed.\n"
                "There are some weak points, but what you want is a hunter's temperament.\n";
             

            cout << s3 << endl;

          
          
        }
        else if (birth_number_ == 4)
        {
        string s4 = "\nYou are a serious and hard worker, and you are a hard worker type that everyone recognizes.\n"
            "He is cautious and has a realistic way of thinking, and he still hits Ishibashi to move forward.\n"
            "Not adventurous, conservative and stubborn in everything.\n"
            "The type who is not good at saying nifty things and sprinkling amiability.\n";
                
            cout << s4 << endl;
          
        }
        else if (birth_number_ == 5)
        {
        string s5 = "\nA type that has a fast head rotation and can take quick actions without hesitation.\n"
            "He is very eloquent because he is curious and enthusiastic about studying.\n"
            "The real face is cool, and although it is amiable, it has a cold heart.\n"
            "Do things dexterously, but also nervous.\n";
              
              
            cout << s5 <<  endl;

            cout << "\nToday and Tomorrow Lucky Number" << endl;

        }
        else if (birth_number_ == 6)
        {
        string s6 =
            "\nYou who have a very kind and devoted side to people.\n"
            "I can't refuse when asked, and I have the temperament to do it at the expense of myself.\n"
            "In addition, he has a high sense of beauty and a strong commitment, and is a type that makes some luxury for that purpose.\n"
            "The tenacious part may backfire and be taken persistently.\n";
              

            cout << s6 << endl;

          
        }
        else if (birth_number_ == 7)
        {
        string s7 = "\nYou are the type of person who is mysterious and strongly attracted to the spiritual world.\n"
            "You can be kind to anyone with philanthropy at your own pace.\n"
            "There are some logical points, and there are also impatient parts that can be frustrating if you don't go the way you want.\n"
            "Although I like one person, there is also a lonely side.\n";
                
            cout << s7 << endl;

         
        }
        else if (birth_number_ == 8)
        {
        string s8 = "\n You are a leader with leadership and a strong sense of responsibility.\n"
            "It's a very positive, complimented and growing type.\n"
            "He hates to lose and is passionate, and always wants to be black and white.\n"
            "It's a bold action and a big reaction, so you may be surprised by the surroundings.\n";
         
            cout << s8 << endl;

        }
        else if (birth_number_ == 9)
        {
        string s9 = "\n Basically, you are the type of Tsuwamono who hides the real part.\n"
            "Men have a feminine part and women have a masculine part.\n"
            "It can be kind to anyone, so it can be easily misunderstood.\n"
            "He is mentally delicate and has a tendency to worry about trivial matters.\n";
           
        cout << s9 << endl;

      
        }


    }

    void Lucky() {



        random_device engine;

        vector<int> v1;
  

        uniform_int_distribution<unsigned> dist(1, 10);
        
        for (int i = 0; i < 2; ++i)
        {
           
            v1.push_back(dist(engine));

        }

        sort(v1.begin(), v1.end());
        for (auto i : v1)cout << i << ",";
        cout << endl;

      
        
    }

    int year() { return year_; }
    int month() { return month_; }
    int day() { return day_; }
    int birth_number() { return birth_number_; }

    static int sum_digits(int num) {
        int b = 0;
        for (; num; num /= 10)
            b += num % 10;

        return b;

        cout << "a" << endl;
    }


private:

    int year_ = 0;
    int month_ = 0;
    int day_ = 0;
    int birth_number_ = 0;

};


int main() {//出力
    string name;


    cout << "Type name and press Enter." << endl << "> ";
    cin >> name;
    int year, month, day;
    cout << "Enter the year, month and day of your birthday separated by spaces. (e.g. January 1, 2001 → 2001 01 01)" << endl << "> ";
    cin >> year >> month >> day;
    BirthNumber p(year, month, day);

    p.Keisan();

    cout << name;
    p.Hyouji("'s Birthdaynumber is ");

    cout << endl << "↓↓↓" << name << "'s Result↓↓↓" << endl;
    cout << "※Only your lucky number is showing again" << endl;
    p.Ukekka();

    

   cout << "\nDo you want to know lucky numbers?(Yes →Press:1,No→Press:0)" << endl;
    int k;
    cin >> k;

  if (k == 1)
    {
      cout << "Your Lucky Number is" << endl;
      p.Lucky();
      cout << "(Today,Tomorrow)" << endl;

      cout << "\nHave a nice day!" << endl;

     


    }

  else if(k == 0)
  {
      cout << "\nHave a nice day!" << endl;
  }
  

  
}