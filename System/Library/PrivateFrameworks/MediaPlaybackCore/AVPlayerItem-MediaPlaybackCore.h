//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

@interface AVPlayerItem (MediaPlaybackCore)
- (id)mpc_setupDescription;	// IMP=0x0000000000148513
- (void)mpc_updatePreferredForwardBufferDurationForPlayerAudioFormat:(id)arg1;	// IMP=0x00000000001484cb
- (void)mpc_updatePrefersOfflinePlayableVariantForPlayerAudioFormat:(id)arg1 isDownloadedAsset:(_Bool)arg2;	// IMP=0x0000000000148487
- (void)mpc_updatePreferredMaximumAudioSampleRateForPlayerAudioFormat:(id)arg1;	// IMP=0x0000000000148433
- (void)mpc_updateAVAudioSpatializationFormatsForPlayerAudioFormat:(id)arg1;	// IMP=0x00000000001483be
- (void)mpc_updateAVVariantPreferenceForPlayerAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2;	// IMP=0x0000000000148365
- (void)mpc_updatePreferredForwardBufferDurationForAudioAssetType:(long long)arg1;	// IMP=0x00000000001482f3
- (void)mpc_updatePreferredMaximumAudioSampleRateForAudioAssetType:(long long)arg1;	// IMP=0x00000000001482c0
- (void)mpc_updateAVAudioSpatializationFormatsForAudioAssetType:(long long)arg1;	// IMP=0x0000000000148277
- (void)mpc_updateAVVariantPreferenceForAudioAssetType:(long long)arg1 forceSpatial:(_Bool)arg2;	// IMP=0x000000000014823b
- (void)mpc_setupWithPlayerAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2 downloadedAsset:(_Bool)arg3;	// IMP=0x00000000001481a4
- (void)mpc_setupWithAudioAssetType:(long long)arg1 forceSpatial:(_Bool)arg2;	// IMP=0x0000000000148142
@end

