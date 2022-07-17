//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface USOSchemaUSOEntityIdentifierTier1
{
    unsigned int _index;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    NSString *_backingAppBundleId;	// 24 = 0x18
    struct {
        unsigned int index:1;
    } _has;	// 32 = 0x20
    _Bool _hasValue;	// 36 = 0x24
    _Bool _hasBackingAppBundleId;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x000000000030ff9c
@property(nonatomic) _Bool hasBackingAppBundleId; // @synthesize hasBackingAppBundleId=_hasBackingAppBundleId;
@property(nonatomic) _Bool hasValue; // @synthesize hasValue=_hasValue;
@property(copy, nonatomic) NSString *backingAppBundleId; // @synthesize backingAppBundleId=_backingAppBundleId;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000030fd4f
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000030fc91
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000030fa8b
- (unsigned long long)hash;	// IMP=0x000000000030fa0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030f729
- (void)writeTo:(id)arg1;	// IMP=0x000000000030f655
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030f3f9
- (void)deleteBackingAppBundleId;	// IMP=0x000000000030f3e5
- (void)deleteValue;	// IMP=0x000000000030f3bc
- (void)deleteIndex;	// IMP=0x000000000030f37d
@property(nonatomic) _Bool hasIndex;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035f022
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035efea

@end
