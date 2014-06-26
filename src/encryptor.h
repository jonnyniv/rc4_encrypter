#include <array>
#include <string>
#include <vector>
using namespace std;
class encryptor
{
public:
    encryptor(string& k, vector<unsigned char>& in);
    vector<unsigned char> crypt();

    
private:
    array<unsigned char, 256> state;
    string key;
    void ksa();
    vector<unsigned char> input;
    vector<unsigned char> output;
    vector<unsigned char> prga();
};