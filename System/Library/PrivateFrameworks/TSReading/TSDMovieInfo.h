//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDMixing-Protocol.h>

@class NSURL, TSDMediaStyle, TSPData;

@interface TSDMovieInfo <TSDMixing>
{
    TSPData *mMovieData;	// 128 = 0x80
    NSURL *mMovieRemoteURL;	// 136 = 0x88
    TSPData *mImportedAuxiliaryMovieData;	// 144 = 0x90
    TSPData *mAudioOnlyImageData;	// 152 = 0x98
    double mStartTime;	// 160 = 0xa0
    double mEndTime;	// 168 = 0xa8
    double mPosterTime;	// 176 = 0xb0
    TSPData *mPosterImageData;	// 184 = 0xb8
    struct CGSize mNaturalSize;	// 192 = 0xc0
    unsigned long long mLoopOption;	// 208 = 0xd0
    float mVolume;	// 216 = 0xd8
    _Bool mStreaming;	// 220 = 0xdc
    int mControlStyle;	// 224 = 0xe0
    _Bool mAllowsAirPlayVideo;	// 228 = 0xe4
    _Bool mUsesAirPlayVideoWhileAirPlayScreenIsActive;	// 229 = 0xe5
    NSURL *mURLForMPMPC;	// 232 = 0xe8
    TSDMediaStyle *mStyle;	// 240 = 0xf0
    _Bool mAudioOnly;	// 248 = 0xf8
}

+ (id)presetKinds;	// IMP=0x00000000001ad063
+ (double)defaultPosterTimeForDuration:(double)arg1;	// IMP=0x00000000001ac9aa
@property(nonatomic, getter=isStreaming) _Bool streaming; // @synthesize streaming=mStreaming;
@property(retain, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=mPosterImageData;
- (id)style;	// IMP=0x00000000001ae11b
- (_Bool)supportsHyperlinks;	// IMP=0x00000000001ae107
- (int)intValueForProperty:(int)arg1;	// IMP=0x00000000001ae0c1
- (float)floatValueForProperty:(int)arg1;	// IMP=0x00000000001ae078
- (double)doubleValueForProperty:(int)arg1;	// IMP=0x00000000001ae00d
- (id)objectForProperty:(int)arg1;	// IMP=0x00000000001adfb3
- (_Bool)containsProperty:(int)arg1;	// IMP=0x00000000001adf77
- (_Bool)supportsAttachedComments;	// IMP=0x00000000001adf62
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;	// IMP=0x00000000001add6b
- (id)generateEmptyPosterImageForContext:(id)arg1;	// IMP=0x00000000001adbe8
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;	// IMP=0x00000000001adb28
- (id)makeAVAssetWithOptions:(id)arg1;	// IMP=0x00000000001ad9f9
- (id)makeAVAsset;	// IMP=0x00000000001ad9e5
- (void)acceptVisitor:(id)arg1;	// IMP=0x00000000001ad9ca
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;	// IMP=0x00000000001ad94d
- (long long)mixingTypeWithObject:(id)arg1;	// IMP=0x00000000001ad733
- (id)animationFilters;	// IMP=0x00000000001ad6a5
- (_Bool)canChangeWrapType;	// IMP=0x00000000001ad639
- (Class)editorClass;	// IMP=0x00000000001ad631
- (Class)repClass;	// IMP=0x00000000001ad607
- (Class)layoutClass;	// IMP=0x00000000001ad5dd
- (Class)styleClass;	// IMP=0x00000000001ad5cc
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;	// IMP=0x00000000001ad1cb
- (struct CGSize)rawDataSize;	// IMP=0x00000000001ad1b3
- (id)presetKind;	// IMP=0x00000000001ad0f9
- (void)setStyle:(id)arg1;	// IMP=0x00000000001ad086
- (id)mediaFileType;	// IMP=0x00000000001acfce
- (id)mediaDisplayName;	// IMP=0x00000000001acf60
- (id)copyWithContext:(id)arg1 stylesheet:(id)arg2;	// IMP=0x00000000001acc10
- (id)copyWithContext:(id)arg1;	// IMP=0x00000000001acbfc
- (void)dealloc;	// IMP=0x00000000001acb5e
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;	// IMP=0x00000000001acafc
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;	// IMP=0x00000000001acaa1
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;	// IMP=0x00000000001aca3d
- (id)initWithContext:(id)arg1 geometry:(id)arg2;	// IMP=0x00000000001ac9b8
@property(retain, nonatomic) NSURL *urlForMPMPC;
@property(nonatomic) int controlStyle;
@property(nonatomic) _Bool usesAirPlayVideoWhileAirPlayScreenIsActive;
@property(nonatomic) _Bool allowsAirPlayVideo;
@property(nonatomic, getter=isAudioOnly) _Bool audioOnly;
@property(nonatomic) float volume;
@property(nonatomic) unsigned long long loopOption;
@property(nonatomic) double posterTime;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(retain, nonatomic) TSPData *audioOnlyImageData;
@property(retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property(retain, nonatomic) NSURL *movieRemoteURL;
@property(retain, nonatomic) TSPData *movieData;

@end

