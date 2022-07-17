//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperation.h>

#import <NotesShared/ICLoggable-Protocol.h>

@class NSString;

@interface CKOperation (IC) <ICLoggable>
- (void)ic_removeAllCompletionBlocks;	// IMP=0x00000000000ac0cf
- (id)ic_loggingValues;	// IMP=0x00000000000abf07
- (id)ic_loggingIdentifier;	// IMP=0x00000000000abef5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
