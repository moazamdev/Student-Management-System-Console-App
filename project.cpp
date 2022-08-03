#include<iostream>
using namespace std;

// declaring variables globally
string name[20];
int rollNo[20], batch[20], year[20];
char section[20];

// declaring variable for total no. of students
int totalStudents = 0;

// defining function for entering data
void enterData()
{
    int studNo;
    cout << " ==== Enter Data ==== " << endl;
    cout << "Enter the number of students for which you want to enter data: ";
    cin >> studNo;
    
    if(totalStudents == 0)
    {
        totalStudents += studNo;

        for (int i = 0; i < totalStudents; i++)
        {
            cout << endl;
            cout << "==== Enter data for student " << i + 1 << " ====" << endl << endl;
            
            cout << "Enter Name: " << endl;
            cin >> name[i];
            cout << "Enter Roll No.: " << endl;
            cin >> rollNo[i];
            cout << "Enter Section: " << endl;
            cin >> section[i];
            cout << "Enter Batch: " << endl;
            cin >> batch[i];
            cout << "Enter Year: " << endl;
            cin >> year[i];
        }
    }else{
        for (int i = totalStudents; i < (totalStudents + studNo); i++)
        {
            cout << endl;
            cout << "==== Enter data for student " << i + 1 << " ====" << endl << endl;
            
            cout << "Enter Name: " << endl;
            cin >> name[i];
            cout << "Enter Roll No.: " << endl;
            cin >> rollNo[i];
            cout << "Enter Section: " << endl;
            cin >> section[i];
            cout << "Enter Batch: " << endl;
            cin >> batch[i];
            cout << "Enter Year: " << endl;
            cin >> year[i];
        }
        totalStudents += studNo;
    }
    cout << endl;
    cout << "Your data is successfully entered. " << endl;
    

}

// defining function for showing data
void showData()
{
    if (totalStudents == 0){
        cout << "No Student data is present." << endl;
    }
    else{
        cout << " ==== Show Data ==== "<< endl;
        cout << "The total number of students are " << totalStudents << endl;
        for (int i = 0; i < totalStudents; i++)
        {
            cout << endl;
            cout << "-- Data of student " << i + 1 << " --" << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Roll No.: " << rollNo[i] << endl;
            cout << "Section: " << section[i] << endl;
            cout << "Batch: " << batch[i] << endl;
            cout << "Year: " << year[i] << endl;
        }
        cout << endl;
    }
}

// defining function for updating data
void updateData()
{
    if (totalStudents == 0){
        cout << "No Student data is present." << endl;
    }
    else{
        int searchRoll;
        cout << "==== Update Data ====" << endl;
        cout << "Enter the roll no of the student you want to update data: ";
        cin >> searchRoll;
        cout << endl;

        for (int i = 0; i < totalStudents; i++)
        {
            if (searchRoll == rollNo[i])
            {
                cout << "Student Number: " << i + 1 << endl << endl;

                cout << "-- Previous Data --" << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Roll No.: " << rollNo[i] << endl;
                cout << "Section: " << section[i] << endl;
                cout << "Batch: " << batch[i] << endl;
                cout << "Year: " << year[i] << endl;

                cout << endl;

                cout << "-- Updated Data --" << endl;
                cout << "Enter Name: " << endl;
                cin >> name[i];
                cout << "Enter Roll No.: " << endl;
                cin >> rollNo[i];
                cout << "Enter Section: " << endl;
                cin >> section[i];
                cout << "Enter Batch: " << endl;
                cin >> batch[i];
                cout << "Enter Year: " << endl;
                cin >> year[i];

                cout << endl;
                cout << "Your required data is updated successfully. " << endl;
            }
        }
    }
    

}

// defining function for searching data
void searchData()
{
    if (totalStudents == 0){
        cout << "No Student data is present." << endl;
    }
    else{
        int searchRoll;
        cout << "==== Search Data ====" << endl;
        cout << "Enter the roll no of the student you want to search data: ";
        cin >> searchRoll;
        cout << endl;

        for (int i = 0; i < totalStudents; i++)
        {
            if (searchRoll == rollNo[i])
            {
                cout << "Student Number: " << i + 1 << endl << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Roll No.: " << rollNo[i] << endl;
                cout << "Section: " << section[i] << endl;
                cout << "Batch: " << batch[i] << endl;
                cout << "Year: " << year[i] << endl;
                cout << endl;
                cout << "Your required data is searched successfully. " << endl;
            }
        }
    }
    
}

// defining function for deleting data
void deleteData()
{
    if (totalStudents == 0){
        cout << "No Student data is present." << endl;
    }
    else{
        int deleteChoice;
        cout << "==== Delete Data ====" << endl;
        cout << "Press 1 to delete specific data..." << endl;
        cout << "Press 2 to delete all data..." << endl;
        cin >> deleteChoice;

        switch (deleteChoice)
        {
            case 1:
                int searchRoll;
                cout << "Enter the roll no of the student you want to delete data: ";
                cin >> searchRoll;
                cout << endl;

                for (int i = 0; i < totalStudents; i++)
                {
                    if (searchRoll == rollNo[i])
                    {
                        cout << "Student Number: " << i + 1 << endl << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Roll No.: " << rollNo[i] << endl;
                        cout << "Section: " << section[i] << endl;
                        cout << "Batch: " << batch[i] << endl;
                        cout << "Year: " << year[i] << endl;
                        
                        for (int j = i; j < totalStudents; j++)
                        {
                            name[j] = name[j+1];
                            rollNo[j] = rollNo[j+1];
                            section[j] = section[j+1];
                            batch[j] = batch[j+1];
                            year[j] = year[j+1];
                        }
                        totalStudents--;
                        
                        cout << endl;
                        cout << "Your required data is deleted successfully. " << endl;
                    }
                }
                break;
            
            case 2:
                totalStudents = 0;
                cout << "All data is deleted successfully." << endl;
                break;
            
            default:
                cout << "Invalid number." << endl;
                break;
        }
    }
}

int main()
{
    while (true)
    {
        cout << endl;
        cout << "==== STUDENT MANAGEMENT SYSTEM ====" << endl << endl;
        
        int choice;
        cout << "Press 1 to Enter Data..." << endl;
        cout << "Press 2 to Show Data..." << endl;
        cout << "Press 3 to Update Data..." << endl;
        cout << "Press 4 to Search Data..." << endl;
        cout << "Press 5 to Delete Data..." << endl;
        cout << "Press 6 to Exit Program..." << endl << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                enterData();
                break;
            
            case 2:
                showData();
                break;
            
            case 3:
                updateData();
                break;
            
            case 4:
                searchData();
                break;
            
            case 5:
                deleteData();
                break;
            
            case 6:
                exit(0);
                break;
        
            default:
                cout << "Invalid Number." << endl;
                break;
        }

    }
    
    return 0;

}