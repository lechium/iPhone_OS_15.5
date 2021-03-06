//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMCameraClipEncryptionManager, HMDCameraClipSegmentMetadata, HMFTimer, NSData, NSString;

@interface HMDCameraClipAppendStreamingAssetOperation <HMFTimerDelegate>
{
    NSData *_data;	// 8 = 0x8
    HMDCameraClipSegmentMetadata *_metadata;	// 16 = 0x10
    HMCameraClipEncryptionManager *_encryptionManager;	// 24 = 0x18
    HMFTimer *_retryTimer;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000072f49a
+ (_Bool)shouldRetry;	// IMP=0x000000000072f3f2
+ (id)metadataPropertyName;	// IMP=0x000000000072f34a
+ (id)streamingAssetPropertyName;	// IMP=0x000000000072f2a2
- (void).cxx_destruct;	// IMP=0x000000000072e4b8
@property(retain) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) HMDCameraClipSegmentMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)attributeDescriptions;	// IMP=0x000000000072e2b0
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000072e0d1
- (id)_retryDelayForError:(id)arg1;	// IMP=0x000000000072dfd5
- (id)_updateClipModel:(id)arg1 usingStreamingAsset:(id)arg2;	// IMP=0x000000000072dbd8
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000072db95
- (void)finish;	// IMP=0x000000000072db52
- (void)main;	// IMP=0x000000000072d930
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 dataSource:(id)arg6;	// IMP=0x000000000072d79e
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;	// IMP=0x000000000072d6bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

