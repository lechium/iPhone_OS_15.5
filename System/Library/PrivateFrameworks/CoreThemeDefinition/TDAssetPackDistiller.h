//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface TDAssetPackDistiller
{
    NSSet *assetPackMap;	// 56 = 0x38
}

@property(retain, nonatomic) NSSet *assetPackMap; // @synthesize assetPackMap;
- (_Bool)assetStoreWriteToDisk;	// IMP=0x000000000001826c
- (void)setAssetColorSpaceID:(unsigned int)arg1;	// IMP=0x00000000000180f4
- (void)setAssetSchemaVersion:(unsigned int)arg1;	// IMP=0x0000000000017f7c
- (void)setAssetStorageVersionString:(const char *)arg1;	// IMP=0x0000000000017e02
- (void)setAssetStorageVersion:(unsigned int)arg1;	// IMP=0x0000000000017c8a
- (void)setAssetStoreKeySemantics:(int)arg1;	// IMP=0x0000000000017b12
- (void)setAssetStoreKeyFormatData:(id)arg1;	// IMP=0x0000000000017998
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;	// IMP=0x0000000000017820
- (void)setAssetStoreUuid:(id)arg1;	// IMP=0x00000000000176a6
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;	// IMP=0x000000000001752e
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;	// IMP=0x00000000000173b4
- (_Bool)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken *)arg2 fromRenditionSpec:(id)arg3;	// IMP=0x00000000000170f4
- (id)assetPackForTags:(id)arg1;	// IMP=0x0000000000016f87
- (void)dealloc;	// IMP=0x0000000000016f47
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 usingAssetPackMapping:(id)arg4 attemptIncremental:(_Bool)arg5;	// IMP=0x0000000000016bab

@end

