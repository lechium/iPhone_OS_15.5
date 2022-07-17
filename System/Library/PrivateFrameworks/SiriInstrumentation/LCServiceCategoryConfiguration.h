//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LCServiceBlacklistedFields, LCServiceLoggingParameters, NSData;

@interface LCServiceCategoryConfiguration
{
    int _eventType;	// 8 = 0x8
    LCServiceLoggingParameters *_categoryParameters;	// 16 = 0x10
    LCServiceBlacklistedFields *_blacklist;	// 24 = 0x18
    CDStruct_07059a20 _has;	// 32 = 0x20
    _Bool _hasCategoryParameters;	// 36 = 0x24
    _Bool _hasBlacklist;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000000c5587
@property(nonatomic) _Bool hasBlacklist; // @synthesize hasBlacklist=_hasBlacklist;
@property(nonatomic) _Bool hasCategoryParameters; // @synthesize hasCategoryParameters=_hasCategoryParameters;
@property(retain, nonatomic) LCServiceBlacklistedFields *blacklist; // @synthesize blacklist=_blacklist;
@property(retain, nonatomic) LCServiceLoggingParameters *categoryParameters; // @synthesize categoryParameters=_categoryParameters;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000c5316
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000c5258
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000c4fc0
- (unsigned long long)hash;	// IMP=0x00000000000c4f40
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c4c5e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c4b55
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c4b48
- (void)deleteBlacklist;	// IMP=0x00000000000c4b34
- (void)deleteCategoryParameters;	// IMP=0x00000000000c4b0b
- (void)deleteEventType;	// IMP=0x00000000000c4acc
@property(nonatomic) _Bool hasEventType;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033b55b
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033b523

@end
