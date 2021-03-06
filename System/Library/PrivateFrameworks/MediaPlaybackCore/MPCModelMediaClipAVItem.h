//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlaybackCore/MPRTCReportingItemSessionCreating-Protocol.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

__attribute__((visibility("hidden")))
@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating>
{
    MPModelGenericObject *_modelGenericObject;	// 112 = 0x70
    MPModelMediaClip *_mediaClip;	// 120 = 0x78
}

+ (id)requiredMediaClipProperties;	// IMP=0x000000000006e4e5
- (void).cxx_destruct;	// IMP=0x000000000006e477
@property(readonly, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
- (_Bool)_isVideoAsset;	// IMP=0x000000000006e307
- (id)_currentPreferredStaticAsset;	// IMP=0x000000000006dd3c
- (void)_applyLoudnessInfo;	// IMP=0x000000000006db37
- (_Bool)_allowsCellularPlayback;	// IMP=0x000000000006dac2
@property(readonly, nonatomic) long long rtcReportingAssetType;
- (id)rtcReportingServiceIdentifier;	// IMP=0x000000000006daaa
- (CDUnknownBlockType)artworkCatalogBlock;	// IMP=0x000000000006da1f
- (_Bool)allowsExternalPlayback;	// IMP=0x000000000006da17
- (_Bool)allowsAirPlayFromCloud;	// IMP=0x000000000006da0f
- (_Bool)supportsRateChange;	// IMP=0x000000000006da07
- (void)reevaluateType;	// IMP=0x000000000006d9c6
- (_Bool)prefersSeekOverSkip;	// IMP=0x000000000006d9be
- (id)modelGenericObject;	// IMP=0x000000000006d8f4
- (id)mainTitle;	// IMP=0x000000000006d8d7
- (void)loadAssetAndPlayerItem;	// IMP=0x000000000006d5c1
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;	// IMP=0x000000000006d53b
- (_Bool)isStreamable;	// IMP=0x000000000006d533
- (_Bool)isAssetURLValid;	// IMP=0x000000000006d49b
- (double)durationFromExternalMetadata;	// IMP=0x000000000006d41d
@property(readonly, copy) NSString *description;
- (id)initWithMediaClip:(id)arg1;	// IMP=0x000000000006d2dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

