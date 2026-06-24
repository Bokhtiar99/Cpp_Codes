#include <iostream>
#include <string>
using namespace std;
const int MAX_APPLICANTS = 25;
int tr[MAX_APPLICANTS];
int med[MAX_APPLICANTS];
int bs[MAX_APPLICANTS];
int go[MAX_APPLICANTS];
int tr_count = 0;
int med_count = 0;
int bs_count = 0;
int go_count = 0;
int token_number = 1;
int counter1_TR = 0;
int counter1_other = 0;
int counter2_MED = 0;
int counter2_other = 0;
int counter3_BS = 0;
int counter3_other = 0;
int counter4_GO = 0;
int counter4_other = 0;
void issue_token(string visa_type){
    if(visa_type == "TR" && tr_count < MAX_APPLICANTS){
        tr[tr_count] = token_number;
        tr_count = tr_count + 1;
        token_number = token_number + 1;
        cout<<"Your token is: TR-"<<tr[tr_count - 1]<<endl;
    }
    else if(visa_type == "MED" && med_count < MAX_APPLICANTS){
        med[med_count] = token_number;
        med_count = med_count + 1;
        token_number = token_number + 1;
        cout<<"Your token is: MED-" << med[med_count - 1]<<endl;
    }
    else if(visa_type == "BS" && bs_count < MAX_APPLICANTS){
        bs[bs_count] = token_number;
        bs_count = bs_count + 1;
        token_number = token_number + 1;
        cout<<"Your token is: BS-" << bs[bs_count - 1]<<endl;
    }
    else if(visa_type == "GO" && go_count < MAX_APPLICANTS){
        go[go_count] = token_number;
        go_count = go_count + 1;
        token_number = token_number + 1;
        cout<<"Your token is: GO-" << go[go_count - 1]<<endl;
    }
    else {
        cout<<"Sorry, limit reached for " << visa_type << " Visa." <<endl;
    }
}
void serve_first(int arr[], int& size){
    for (int i = 0; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}
string longest_queue(){
    if (tr_count >= med_count && tr_count >= bs_count && tr_count >= go_count){
        return "TR";
    }
    if (med_count >= tr_count && med_count >= bs_count && med_count >= go_count){
        return "MED";
    }
    if (bs_count >= tr_count && bs_count >= med_count && bs_count >= go_count){
        return "BS";
    }
    if (go_count >= tr_count && go_count >= med_count && go_count >= bs_count){
        return "GO";
    }
    return "";
}
void serve_counter(int counter_number){
    string primary_visa = "";
    if(counter_number == 1){
        primary_visa = "TR";
    }
    else if(counter_number == 2){
        primary_visa = "MED";
    }
    else if(counter_number == 3){
        primary_visa = "BS";
    }
    else if(counter_number == 4){
        primary_visa = "GO";
    }
    if(primary_visa == "TR" && tr_count > 0){
        cout << "Counter 1 Please serve token TR-" << tr[0]<<endl;
        serve_first(tr, tr_count);
        counter1_TR = counter1_TR + 1;
    }
    else if(primary_visa == "MED" && med_count > 0){
        cout << "Counter 2 Please serve token MED-" << med[0]<<endl;
        serve_first(med, med_count);
        counter2_MED = counter2_MED + 1;
    }
    else if(primary_visa == "BS" && bs_count > 0) {
        cout << "Counter 3 Please serve token BS-" << bs[0]<<endl;
        serve_first(bs, bs_count);
        counter3_BS = counter3_BS + 1;
    }
    else if (primary_visa == "GO" && go_count > 0) {
        cout << "Counter 4 Please serve token GO-" << go[0]<<endl;
        serve_first(go, go_count);
        counter4_GO = counter4_GO + 1;
    }
    else{
        string longest = longest_queue();
        if (longest == "TR" && tr_count > 0){
            cout << "Counter " << counter_number << " Please serve token TR-" << tr[0] << endl;
            serve_first(tr, tr_count);
        }
        else if(longest == "MED" && med_count > 0){
            cout << "Counter " << counter_number << " Please serve token MED-" << med[0] << endl;
            serve_first(med, med_count);
        }
        else if (longest == "BS" && bs_count > 0) {
            cout << "Counter " << counter_number << " Please serve token BS-" << bs[0] << endl;
            serve_first(bs, bs_count);
        }
        else if (longest == "GO" && go_count > 0) {
            cout << "Counter " << counter_number << " Please serve token GO-" << go[0] << endl;
            serve_first(go, go_count);
        }
        else {
            cout << "Counter " << counter_number << " is idle" << endl;
            return;
        }
        if (counter_number == 1) {
            counter1_other = counter1_other + 1;
        }
        else if (counter_number == 2) {
            counter2_other = counter2_other + 1;
        }
        else if (counter_number == 3) {
            counter3_other = counter3_other + 1;
        }
        else if (counter_number == 4) {
            counter4_other = counter4_other + 1;
        }
    }
}
void day_summary(){
    cout<<"Day Summary Report"<<endl;
    cout<<"Applicants served by Visa Type"<<endl;
    cout<<"TR "<<counter1_TR + counter1_other<<endl;
    cout<<"MED "<<counter2_MED + counter2_other<<endl;
    cout<<"BS "<<counter3_BS + counter3_other<<endl;
    cout<<"GO "<<counter4_GO + counter4_other<<endl;
    cout<<"Applicants served by Counter"<<endl;
    cout<<"Counter 1 Primary "<<counter1_TR <<" Other "<<counter1_other<<endl;
    cout<<"Counter 2 Primary "<<counter2_MED <<" Other "<<counter2_other<<endl;
    cout<<"Counter 3 Primary "<<counter3_BS <<" Other "<<counter3_other<<endl;
    cout<<"Counter 4 Primary "<<counter4_GO <<" Other "<<counter4_other<<endl;
    cout<<"Idle Counters"<<endl;
    if(counter1_TR + counter1_other == 0){
        cout<<"Counter 1 is idle"<<endl;
    }
    if(counter2_MED + counter2_other == 0){
        cout<<"Counter 2 is idle"<<endl;
    }
    if(counter3_BS + counter3_other == 0){
        cout<<"Counter 3 is idle"<<endl;
    }
    if(counter4_GO + counter4_other == 0){
        cout<<"Counter 4 is idle"<<endl;
    }
}
int main(){
    int choice;
    string visa;
    while (true) {
        cout << "1 Issue Token" << endl;
        cout << "2 Call Next Customer Counter 1" << endl;
        cout << "3 Call Next Customer Counter 2" << endl;
        cout << "4 Call Next Customer Counter 3" << endl;
        cout << "5 Call Next Customer Counter 4" << endl;
        cout << "6 Day Summary" << endl;
        cout << "7 Exit" << endl;
        cout << "Enter your choice ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter Visa Type TR or MED or BS or GO ";
            cin >> visa;
            issue_token(visa);
        }
        else if (choice == 2){
            serve_counter(1);
        }
        else if (choice == 3){
            serve_counter(2);
        }
        else if (choice == 4){
            serve_counter(3);
        }
        else if (choice == 5){
            serve_counter(4);
        }
        else if (choice == 6){
            day_summary();
        }
        else if (choice == 7){
            break;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
