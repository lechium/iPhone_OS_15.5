//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput
{
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;	// 16 = 0x10
}

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;	// IMP=0x0000000000089039
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;	// IMP=0x0000000000089c8d
- (unsigned int)_getUniformMediaSubtypeIfExists;	// IMP=0x0000000000089b52
- (id)_figAssetReaderExtractionOptions;	// IMP=0x0000000000089907
- (id)_formatDescriptions;	// IMP=0x00000000000898dc
- (_Bool)_trimsSampleDurations;	// IMP=0x000000000008988c
- (id)_asset;	// IMP=0x0000000000089861
- (struct opaqueCMSampleBuffer *)_copyNextSampleBufferForAdaptor;	// IMP=0x0000000000089832
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;	// IMP=0x000000000008979b
- (id)mediaType;	// IMP=0x0000000000089770
- (_Bool)appliesPreferredTrackTransform;	// IMP=0x000000000008975c
- (void)setAppliesPreferredTrackTransform:(_Bool)arg1;	// IMP=0x0000000000089748
@property(readonly, nonatomic, getter=_isAttachedToAdaptor) _Bool attachedToAdaptor;
- (id)_attachedAdaptor;	// IMP=0x00000000000896ff
- (void)_setAttachedAdaptor:(id)arg1;	// IMP=0x00000000000896a8
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(readonly, nonatomic) NSDictionary *outputSettings;
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)description;	// IMP=0x00000000000894a2
- (void)dealloc;	// IMP=0x000000000008941a
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;	// IMP=0x000000000008908b
- (id)init;	// IMP=0x0000000000089075

@end

