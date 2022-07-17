//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHAssetCollection;

@interface PXStoryPPTConfiguration : NSObject
{
    NSString *_contentDescription;	// 8 = 0x8
    PHAssetCollection *_assetCollection;	// 16 = 0x10
    long long _collectionType;	// 24 = 0x18
    unsigned long long _assetType;	// 32 = 0x20
    unsigned long long _assetCount;	// 40 = 0x28
    double _preferredStoryDuration;	// 48 = 0x30
    unsigned long long _subpreset;	// 56 = 0x38
}

+ (void)_requestPhotoLibraryWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000009168c9
+ (void)_fetchLatestMemoriesWithMaximumCount:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000916825
+ (void)_configureConfiguration:(id)arg1 forSubpreset:(unsigned long long)arg2;	// IMP=0x00000000009167b0
+ (id)configurationsForPreset:(unsigned long long)arg1 subpreset:(unsigned long long)arg2 testOptions:(id)arg3;	// IMP=0x00000000009164a4
- (void).cxx_destruct;	// IMP=0x0000000000915f0d
@property(nonatomic) unsigned long long subpreset; // @synthesize subpreset=_subpreset;
@property(nonatomic) double preferredStoryDuration; // @synthesize preferredStoryDuration=_preferredStoryDuration;
@property(nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(readonly, nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
- (id)init;	// IMP=0x0000000000915e2d
- (id)_stringFromAssetType:(unsigned long long)arg1;	// IMP=0x0000000000915df3
- (id)_stringFromAssetCount:(unsigned long long)arg1;	// IMP=0x0000000000915d74
- (void)_performPhotoLibraryFetch:(CDUnknownBlockType)arg1;	// IMP=0x0000000000915cd4
- (void)_completeConfigurationRequestWithStoryConfiguration:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000915aef
- (void)_completeConfigurationRequestWithFetchResult:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000915a5b
- (void)_completeConfigurationRequestWithAssetCollection:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000091596a
- (void)_createSyntheticAssetsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000091581c
- (void)_fetchAssetsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000915725
- (void)_fetchLatestAssetCollectionOfType:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000915623
- (void)requestStoryConfigurationWithOptions:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000009153b4
@property(readonly, nonatomic) NSString *name;
- (id)initWithAssetType:(unsigned long long)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000915199
- (id)initWithAssetCollection:(id)arg1 name:(id)arg2;	// IMP=0x00000000009150ee
- (id)initWithLatestCollectionOfType:(long long)arg1;	// IMP=0x0000000000915014
- (id)initWithPreset:(unsigned long long)arg1;	// IMP=0x0000000000914ea7

@end
