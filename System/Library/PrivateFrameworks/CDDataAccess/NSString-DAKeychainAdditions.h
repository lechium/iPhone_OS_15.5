//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;	// IMP=0x00000000000194a4
+ (id)da_newGUID;	// IMP=0x0000000000019469
- (id)stringByURLQuoting;	// IMP=0x000000000000f6a9
- (id)da_trimWhiteSpace;	// IMP=0x0000000000019421
- (_Bool)da_hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x00000000000193f9
- (id)da_stringByURLEscapingPathComponent;	// IMP=0x0000000000019387
- (id)da_appendSlashIfNeeded;	// IMP=0x000000000001932e
- (id)da_removeSlashIfNeeded;	// IMP=0x00000000000192c8
- (id)da_stringByRemovingPercentEscapesForUsername;	// IMP=0x0000000000019294
- (id)da_stringByAddingPercentEscapesForUsername;	// IMP=0x0000000000019253
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x000000000001b671
@end

