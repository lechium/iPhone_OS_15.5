//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailMessageLibrary, NSMapTable;

@interface MessageToMailboxUidCache : NSObject
{
    NSMapTable *_mailboxCache;	// 8 = 0x8
    MFMailMessageLibrary *_library;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000059190
- (id)debugDescription;	// IMP=0x0010000000058f08
- (id)_mailboxWithMailboxLibraryID:(long long)arg1;	// IMP=0x0010000000058e99
- (unsigned long long)count;	// IMP=0x0010000000058e83
- (void)removeAllObjects;	// IMP=0x0010000000058e6d
- (id)mailboxForMessageInfo:(id)arg1;	// IMP=0x0010000000058ca1
- (id)mailboxForMessage:(id)arg1;	// IMP=0x0010000000058adf
- (id)init;	// IMP=0x0010000000058a6a
- (id)initWithLibrary:(id)arg1;	// IMP=0x0010000000058928

@end

