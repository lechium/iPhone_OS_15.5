//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack, AVPlayerItemTrackInternal, NSArray;

@interface AVPlayerItemTrack : NSObject
{
    AVPlayerItemTrackInternal *_playerItemTrack;	// 8 = 0x8
}

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(_Bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;	// IMP=0x0000000000076b5f
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;	// IMP=0x0000000000077d1e
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;	// IMP=0x0000000000077cd5
- (void)_transferCachedValuesToFig;	// IMP=0x0000000000077c18
- (void)_updateTrackExtractionIDArrayProperty;	// IMP=0x0000000000077a2b
- (void)_transferHapticVolumeToFig;	// IMP=0x00000000000779b2
- (float)hapticVolume;	// IMP=0x00000000000779a3
- (void)setHapticVolume:(float)arg1;	// IMP=0x0000000000077980
- (void)_transferActiveHapticChannelIndexToFig;	// IMP=0x0000000000077908
- (long long)activeHapticChannelIndex;	// IMP=0x00000000000778fa
- (void)setActiveHapticChannelIndex:(long long)arg1;	// IMP=0x00000000000778d8
- (void)setDisableColorMatching:(_Bool)arg1;	// IMP=0x00000000000778b7
- (void)_transferDisableColorMatchingToFig;	// IMP=0x0000000000077841
- (_Bool)disableColorMatching;	// IMP=0x0000000000077826
- (void)setVideoEnhancementFilterOptions:(id)arg1;	// IMP=0x00000000000777c3
- (void)_transferVideoEnhancementOptionsToFig;	// IMP=0x0000000000077768
- (id)videoEnhancementFilterOptions;	// IMP=0x000000000007775a
- (_Bool)willTrimShortDurationAudioSamples;	// IMP=0x00000000000776c6
- (int)effectiveEQPreset;	// IMP=0x0000000000077627
- (void)setLoudnessInfo:(id)arg1;	// IMP=0x00000000000775c4
- (void)_transferLoudnessInfoToFig;	// IMP=0x0000000000077566
- (id)effectiveLoudnessInfo;	// IMP=0x00000000000774e9
- (id)loudnessInfo;	// IMP=0x00000000000774db
@property(readonly, nonatomic) float currentVideoFrameRate;
- (id)fallbackTrack;	// IMP=0x00000000000772b8
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_transferEnabledToFig;	// IMP=0x00000000000770f7
@property(readonly, nonatomic) AVAssetTrack *assetTrack;
- (int)trackID;	// IMP=0x0000000000076f0e
- (id)_playerItem;	// IMP=0x0000000000076ef4
- (id)_weakReferenceToPlayerItem;	// IMP=0x0000000000076ee6
- (unsigned long long)hash;	// IMP=0x0000000000076ebd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000076e3b
- (id)description;	// IMP=0x0000000000076dd8
- (void)dealloc;	// IMP=0x0000000000076d33
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(_Bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;	// IMP=0x0000000000076bbf
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeOutput:(id)arg1;	// IMP=0x0000000000077e92
- (void)addOutput:(id)arg1;	// IMP=0x0000000000077d2c

@end

