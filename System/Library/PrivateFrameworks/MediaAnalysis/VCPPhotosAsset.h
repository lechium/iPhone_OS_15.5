//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, PHAsset;

@interface VCPPhotosAsset
{
    PHAsset *_asset;	// 8 = 0x8
    NSArray *_cachedResources;	// 16 = 0x10
    _Bool _onceExif;	// 24 = 0x18
    NSDictionary *_cachedExif;	// 32 = 0x20
    _Bool _onceScenes;	// 40 = 0x28
    NSMutableDictionary *_cachedScenes;	// 48 = 0x30
}

+ (id)assetWithPHAsset:(id)arg1;	// IMP=0x00000000001a06fd
- (void).cxx_destruct;	// IMP=0x00000000001a1387
- (id)faces;	// IMP=0x00000000001a120d
- (id)scenes;	// IMP=0x00000000001a0a85
- (id)allScenes;	// IMP=0x00000000001a0928
- (id)mainFileURL;	// IMP=0x00000000001a088b
- (id)localIdentifier;	// IMP=0x00000000001a086e
@property(readonly, nonatomic) NSArray *resources;
- (id)fingerprint;	// IMP=0x00000000001a07f3
- (id)modificationDate;	// IMP=0x00000000001a07d6
- (unsigned long long)pixelHeight;	// IMP=0x00000000001a07b9
- (unsigned long long)pixelWidth;	// IMP=0x00000000001a079c
- (unsigned long long)mediaSubtypes;	// IMP=0x00000000001a077f
- (long long)mediaType;	// IMP=0x00000000001a0762
- (id)initWithPHAsset:(id)arg1;	// IMP=0x00000000001a067b
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;	// IMP=0x00000000001a16ff
- (id)exif;	// IMP=0x00000000001a13da
- (float)originalPhotoOffsetSeconds;	// IMP=0x00000000001a1d84
- (float)photoOffsetSeconds;	// IMP=0x00000000001a1cb2
- (struct CGSize)originalMovieSize;	// IMP=0x00000000001a2875
- (id)originalMovie;	// IMP=0x00000000001a27af
- (id)streamedMovie;	// IMP=0x00000000001a25d7
- (id)movie;	// IMP=0x00000000001a23c4
- (CDStruct_e83c9415)slomoRange;	// IMP=0x00000000001a20df
- (float)slowmoRate;	// IMP=0x00000000001a207b
- (double)duration;	// IMP=0x00000000001a205e

@end

