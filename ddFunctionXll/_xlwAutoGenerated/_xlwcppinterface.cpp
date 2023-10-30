//// 
//// Autogenerated by xlw 
//// Do not edit this file, it will be overwritten 
//// by InterfaceGenerator 
////

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include "..\cppinterface.h"
#include <xlw/xlw.h>
#include <xlw/XlFunctionRegistration.h>
#include <stdexcept>
#include <xlw/XlOpenClose.h>
#include <xlw/HiResTimer.h>
using namespace xlw;

namespace {
const char* LibraryName = "MyTestLibrary";
};


// registrations start here


namespace
{
  XLRegistration::XLFunctionRegistrationHelper
registereeCheckVersion("xleeCheckVersion",
"eeCheckVersion",
"too lazy to comment this function ",
LibraryName,
0,
0
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeCheckVersion(
)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);

std::string result(
	eeCheckVersion());
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamTPArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamTP("xleeSteamTP",
"eeSteamTP",
"too lazy to comment this function ",
LibraryName,
eeSteamTPArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamTP(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	eeSteamTP(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamTPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamTPH("xleeSteamTPH",
"eeSteamTPH",
"too lazy to comment this function ",
LibraryName,
eeSteamTPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamTPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamTPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamTPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamTPS("xleeSteamTPS",
"eeSteamTPS",
"too lazy to comment this function ",
LibraryName,
eeSteamTPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamTPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamTPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamTHSArgs[]=
{
{ "h","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamTHS("xleeSteamTHS",
"eeSteamTHS",
"too lazy to comment this function ",
LibraryName,
eeSteamTHSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamTHS(
double h,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamTHS(
		h,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamPTArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamPT("xleeSteamPT",
"eeSteamPT",
"too lazy to comment this function ",
LibraryName,
eeSteamPTArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamPT(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	eeSteamPT(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamHPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamHPT("xleeSteamHPT",
"eeSteamHPT",
"too lazy to comment this function ",
LibraryName,
eeSteamHPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamHPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamHPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamHPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamHPS("xleeSteamHPS",
"eeSteamHPS",
"too lazy to comment this function ",
LibraryName,
eeSteamHPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamHPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamHPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamHPQArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "drynessX","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamHPQ("xleeSteamHPQ",
"eeSteamHPQ",
"too lazy to comment this function ",
LibraryName,
eeSteamHPQArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamHPQ(
double p,
double drynessX)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamHPQ(
		p,
		drynessX)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamVPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamVPT("xleeSteamVPT",
"eeSteamVPT",
"too lazy to comment this function ",
LibraryName,
eeSteamVPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamVPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamVPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamVPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamVPH("xleeSteamVPH",
"eeSteamVPH",
"too lazy to comment this function ",
LibraryName,
eeSteamVPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamVPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamVPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamVPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamVPS("xleeSteamVPS",
"eeSteamVPS",
"too lazy to comment this function ",
LibraryName,
eeSteamVPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamVPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamVPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamRhoPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamRhoPT("xleeSteamRhoPT",
"eeSteamRhoPT",
"too lazy to comment this function ",
LibraryName,
eeSteamRhoPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamRhoPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamRhoPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamRhoPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamRhoPH("xleeSteamRhoPH",
"eeSteamRhoPH",
"too lazy to comment this function ",
LibraryName,
eeSteamRhoPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamRhoPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamRhoPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamRhoPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamRhoPS("xleeSteamRhoPS",
"eeSteamRhoPS",
"too lazy to comment this function ",
LibraryName,
eeSteamRhoPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamRhoPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamRhoPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamSPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamSPT("xleeSteamSPT",
"eeSteamSPT",
"too lazy to comment this function ",
LibraryName,
eeSteamSPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamSPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamSPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamSPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamSPH("xleeSteamSPH",
"eeSteamSPH",
"too lazy to comment this function ",
LibraryName,
eeSteamSPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamSPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamSPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamCpPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamCpPT("xleeSteamCpPT",
"eeSteamCpPT",
"too lazy to comment this function ",
LibraryName,
eeSteamCpPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamCpPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamCpPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamCpPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamCpPH("xleeSteamCpPH",
"eeSteamCpPH",
"too lazy to comment this function ",
LibraryName,
eeSteamCpPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamCpPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamCpPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamCvPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamCvPT("xleeSteamCvPT",
"eeSteamCvPT",
"too lazy to comment this function ",
LibraryName,
eeSteamCvPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamCvPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamCvPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamCvPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamCvPH("xleeSteamCvPH",
"eeSteamCvPH",
"too lazy to comment this function ",
LibraryName,
eeSteamCvPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamCvPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamCvPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamCvPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamCvPS("xleeSteamCvPS",
"eeSteamCvPS",
"too lazy to comment this function ",
LibraryName,
eeSteamCvPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamCvPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamCvPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamVisPTArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamVisPT("xleeSteamVisPT",
"eeSteamVisPT",
"too lazy to comment this function ",
LibraryName,
eeSteamVisPTArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamVisPT(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamVisPT(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamVisPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamVisPH("xleeSteamVisPH",
"eeSteamVisPH",
"too lazy to comment this function ",
LibraryName,
eeSteamVisPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamVisPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamVisPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamVisPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamVisPS("xleeSteamVisPS",
"eeSteamVisPS",
"too lazy to comment this function ",
LibraryName,
eeSteamVisPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamVisPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamVisPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamQPHArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamQPH("xleeSteamQPH",
"eeSteamQPH",
"too lazy to comment this function ",
LibraryName,
eeSteamQPHArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamQPH(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamQPH(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
eeSteamQPSArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registereeSteamQPS("xleeSteamQPS",
"eeSteamQPS",
"too lazy to comment this function ",
LibraryName,
eeSteamQPSArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xleeSteamQPS(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	eeSteamQPS(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoOpen
//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoClose
//////////////////////////
