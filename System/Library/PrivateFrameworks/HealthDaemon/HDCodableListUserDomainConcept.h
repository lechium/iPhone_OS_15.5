//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableListUserDomainConcept : PBCodable <NSCopying>
{
    long long _type;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CDStruct_f953fb60 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000024e0c6
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024e02c
- (unsigned long long)hash;	// IMP=0x000000000024dfe2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024df1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024de8c
- (void)copyTo:(id)arg1;	// IMP=0x000000000024de28
- (void)writeTo:(id)arg1;	// IMP=0x000000000024ddc3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024ddb6
- (id)dictionaryRepresentation;	// IMP=0x000000000024dadf
- (id)description;	// IMP=0x000000000024da30
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasType;

@end
