// Copyright 2003-2005, 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <AppKit/NSButton.h>
#import <AppKit/NSNibDeclarations.h>

@class NSMenu;

@interface OAContextButton : NSButton
{
    id delegate;
}

+ (NSImage *)actionImage;
+ (NSImage *)miniActionImage;

@property (assign) IBOutlet id delegate;

- (BOOL)validate;
- (NSMenu *)locateActionMenu;

@end
