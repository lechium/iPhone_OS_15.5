//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray, NSDictionary;
@protocol AVVideoCompositing;

@interface AVAssetReaderVideoCompositionOutput
{
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;	// 16 = 0x10
}

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;	// IMP=0x000000000008bc38
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;	// IMP=0x000000000008cc12
- (id)_videoCompositionProcessorColorProperties;	// IMP=0x000000000008cb0e
- (id)_formatDescriptions;	// IMP=0x000000000008c99d
- (_Bool)_prepareForReadingReturningError:(id *)arg1;	// IMP=0x000000000008c841
- (id)_errorForOSStatus:(int)arg1;	// IMP=0x000000000008c7fe
- (id)_asset;	// IMP=0x000000000008c7c5
- (id)mediaType;	// IMP=0x000000000008c789
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;	// IMP=0x000000000008c56d
- (void)_setVideoComposition:(id)arg1;	// IMP=0x000000000008c43e
@property(readonly, nonatomic) NSDictionary *videoSettings;
- (id)sampleDataTrackIDs;	// IMP=0x000000000008c3f3
@property(readonly, nonatomic) NSArray *videoTracks;
- (id)description;	// IMP=0x000000000008c37b
- (_Bool)alwaysCopiesSampleData;	// IMP=0x000000000008c333
- (void)dealloc;	// IMP=0x000000000008c28e
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;	// IMP=0x000000000008bc8a
- (id)init;	// IMP=0x000000000008bc74

@end
