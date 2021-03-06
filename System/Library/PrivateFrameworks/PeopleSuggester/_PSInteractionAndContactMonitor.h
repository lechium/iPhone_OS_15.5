//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/CNChangeHistoryEventVisitor-Protocol.h>

@class CNContactStore, NSData, NSMutableSet, NSSet, NSString, _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _PSInteractionAndContactMonitor : NSObject <CNChangeHistoryEventVisitor>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSData *_changeHistoryToken;	// 16 = 0x10
    NSMutableSet *_historyChangesQueuedToAdd;	// 24 = 0x18
    NSMutableSet *_historyChangesQueuedToDelete;	// 32 = 0x20
    CDUnknownBlockType _processContactChanges;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 48 = 0x30
    NSSet *_contactIdsSeen;	// 56 = 0x38
    NSSet *_contactIdsInContactStore;	// 64 = 0x40
    _CDInteractionStore *_interactionStore;	// 72 = 0x48
    CNContactStore *_contactStore;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000044827
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(copy, nonatomic) NSSet *contactIdsInContactStore; // @synthesize contactIdsInContactStore=_contactIdsInContactStore;
@property(copy, nonatomic) NSSet *contactIdsSeen; // @synthesize contactIdsSeen=_contactIdsSeen;
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x00000000000447a5
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x000000000004479f
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x000000000004472c
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x00000000000446a7
- (void)notifyWhenContactStoreChanged;	// IMP=0x0000000000044619
- (void)notifyWhenContactAddedToInteractionStore:(id)arg1;	// IMP=0x0000000000044191
- (void)fetchChangedContactIdsFromContactStore;	// IMP=0x0000000000043a3b
- (void)fetchAllContactIdsFromContactStore;	// IMP=0x00000000000436c8
- (void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2;	// IMP=0x000000000004320c
- (id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2;	// IMP=0x0000000000042e93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

