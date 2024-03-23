#include <iostream>

int main() {
    int Years, Days, Hours, Minutes, Seconds, Secondstt;
    Secondstt = Seconds + Minutes*60 + Hours*3600 + Days*24*3600 + Years*3600*24*3600;
    std::cout << Secondstt << std::endl;
    return 0;
}