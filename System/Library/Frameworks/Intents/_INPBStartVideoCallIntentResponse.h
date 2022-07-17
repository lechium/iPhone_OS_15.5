//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartVideoCallIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBCallMetrics;

@interface _INPBStartVideoCallIntentResponse : PBCodable <_INPBStartVideoCallIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_fbf2c6cd _has;	// 8 = 0x8
    int _audioRoute;	// 12 = 0xc
    _INPBCallMetrics *_metrics;	// 16 = 0x10
    NSString *_status;	// 24 = 0x18
    NSArray *_targetContacts;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000142489
- (void).cxx_destruct;	// IMP=0x0000000000142162
@property(copy, nonatomic) NSArray *targetContacts; // @synthesize targetContacts=_targetContacts;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBCallMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (id)dictionaryRepresentation;	// IMP=0x0000000000141f07
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000141a23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000141909
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000141877
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000141778
- (void)writeTo:(id)arg1;	// IMP=0x0000000000141580
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000141573
- (id)targetContactsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000141556
@property(readonly, nonatomic) unsigned long long targetContactsCount;
- (void)addTargetContacts:(id)arg1;	// IMP=0x00000000001414bf
- (void)clearTargetContacts;	// IMP=0x00000000001414a2
@property(readonly, nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasMetrics;
- (int)StringAsAudioRoute:(id)arg1;	// IMP=0x000000000014135e
- (id)audioRouteAsString:(int)arg1;	// IMP=0x00000000001412f7
@property(nonatomic) _Bool hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
