#ifndef VERSION_H
#define VERSION_H

	//Date Version Types
	static const char DATE[] = "06";
	static const char MONTH[] = "02";
	static const char YEAR[] = "2017";
	static const char UBUNTU_VERSION_STYLE[] =  "17.02";
	
	//Software Status
	static const char STATUS[] =  "Release";
	static const char STATUS_SHORT[] =  "r";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 0;
	static const long BUILD  = 1;
	static const long REVISION  = 5;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 2;
	#define RC_FILEVERSION 0,0,1,5
	#define RC_FILEVERSION_STRING "0, 0, 1, 5\0"
	static const char FULLVERSION_STRING [] = "0.0.1.5";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 1;
	

#endif //VERSION_H
