//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataSyncManager-Protocol.h>

@class CKRecordID, NSArray, NSDate, NSString, NTPBPrivateRecordSyncState;
@protocol FCPrivateRecordSyncManagerDelegate;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager>
{
    CKRecordID *_recordID;	// 8 = 0x8
    id <FCPrivateRecordSyncManagerDelegate> _delegate;	// 16 = 0x10
    NSArray *_desiredKeys;	// 24 = 0x18
    NTPBPrivateRecordSyncState *_currentState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005c404
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005bfb1
- (_Bool)isAwaitingFirstSync;	// IMP=0x000000000005bf71
- (void)notifyObservers;	// IMP=0x000000000005bf31
- (void)markAsDirty;	// IMP=0x000000000005be6f
- (_Bool)isDirty;	// IMP=0x000000000005bbee
@property(readonly, nonatomic) NSDate *lastCleanDate;
- (id)init;	// IMP=0x000000000005ba18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
