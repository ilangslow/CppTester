#include "stdafx.h"

#include "LibInterface.h"

namespace CPPLibInterface
{

SimpleExportExample::SimpleExportExample()
	: m_value(12345)
{
}

int
SimpleExportExample::getValue() const
{
	return m_value;
}

}