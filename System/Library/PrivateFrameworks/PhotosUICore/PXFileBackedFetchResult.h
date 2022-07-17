//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>

@class NSArray, NSString;
@protocol PXDisplayAsset;

@interface PXFileBackedFetchResult : NSObject <PXDisplayAssetFetchResult>
{
    NSArray *_assets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009b8766
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009b8746
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000009b8736
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000009b8726
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000009b86e4
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000009b86ce
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000009b86b8
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009b86a2
@property(readonly, nonatomic) long long count;
- (id)init;	// IMP=0x00000000009b8673
- (id)initWithAssets:(id)arg1;	// IMP=0x00000000009b8600

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
