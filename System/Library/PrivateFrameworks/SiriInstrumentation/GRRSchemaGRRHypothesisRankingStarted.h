//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface GRRSchemaGRRHypothesisRankingStarted
{
    NSString *_assetVersion;	// 8 = 0x8
    NSArray *_featureFlags;	// 16 = 0x10
    _Bool _hasAssetVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000187c75
@property(nonatomic) _Bool hasAssetVersion; // @synthesize hasAssetVersion=_hasAssetVersion;
@property(copy, nonatomic) NSArray *featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000187932
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000187874
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000187500
- (unsigned long long)hash;	// IMP=0x00000000001874b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001871f6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000187086
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000187079
- (id)featureFlagsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018705c
- (unsigned long long)featureFlagsCount;	// IMP=0x000000000018703f
- (void)addFeatureFlags:(id)arg1;	// IMP=0x0000000000186fc5
- (void)deleteFeatureFlags;	// IMP=0x0000000000186fb3
- (void)clearFeatureFlags;	// IMP=0x0000000000186f96
- (void)deleteAssetVersion;	// IMP=0x0000000000186f82
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000346440
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000346408

@end
