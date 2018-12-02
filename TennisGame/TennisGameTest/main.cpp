#include "gmock/gmock.h"

#if defined( _MSC_VER ) && defined( _DEBUG )
//#pragma comment( linker, "/subsystem:\"console\" /entry:\"WinMainCRTStartup\"")
#endif

int main( int argc, char** argv )
{
	//testing::GTEST_FLAG( output ) = "xml:";
	testing::InitGoogleTest(&argc, argv);
	int nReturnCode = RUN_ALL_TESTS();
	std::system("PAUSE");
	return nReturnCode;
}