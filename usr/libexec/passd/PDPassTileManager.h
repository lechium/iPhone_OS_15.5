//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDCardFileManager, PDDatabaseManager;
@protocol OS_dispatch_queue, PDPassTileManagerDelegate;

@interface PDPassTileManager : NSObject
{
    PDCardFileManager *_cardFileManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    id <PDPassTileManagerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002dffae
- (void)vehicleReportDidChangeForCarKeyWithAppletIdentifier:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x00100000002dfaa3
- (id)init;	// IMP=0x00100000002def64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
