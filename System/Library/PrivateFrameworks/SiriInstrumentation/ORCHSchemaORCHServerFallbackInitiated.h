//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface ORCHSchemaORCHServerFallbackInitiated
{
    int _fallbackReason;	// 8 = 0x8
    NSArray *_missingAssets;	// 16 = 0x10
    struct {
        unsigned int fallbackReason:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000289a3b
@property(copy, nonatomic) NSArray *missingAssets; // @synthesize missingAssets=_missingAssets;
@property(nonatomic) int fallbackReason; // @synthesize fallbackReason=_fallbackReason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000028974a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000028968c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000028949f
- (unsigned long long)hash;	// IMP=0x0000000000289452
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028928c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000289111
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000289104
- (int)missingAssetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002890b5
- (unsigned long long)missingAssetCount;	// IMP=0x0000000000289098
- (void)addMissingAsset:(int)arg1;	// IMP=0x0000000000289002
- (void)deleteMissingAsset;	// IMP=0x0000000000288ff0
- (void)clearMissingAsset;	// IMP=0x0000000000288fd3
- (void)deleteFallbackReason;	// IMP=0x0000000000288fa9
@property(nonatomic) _Bool hasFallbackReason;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000355c2c

@end
