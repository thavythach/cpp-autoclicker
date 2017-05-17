#include <windows.h>
#include <stdlib.h>


using namespace std;

int main(){
	SetConsoleTitle("Edit This How u want");

	cout << "Edit This How u want" << endl;



	int x,y,slpTime,i;

	cout << "Enter the number of times to click: " << endl; // Edit This How u want
	cin >> i;

	cout << "Please Enter X Coordinate: " << endl; // Edit This How u want
	cin >> x;

	cout << "Please Enter y Coordinate: " << endl; //Edit This How u want
	cin >> y;

	cout << "Please And Enter time between clicks: " << endl; // Edit This How u want
	cin >> slpTime;

	cout << "Status." << "\n X coordinate: " << x << " \nY coordinate: " << y << " \nTime in seconds between clicks: " << slpTime << endl;
	for(int t = 1; t <= i; t++){
		SetCursorPos(x,y);
		mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
		Sleep(slpTime*1000);

		if (GetAsyncKeyState(VK_ESCAPE)){
			exit(0);
		} 

		else continue;

	}
	return 0;
}