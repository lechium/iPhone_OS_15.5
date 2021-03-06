//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryMovieHighlight-Protocol.h>

@class NSData;

@interface PXStoryMockMovieHighlight : NSObject <PXStoryMovieHighlight>
{
    _Bool _hasFace;	// 8 = 0x8
    _Bool _hasVoice;	// 9 = 0x9
    _Bool _hasMusic;	// 10 = 0xa
    float _qualityScore;	// 12 = 0xc
    float _loudness;	// 16 = 0x10
    float _peakVolume;	// 20 = 0x14
    NSData *_normalizationData;	// 24 = 0x18
    struct CGRect _bestPlaybackRect;	// 32 = 0x20
    CDStruct_e83c9415 _timeRange;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000006ac071
@property(nonatomic) struct CGRect bestPlaybackRect; // @synthesize bestPlaybackRect=_bestPlaybackRect;
@property(nonatomic) float peakVolume; // @synthesize peakVolume=_peakVolume;
@property(nonatomic) float loudness; // @synthesize loudness=_loudness;
@property(nonatomic) _Bool hasMusic; // @synthesize hasMusic=_hasMusic;
@property(nonatomic) _Bool hasVoice; // @synthesize hasVoice=_hasVoice;
@property(nonatomic) _Bool hasFace; // @synthesize hasFace=_hasFace;
@property(retain, nonatomic) NSData *normalizationData; // @synthesize normalizationData=_normalizationData;
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)description;	// IMP=0x00000000006abf68
- (CDStruct_e83c9415)bestTimeRangeForPreferredDuration:(double)arg1 min:(double)arg2 max:(double)arg3;	// IMP=0x00000000006abf49
- (CDStruct_e83c9415)bestTimeRangeForTargetDuration:(double)arg1;	// IMP=0x00000000006abd27
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 bestPlaybackRect:(struct CGRect)arg3 normalizationData:(id)arg4 face:(_Bool)arg5 voice:(_Bool)arg6 music:(_Bool)arg7 loudness:(float)arg8 peak:(float)arg9;	// IMP=0x00000000006abbee
- (id)initWithBestPlaybackRect:(struct CGRect)arg1;	// IMP=0x00000000006abb9d
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 bestPlaybackRect:(struct CGRect)arg3 normalizationData:(id)arg4;	// IMP=0x00000000006abb7a
- (id)init;	// IMP=0x00000000006abb31

@end

