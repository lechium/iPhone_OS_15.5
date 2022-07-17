//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/PXDisplayAssetFetchResult-Protocol.h>

@class NSArray, NSString;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface CKStaticDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult>
{
    NSArray *_assets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000045df33
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000045df13
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000045df03
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000045def3
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000045deb1
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000045de9b
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000045de85
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000045de6f
@property(readonly, nonatomic) long long count;
- (id)initWithAssets:(id)arg1;	// IMP=0x000000000045dde6
- (id)init;	// IMP=0x000000000045ddcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
