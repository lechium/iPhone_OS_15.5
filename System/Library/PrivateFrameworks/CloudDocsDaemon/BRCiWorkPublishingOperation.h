//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCItemID, BRCServerZone, NSArray, NSNumber, NSString;

@interface BRCiWorkPublishingOperation <BRCOperationSubclass>
{
    BRCItemID *_itemID;	// 32 = 0x20
    NSArray *_recordIDs;	// 40 = 0x28
    _Bool _forPublish;	// 48 = 0x30
    _Bool _readonly;	// 49 = 0x31
    NSNumber *_sharingInfo;	// 56 = 0x38
    BRCServerZone *_serverZone;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000206a20
- (void)main;	// IMP=0x0000000000206390
- (void)_updateItemAfterShareCompleted;	// IMP=0x000000000020625e
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x0000000000206249
- (id)createActivity;	// IMP=0x0000000000206220
- (id)initWithDocumentItem:(id)arg1 forPublish:(_Bool)arg2 readonly:(_Bool)arg3;	// IMP=0x0000000000205fbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

