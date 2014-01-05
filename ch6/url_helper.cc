#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <assert.h>

using std::string;

bool not_url_char(char c) {
    static const string url_char_list = "~;/?:@&-=_.+(),'!*";
    return !(isalnum(c) || find(url_char_list.begin(), url_char_list.end(), c) != url_char_list.end());
}

void url_char_test() {
    assert(not_url_char('`'));
    assert(not_url_char('|'));
    assert(not_url_char('\\'));
    assert(!not_url_char('!'));
}

int main() 
{
    url_char_test();
    return 0;
}
