//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue
{
    MPPlaybackContext *_playbackContext;	// 8 = 0x8
    long long _replaceIntent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023ed92
- (id)description;	// IMP=0x000000000023ed4a
- (id)siriWHAMetricsInfo;	// IMP=0x000000000023ed2d
- (id)siriRecommendationIdentifier;	// IMP=0x000000000023ed10
- (id)siriAssetInfo;	// IMP=0x000000000023ecf3
- (void)setReplaceIntent:(long long)arg1;	// IMP=0x000000000023ece2
- (long long)replaceIntent;	// IMP=0x000000000023ecd1
- (_Bool)isRequestingImmediatePlayback;	// IMP=0x000000000023ecc9
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000023eca8
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x000000000023ec47

@end

