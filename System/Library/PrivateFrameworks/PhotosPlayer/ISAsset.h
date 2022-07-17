//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset;

@interface ISAsset : NSObject
{
    id _UIImage;	// 8 = 0x8
    int _photoEXIFOrientation;	// 16 = 0x10
    AVAsset *_videoAsset;	// 24 = 0x18
    struct CGImage *_photo;	// 32 = 0x20
    double _photoTime;	// 40 = 0x28
    unsigned long long _options;	// 48 = 0x30
}

+ (id)assetForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000035b4
- (void).cxx_destruct;	// IMP=0x000000000000358c
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
@property(readonly, copy, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(readonly, nonatomic) _Bool hasColorAdjustments;
- (void)resetAVObjects;	// IMP=0x00000000000034a0
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoCMTime;
- (id)initWithVideoAsset:(id)arg1 UIImage:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;	// IMP=0x00000000000033bd
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;	// IMP=0x0000000000003312
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;	// IMP=0x00000000000032fa
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3;	// IMP=0x00000000000032df
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000032c4
- (id)init;	// IMP=0x00000000000032a2
- (void)dealloc;	// IMP=0x0000000000003223
- (id)description;	// IMP=0x0000000000003125

@end
