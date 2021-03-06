//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTemporalEventTrigger-Protocol.h>

@class NSString, _INPBDateTimeRangeValue;

@interface _INPBTemporalEventTrigger : PBCodable <_INPBTemporalEventTrigger, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBDateTimeRangeValue *_dateTime;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023198f
- (void).cxx_destruct;	// IMP=0x00000000002317c8
@property(retain, nonatomic) _INPBDateTimeRangeValue *dateTime; // @synthesize dateTime=_dateTime;
- (id)dictionaryRepresentation;	// IMP=0x000000000023171c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023157d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002314fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000231469
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023136a
- (void)writeTo:(id)arg1;	// IMP=0x00000000002312e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002312d6
@property(readonly, nonatomic) _Bool hasDateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

