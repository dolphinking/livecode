/* Copyright (C) 2003-2013 Runtime Revolution Ltd.

This file is part of LiveCode.

LiveCode is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License v3 as published by the Free
Software Foundation.

LiveCode is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with LiveCode.  If not see <http://www.gnu.org/licenses/>.  */

//
// MCConstant class declarations
//
#ifndef	CONSTANT_H
#define	CONSTANT_H

#include "express.h"

class MCConstant : public MCExpression
{
	const MCString svalue;
	const real8 nvalue;
public:
	MCConstant(const MCString &s, const real8 &n) : svalue(s), nvalue(n)
	{ }
	virtual Exec_stat eval(MCExecPoint &ep);
};
#endif
