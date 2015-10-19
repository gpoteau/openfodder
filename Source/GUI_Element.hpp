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

class cFodder;

struct sGUI_Element {
	int16	(cFodder::*field_0)();
	int16	field_4;
	int16	field_6;
	int16	field_8;
	int16	field_A;
	void	(cFodder::*mMouseInsideFuncPtr)();	// field_c
};

extern const sGUI_Element mAfx_Buttons[];
extern const sGUI_Element mPlus_Buttons[];
extern const sGUI_Element mPlusQuiz_Buttons[];