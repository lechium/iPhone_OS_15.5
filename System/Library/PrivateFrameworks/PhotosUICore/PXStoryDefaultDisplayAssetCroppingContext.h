//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;
@protocol PXDisplayAssetCollection;

@interface PXStoryDefaultDisplayAssetCroppingContext
{
    NSSet *_featuredPersonLocalIdentifiers;	// 8 = 0x8
    id <PXDisplayAssetCollection> _assetCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009f1755
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)adjustOrderedFaces:(id)arg1 featuredFaceCount:(long long *)arg2;	// IMP=0x00000000009f1632
- (id)adjustOrderedFaces:(id)arg1 featuredFaceCount:(long long *)arg2 forFeaturedPersonWithLocalIdentifiers:(id)arg3;	// IMP=0x00000000009f13e9
- (id)orderFaces:(id)arg1;	// IMP=0x00000000009f1169
@property(readonly, nonatomic) NSSet *featuredPersonLocalIdentifiers; // @synthesize featuredPersonLocalIdentifiers=_featuredPersonLocalIdentifiers;
- (id)initWithAssetCollection:(id)arg1;	// IMP=0x00000000009f0fb3
- (id)init;	// IMP=0x00000000009f0f9f

@end
