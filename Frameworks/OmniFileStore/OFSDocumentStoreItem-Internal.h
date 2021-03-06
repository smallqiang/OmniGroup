// Copyright 2010-2012 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFileStore/OFSFeatures.h>

#import <OmniFileStore/OFSDocumentStoreItem.h>

@interface OFSDocumentStoreItem (/*Internal*/)

- (BOOL)_hasBeenInvalidated;
- (void)_invalidate;

@end
