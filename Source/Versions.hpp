/*
 *  Cannon Fodder
 *  ------------------------
 *
 *  Copyright (C) 2008-2015 Robert Crossfield
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

enum ePlatform {
	PC		= 0,
	Amiga	= 1
};

enum eRelease {
	Retail = 0,
	Demo = 1
};

struct sVersion {
	const char* mName;
	std::string mKey;
	ePlatform	mPlatform;
	eRelease	mRelease;
	const char* mDataPath;
};

const sVersion Versions[3] = {
	{ "",								"Dos",		ePlatform::PC,		eRelease::Retail,	"",					},
	{ "",								"Amiga",	ePlatform::Amiga,	eRelease::Retail,	"Amiga",			},
	{ "Amiga Format Christmas Special",	"AFX",		ePlatform::Amiga,	eRelease::Demo,		"AmigaFormat_XMAS"	}
};