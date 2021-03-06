//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface FLOWSchemaFLOWBriefingContext
{
    NSArray *_enabledFeatures;	// 8 = 0x8
    int _briefingAttribute;	// 16 = 0x10
    struct {
        unsigned int briefingAttribute:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000139798
@property(nonatomic) int briefingAttribute; // @synthesize briefingAttribute=_briefingAttribute;
@property(copy, nonatomic) NSArray *enabledFeatures; // @synthesize enabledFeatures=_enabledFeatures;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001394ae
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001393f0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001391b2
- (unsigned long long)hash;	// IMP=0x000000000013915f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000138f8e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000138e01
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000138ba3
- (void)deleteBriefingAttribute;	// IMP=0x0000000000138b79
@property(nonatomic) _Bool hasBriefingAttribute;
- (int)enabledFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000138ae5
- (unsigned long long)enabledFeaturesCount;	// IMP=0x0000000000138ac8
- (void)addEnabledFeatures:(int)arg1;	// IMP=0x0000000000138a32
- (void)deleteEnabledFeatures;	// IMP=0x0000000000138a20
- (void)clearEnabledFeatures;	// IMP=0x0000000000138a03
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003421df

@end

