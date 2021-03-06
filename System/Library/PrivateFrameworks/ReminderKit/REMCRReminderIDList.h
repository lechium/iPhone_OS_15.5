//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/CRUndoDelegate-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class CRDocument, CRTombstoneOrderedSet, NSMutableOrderedSet, NSString, NSUUID, REMObjectID;
@protocol REMCRReminderIDListDelegate;

@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding>
{
    CRTombstoneOrderedSet *_reminderIDsStorage;	// 8 = 0x8
    NSObject<REMCRReminderIDListDelegate> *_delegate;	// 16 = 0x10
    NSUUID *_replica;	// 24 = 0x18
    CRDocument *_document;	// 32 = 0x20
    REMObjectID *_remObjectID;	// 40 = 0x28
}

+ (id)cdEntityName;	// IMP=0x00000000000a695d
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x00000000000a68d0
+ (id)newObjectID;	// IMP=0x00000000000a686e
+ (id)listFromSerializedData:(id)arg1 replica:(id)arg2;	// IMP=0x00000000000a6296
- (void).cxx_destruct;	// IMP=0x00000000000a69f8
@property(retain, nonatomic) REMObjectID *remObjectID; // @synthesize remObjectID=_remObjectID;
@property(retain, nonatomic) CRDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
@property(nonatomic) __weak NSObject<REMCRReminderIDListDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)wantsUndoCommands;	// IMP=0x00000000000a682a
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a664c
- (id)_orderedSet;	// IMP=0x00000000000a663e
- (void)removeObjectFromReminderIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a6628
- (void)insertObject:(id)arg1 inReminderIDsAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000a6612
- (unsigned long long)indexInReminderIDsOfObject:(id)arg1;	// IMP=0x00000000000a65fc
- (id)objectInReminderIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a65e6
- (unsigned long long)countOfReminderIDs;	// IMP=0x00000000000a65d0
@property(readonly, nonatomic) NSMutableOrderedSet *reminderIDsProxy;
- (void)mergeWith:(id)arg1;	// IMP=0x00000000000a652b
- (void)addReminder:(id)arg1;	// IMP=0x00000000000a649b
- (id)copyForReplica:(id)arg1;	// IMP=0x00000000000a63d4
- (id)initWithDocument:(id)arg1 objectID:(id)arg2;	// IMP=0x00000000000a619e
- (id)init;	// IMP=0x00000000000a60be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

