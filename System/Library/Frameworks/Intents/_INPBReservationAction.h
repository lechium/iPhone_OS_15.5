//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBReservationAction-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBUserActivity;

@interface _INPBReservationAction : PBCodable <_INPBReservationAction, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    _INPBUserActivity *_userActivity;	// 16 = 0x10
    _INPBDateTimeRange *_validDuration;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041f970
- (void).cxx_destruct;	// IMP=0x000000000041f689
@property(retain, nonatomic) _INPBDateTimeRange *validDuration; // @synthesize validDuration=_validDuration;
@property(retain, nonatomic) _INPBUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)dictionaryRepresentation;	// IMP=0x000000000041f4b6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041f12d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041f041
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041efaf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041eeb0
- (void)writeTo:(id)arg1;	// IMP=0x000000000041eda1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041ed94
@property(readonly, nonatomic) _Bool hasValidDuration;
@property(readonly, nonatomic) _Bool hasUserActivity;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000041ecdb
- (id)typeAsString:(int)arg1;	// IMP=0x000000000041ec85
@property(nonatomic) _Bool hasType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

