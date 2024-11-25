using namespace std;
/*
 * @author Matthew Washburn
 */
int
main() {

double sum;
double avg;
int i;
double nums[1000];
sum = 0;
i = 0;
        while(cin >> nums[i]) {
                cin >> nums[i];
                sum += nums[i];
                cout << nums[i] << endl;
                i++;
}
        avg = (sum/i);
        cout << i << " items read" << endl;
        cout << "for a sum total of: " << sum << endl;
        cout << "and an average of: " << avg << endl;
return 0;
} // Main      