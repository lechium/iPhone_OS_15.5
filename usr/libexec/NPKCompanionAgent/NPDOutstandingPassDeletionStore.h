//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface NPDOutstandingPassDeletionStore : NSObject
{
    NSMutableDictionary *_outstandingMessageRecords;	// 8 = 0x8
    NSMutableArray *_pendingDeletionUniqueIDs;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_cleanupTimer;	// 24 = 0x18
    NPSDomainAccessor *_domainAccessor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000081a4
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cleanupTimer; // @synthesize cleanupTimer=_cleanupTimer;
@property(retain, nonatomic) NSMutableArray *pendingDeletionUniqueIDs; // @synthesize pendingDeletionUniqueIDs=_pendingDeletionUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *outstandingMessageRecords; // @synthesize outstandingMessageRecords=_outstandingMessageRecords;
- (void)_performCleanup;	// IMP=0x0010000000007ea3
- (void)_saveOutstandingRecords;	// IMP=0x0010000000007def
- (void)clearStore;	// IMP=0x0010000000007d8d
- (_Bool)isDeletionPendingForUniqueID:(id)arg1;	// IMP=0x00100000000079ac
- (void)notePassDatabaseReconciled;	// IMP=0x00100000000078d8
- (void)noteDeliveryForMessageID:(id)arg1;	// IMP=0x00100000000077b8
- (void)noteDeletionSentForUniqueID:(id)arg1 messageID:(id)arg2;	// IMP=0x00100000000075b1
- (void)noteDeletionPendingForUniqueID:(id)arg1;	// IMP=0x0010000000007491
- (void)dealloc;	// IMP=0x0010000000007457
- (id)initWithDomainAccessor:(id)arg1;	// IMP=0x0010000000007205

@end
