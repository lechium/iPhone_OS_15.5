//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

#import <NotesShared/ICHasDatabaseScope-Protocol.h>

@class NSString;

@interface CKRecordID (IC) <ICHasDatabaseScope>
- (_Bool)ic_isOwnedByCurrentUser;	// IMP=0x00000000000366b2
- (long long)databaseScope;	// IMP=0x000000000003666e
- (id)ic_loggingDescription;	// IMP=0x0000000000036657
- (id)ic_loggingDescriptionIncludingBrackets:(_Bool)arg1;	// IMP=0x00000000000364d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

