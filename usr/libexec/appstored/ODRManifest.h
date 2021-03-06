//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSDate, NSNumber, NSString;

@interface ODRManifest
{
    NSArray *_assetPacks;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x00400000000e47b8
+ (MISSING_TYPE *)databaseEntityClass;	// IMP=0x00100000000e47a7
- (void).cxx_destruct;	// IMP=0x00200000000e544a
- (void)setAssetPacks:(id)arg1;	// IMP=0x00100000000e5436
- (id)copyDataWithError:(id *)arg1;	// IMP=0x00100000000e53ca
- (id)assetPackForBundleKey:(id)arg1;	// IMP=0x00100000000e51fe
- (id)allAssetPacks;	// IMP=0x00100000000e51e9
- (id)allAssetPackIDs;	// IMP=0x00100000000e501f
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *thinningVariant;
@property(readonly, nonatomic) NSString *storageID;
@property(readonly, nonatomic, getter=isStoreBased) _Bool storeBased;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) NSString *itemID;
@property(readonly, nonatomic, getter=isLocalCache) _Bool localCache;
@property(readonly, nonatomic) NSDate *lastModificationDate;
@property(readonly, nonatomic) NSNumber *evid;
@property(readonly, nonatomic) NSString *bundleID;
- (id)initWithDictionary:(id)arg1 andBundleID:(id)arg2 fromSource:(long long)arg3;	// IMP=0x00100000000e49c3
- (id)initWithData:(id)arg1 andBundleID:(id)arg2 fromSource:(long long)arg3;	// IMP=0x00100000000e492b
- (id)initWithContentsOfURL:(id)arg1 andBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000e4877

@end

