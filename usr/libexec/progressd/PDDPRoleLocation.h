//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPRoleLocation : PBCodable
{
    NSString *_locationId;	// 8 = 0x8
    NSString *_roleId;	// 16 = 0x10
    int _roleType;	// 24 = 0x18
    CDStruct_881fb62f _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000008dbb5
@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
@property(retain, nonatomic) NSString *roleId; // @synthesize roleId=_roleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008dae8
- (unsigned long long)hash;	// IMP=0x001000000008da73
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008d97e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008d8c0
- (void)copyTo:(id)arg1;	// IMP=0x001000000008d83d
- (void)writeTo:(id)arg1;	// IMP=0x001000000008d7bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008d7af
- (id)dictionaryRepresentation;	// IMP=0x001000000008d42a
- (id)description;	// IMP=0x001000000008d37b
- (int)StringAsRoleType:(id)arg1;	// IMP=0x001000000008d264
- (id)roleTypeAsString:(int)arg1;	// IMP=0x001000000008d1be
@property(nonatomic) _Bool hasRoleType;
@property(nonatomic) int roleType; // @synthesize roleType=_roleType;
@property(readonly, nonatomic) _Bool hasLocationId;
@property(readonly, nonatomic) _Bool hasRoleId;

@end
