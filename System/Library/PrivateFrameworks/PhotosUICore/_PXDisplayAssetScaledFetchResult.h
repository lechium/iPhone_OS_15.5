//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>

@class NSString;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface _PXDisplayAssetScaledFetchResult : NSObject <PXDisplayAssetFetchResult>
{
    id <PXDisplayAssetFetchResult> _fetchResult;	// 8 = 0x8
    long long _multipler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000632480
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000063245e
@property(readonly, nonatomic) long long count;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x0000000000632412
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000006323ec
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000006323d6
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000006322bf
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000006322ad
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000063228b
@property(readonly, copy) NSString *description;
- (id)initWithFetchResult:(id)arg1 multiplier:(long long)arg2;	// IMP=0x000000000063211f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
