//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCloudSyncCodableSharedSummaryRelationshipRecord : PBCodable <NSCopying>
{
    NSMutableArray *_participants;	// 8 = 0x8
}

+ (Class)participantsType;	// IMP=0x00000000006d5187
- (void).cxx_destruct;	// IMP=0x00000000006d5c1a
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006d5ac0
- (unsigned long long)hash;	// IMP=0x00000000006d5aa3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006d5a09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006d5846
- (void)copyTo:(id)arg1;	// IMP=0x00000000006d577f
- (void)writeTo:(id)arg1;	// IMP=0x00000000006d564f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006d5642
- (id)dictionaryRepresentation;	// IMP=0x00000000006d5247
- (id)description;	// IMP=0x00000000006d5198
- (id)participantsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006d516a
- (unsigned long long)participantsCount;	// IMP=0x00000000006d514d
- (void)addParticipants:(id)arg1;	// IMP=0x00000000006d50e3
- (void)clearParticipants;	// IMP=0x00000000006d50c6

@end
