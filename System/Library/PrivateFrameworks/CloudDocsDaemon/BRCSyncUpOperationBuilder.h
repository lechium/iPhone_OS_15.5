//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults, NSMutableSet;

@interface BRCSyncUpOperationBuilder : NSObject
{
    NSMutableSet *_fullyChainedParentIDWhitelist;	// 8 = 0x8
    NSMutableSet *_halfChainedParentIDWhitelist;	// 16 = 0x10
    BRCAccountSession *_session;	// 24 = 0x18
    BRCSyncUpOperation *_op;	// 32 = 0x20
    BRCUserDefaults *_defaults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001528ea
@property(retain, nonatomic) BRCUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) BRCSyncUpOperation *op; // @synthesize op=_op;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (float)addItem:(id)arg1;	// IMP=0x0000000000151eb2
- (float)addEditOfSymlink:(id)arg1;	// IMP=0x0000000000151bd0
- (float)addDeletionOfFinderBookmark:(id)arg1;	// IMP=0x0000000000151ae2
- (float)addEditOfFinderBookmark:(id)arg1;	// IMP=0x0000000000151649
- (float)addEditOfDocument:(id)arg1;	// IMP=0x000000000014fd05
- (float)addDeletionOfDocument:(id)arg1;	// IMP=0x000000000014f9a9
- (float)addDeletionOfAlias:(id)arg1;	// IMP=0x000000000014f71a
- (float)addDeletionOfDirectory:(id)arg1;	// IMP=0x000000000014f631
- (float)addEditOfDirectory:(id)arg1;	// IMP=0x000000000014f1b0
- (void)handleEditOfSharedItem:(id)arg1;	// IMP=0x000000000014ef43
- (void)handleDeletionOfSharedItem:(id)arg1;	// IMP=0x000000000014ee8e
- (float)fakeSyncForItem:(id)arg1 serverItem:(id)arg2 inZone:(id)arg3;	// IMP=0x000000000014e463
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;	// IMP=0x000000000014ded7
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;	// IMP=0x000000000014dba3
- (float)addEditOfSharedTopLevelItem:(id)arg1;	// IMP=0x000000000014d735
- (float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2;	// IMP=0x000000000014d3ae
- (float)addDeletionOfItem:(id)arg1;	// IMP=0x000000000014d29a
- (_Bool)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;	// IMP=0x000000000014cfb9
- (unsigned char)shouldPCSChainStatusForItem:(id)arg1;	// IMP=0x000000000014ca05
- (id)init;	// IMP=0x000000000014c990

@end
