//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAppLibrary, BRCItemID, BRCServerItem, NSString;

@interface BRCSharingPCSChainFolderOperation <BRCOperationSubclass>
{
    BRCServerItem *_serverItem;	// 32 = 0x20
    BRCAppLibrary *_appLibrary;	// 40 = 0x28
    unsigned long long _chainedRecordsCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001f28cd
- (void)main;	// IMP=0x00000000001f2847
- (void)_performPCSChainBatch;	// IMP=0x00000000001f26f9
- (id)createActivity;	// IMP=0x00000000001f26d0
- (id)initWithItem:(id)arg1;	// IMP=0x00000000001f24b6
@property(readonly, nonatomic) BRCItemID *rootItemID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

