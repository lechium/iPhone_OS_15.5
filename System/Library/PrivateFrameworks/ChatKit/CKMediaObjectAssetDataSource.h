//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSArray, NSDictionary, NSString, NSURL;
@protocol PXDisplayAssetCollection;

@interface CKMediaObjectAssetDataSource : PXAssetsDataSource
{
    _Bool _hasCheckedForMomentShareURL;	// 8 = 0x8
    _Bool _hasCollectedItemsCount;	// 9 = 0x9
    NSURL *_momentShareURL;	// 16 = 0x10
    NSArray *_mediaObjects;	// 24 = 0x18
    NSString *_parentChatItemGUID;	// 32 = 0x20
    NSArray *_chatItems;	// 40 = 0x28
    NSDictionary *_chatItemGUIDMap;	// 48 = 0x30
    NSArray *_displayAssets;	// 56 = 0x38
    id <PXDisplayAssetCollection> _assetCollection;	// 64 = 0x40
    CDStruct_aa0b146f _assetTypeCounts;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000479db0
@property(retain, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) NSArray *displayAssets; // @synthesize displayAssets=_displayAssets;
@property(retain, nonatomic) NSDictionary *chatItemGUIDMap; // @synthesize chatItemGUIDMap=_chatItemGUIDMap;
@property(retain, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
@property(retain, nonatomic) NSString *parentChatItemGUID; // @synthesize parentChatItemGUID=_parentChatItemGUID;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x0000000000479bce
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000479b30
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000479a5f
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x0000000000479a57
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000004799e7
- (long long)numberOfSections;	// IMP=0x00000000004799dc
- (struct PXSimpleIndexPath)_indexPathForMediaObject:(id)arg1;	// IMP=0x0000000000479916
- (id)temporaryChatItemForAssetReference:(id)arg1;	// IMP=0x000000000047960e
- (id)chatItemForAsset:(id)arg1;	// IMP=0x000000000047934d
- (id)chatItemForAssetReference:(id)arg1;	// IMP=0x0000000000479231
- (id)assetReferenceForMediaObject:(id)arg1;	// IMP=0x00000000004791b4
@property(readonly, nonatomic) CDStruct_aa0b146f assetTypeCounts; // @synthesize assetTypeCounts=_assetTypeCounts;
@property(readonly, nonatomic) NSURL *momentShareURL; // @synthesize momentShareURL=_momentShareURL;
@property(readonly, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
- (id)copyRefreshingAssetsAtIndexes:(id)arg1;	// IMP=0x0000000000478b86
- (id)initWithChatItems:(id)arg1 parentChatItemGUID:(id)arg2 displayAssets:(id)arg3 chatItemGUIDMap:(id)arg4;	// IMP=0x0000000000478a3d
- (id)initWithChatItems:(id)arg1 parentChatItemGUID:(id)arg2;	// IMP=0x000000000047882b

@end

