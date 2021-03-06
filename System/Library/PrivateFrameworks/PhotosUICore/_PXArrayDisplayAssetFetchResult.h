//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>

@class NSArray, NSString;
@protocol PXDisplayAsset;

@interface _PXArrayDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult>
{
    NSArray *_assets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006326b2
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000063269c
@property(readonly, nonatomic) long long count;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x0000000000632674
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000006325f0
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000006325da
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000632598
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000632586
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000632570
- (id)initWithAssets:(id)arg1;	// IMP=0x00000000006324fd
- (id)init;	// IMP=0x00000000006324e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

