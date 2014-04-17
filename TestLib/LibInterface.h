#ifndef _TESTCPP_LIB_INTERFACE_
#define _TESTCPP_LIB_INTERFACE_

namespace CPPLibInterface
{
	class SimpleExportExample
	{

	private:
		int m_value;

	public:
		SimpleExportExample();

		int	getValue() const; 
	};

}

#endif
