//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryDisplayAssetFetchResult-Protocol.h>

@class NSString, PXStoryResourcesDataSource, PXStoryReusableDisplayAsset;
@protocol PXDisplayAsset;

@interface _PXStoryPrecomposedDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult>
{
    long long _capacity;	// 8 = 0x8
    long long *_resourceIndexes;	// 16 = 0x10
    PXStoryReusableDisplayAsset *_asset;	// 24 = 0x18
    PXStoryResourcesDataSource *_resourcesDataSource;	// 32 = 0x20
    long long _count;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000094f481
@property(nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094f3f3
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000094f379
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000094f2ff
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000094f27c
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000094f167
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000094f155
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094f0f9
@property(readonly, nonatomic) const long long *resourceIndexes;
- (id)storyDisplayAssetAtIndex:(long long)arg1;	// IMP=0x000000000094f04e
- (void)configureWithRange:(struct _NSRange)arg1 resourcesDataSource:(id)arg2;	// IMP=0x000000000094efea
- (void)dealloc;	// IMP=0x000000000094efb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
