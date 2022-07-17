//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMCameraClipEncryptionManager, HMDCameraClipSegmentMetadata, HMFTimer, NSData, NSString;

@interface HMDCameraClipAppendStreamingAssetOperation <HMFTimerDelegate>
{
    NSData *_data;	// 8 = 0x8
    HMDCameraClipSegmentMetadata *_metadata;	// 16 = 0x10
    HMCameraClipEncryptionManager *_encryptionManager;	// 24 = 0x18
    HMFTimer *_retryTimer;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000007b7efa
+ (_Bool)shouldRetry;	// IMP=0x00000000007b7e52
+ (id)metadataPropertyName;	// IMP=0x00000000007b7daa
+ (id)streamingAssetPropertyName;	// IMP=0x00000000007b7d02
- (void).cxx_destruct;	// IMP=0x00000000007b6f18
@property(retain) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) HMDCameraClipSegmentMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)attributeDescriptions;	// IMP=0x00000000007b6d10
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007b6b31
- (id)_retryDelayForError:(id)arg1;	// IMP=0x00000000007b6a35
- (id)_updateClipModel:(id)arg1 usingStreamingAsset:(id)arg2;	// IMP=0x00000000007b6638
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000007b65f5
- (void)finish;	// IMP=0x00000000007b65b2
- (void)main;	// IMP=0x00000000007b6390
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 dataSource:(id)arg6;	// IMP=0x00000000007b61fe
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;	// IMP=0x00000000007b611d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
