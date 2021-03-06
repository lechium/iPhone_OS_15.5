//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaDictationEndPointStop
{
    int _dictationEndPointType;	// 8 = 0x8
    CDStruct_78ff2909 _has;	// 12 = 0xc
}

@property(nonatomic) int dictationEndPointType; // @synthesize dictationEndPointType=_dictationEndPointType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012ae7a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000012adbc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000012abba
- (unsigned long long)hash;	// IMP=0x000000000012ab8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012aaea
- (void)writeTo:(id)arg1;	// IMP=0x000000000012aabf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012aab2
- (void)deleteDictationEndPointType;	// IMP=0x000000000012aa88
@property(nonatomic) _Bool hasDictationEndPointType;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003413b5

@end

