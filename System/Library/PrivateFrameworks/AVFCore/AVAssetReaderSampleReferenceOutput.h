//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput
{
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;	// 16 = 0x10
}

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;	// IMP=0x000000000008d349
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;	// IMP=0x000000000008d606
- (_Bool)_trimsSampleDurations;	// IMP=0x000000000008d5d1
- (id)_asset;	// IMP=0x000000000008d5a6
- (id)mediaType;	// IMP=0x000000000008d57b
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)description;	// IMP=0x000000000008d503
- (void)dealloc;	// IMP=0x000000000008d49c
- (id)initWithTrack:(id)arg1;	// IMP=0x000000000008d394
- (id)init;	// IMP=0x000000000008d380

@end

