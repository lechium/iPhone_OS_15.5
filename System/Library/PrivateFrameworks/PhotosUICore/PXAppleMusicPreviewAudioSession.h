//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXAppleMusicPreviewAudioSession
{
    long long _requestID;	// 8 = 0x8
}

- (void)_handleValuesLoadedForAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000446932
- (void)_handleRequestedAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000446667
- (void)cancelMediaRequest;	// IMP=0x000000000044660c
- (void)requestMediaWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000044637c
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(CDStruct_1b6d18a9)arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;	// IMP=0x0000000000446328

@end
