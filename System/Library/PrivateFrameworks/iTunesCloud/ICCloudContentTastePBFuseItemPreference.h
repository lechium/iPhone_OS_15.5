//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

@interface ICCloudContentTastePBFuseItemPreference : PBCodable <NSCopying>
{
    long long _actionTimestampMillis;	// 8 = 0x8
    long long _adamId;	// 16 = 0x10
    long long _createdOffsetMillis;	// 24 = 0x18
    NSString *_externalId;	// 32 = 0x20
    int _preference;	// 40 = 0x28
    int _preferenceType;	// 44 = 0x2c
    struct {
        unsigned int actionTimestampMillis:1;
        unsigned int adamId:1;
        unsigned int createdOffsetMillis:1;
        unsigned int preferenceType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000143633
@property(nonatomic) long long actionTimestampMillis; // @synthesize actionTimestampMillis=_actionTimestampMillis;
@property(nonatomic) long long createdOffsetMillis; // @synthesize createdOffsetMillis=_createdOffsetMillis;
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
@property(nonatomic) int preference; // @synthesize preference=_preference;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001434ec
- (unsigned long long)hash;	// IMP=0x0000000000143420
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001432d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001431d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000001430f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001430e3
- (id)dictionaryRepresentation;	// IMP=0x0000000000142edf
- (id)description;	// IMP=0x0000000000142e30
@property(nonatomic) _Bool hasActionTimestampMillis;
@property(nonatomic) _Bool hasPreferenceType;
@property(nonatomic) int preferenceType; // @synthesize preferenceType=_preferenceType;
@property(nonatomic) _Bool hasCreatedOffsetMillis;
@property(readonly, nonatomic) _Bool hasExternalId;
@property(nonatomic) _Bool hasAdamId;

@end
