/* 
   NSTableHeaderView.h

   Copyright (C) 1999 Free Software Foundation, Inc.

   Author: Michael Hanni  <mhanni@sprintmail.com>
   Date: 1999

   Author: Nicola Pero <n.pero@mi.flashnet.it>
   Date: December 1999
   
   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/ 

#ifndef _GNUstep_H_NSTableHeaderView
#define _GNUstep_H_NSTableHeaderView

#include <Foundation/NSGeometry.h>
#include <AppKit/NSView.h>

@class NSTableView;

@interface NSTableHeaderView : NSView
{
  NSTableView* _tableView;
}
/*
 * Setting the table view 
 */
- (void)setTableView: (NSTableView*)aTableView;
- (NSTableView*)tableView;
/*
 * Checking altered columns 
 */
- (int)draggedColumn;
- (float)draggedDistance; 
- (int)resizedColumn;
/*
 * Utility methods 
 */
- (int)columnAtPoint: (NSPoint)aPoint; 
- (NSRect)headerRectOfColumn: (int)columnIndex;  
@end
#endif
