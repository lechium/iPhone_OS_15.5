//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLChangePublisher-Protocol.h>

@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject <PLChangePublisher>
{
    PLAssetsdClient *_assetsdClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002d719e
- (void)unpauseLaunchEventNotifications;	// IMP=0x00000000002d713c
- (void)pauseLaunchEventNotifications;	// IMP=0x00000000002d70da
- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;	// IMP=0x00000000002d6f37
- (id)initWithAssetsdClient:(id)arg1;	// IMP=0x00000000002d6eb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

