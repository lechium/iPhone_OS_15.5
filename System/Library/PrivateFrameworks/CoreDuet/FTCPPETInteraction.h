//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface FTCPPETInteraction : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_duration;	// 16 = 0x10
    NSString *_mechanism;	// 24 = 0x18
    NSMutableArray *_participants;	// 32 = 0x20
    _Bool _isInbound;	// 40 = 0x28
}

+ (Class)participantsType;	// IMP=0x000000000016ace9
- (void).cxx_destruct;	// IMP=0x000000000016bd8e
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isInbound; // @synthesize isInbound=_isInbound;
@property(retain, nonatomic) NSString *mechanism; // @synthesize mechanism=_mechanism;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016bb29
- (unsigned long long)hash;	// IMP=0x000000000016ba89
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016b962
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016b70b
- (void)copyTo:(id)arg1;	// IMP=0x000000000016b5ed
- (void)writeTo:(id)arg1;	// IMP=0x000000000016b435
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016b428
- (id)dictionaryRepresentation;	// IMP=0x000000000016ada9
- (id)description;	// IMP=0x000000000016acfa
- (id)participantsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016accc
- (unsigned long long)participantsCount;	// IMP=0x000000000016acaf
- (void)addParticipants:(id)arg1;	// IMP=0x000000000016ac45
- (void)clearParticipants;	// IMP=0x000000000016ac28

@end
