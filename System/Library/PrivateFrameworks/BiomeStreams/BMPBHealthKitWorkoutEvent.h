//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBHealthKitWorkoutEvent : PBCodable <NSCopying>
{
    NSString *_activityType;	// 8 = 0x8
    NSString *_activityUUID;	// 16 = 0x10
    int _eventType;	// 24 = 0x18
    _Bool _isFirstPartyDonation;	// 28 = 0x1c
    _Bool _isIndoor;	// 29 = 0x1d
    _Bool _isUpdate;	// 30 = 0x1e
    struct {
        unsigned int eventType:1;
        unsigned int isFirstPartyDonation:1;
        unsigned int isIndoor:1;
        unsigned int isUpdate:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007d1c5
@property(nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
@property(retain, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(nonatomic) _Bool isIndoor; // @synthesize isIndoor=_isIndoor;
@property(nonatomic) _Bool isFirstPartyDonation; // @synthesize isFirstPartyDonation=_isFirstPartyDonation;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007d06e
- (unsigned long long)hash;	// IMP=0x000000000007cf80
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007cdd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ccc0
- (void)copyTo:(id)arg1;	// IMP=0x000000000007cbe3
- (void)writeTo:(id)arg1;	// IMP=0x000000000007caf9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007caec
- (id)dictionaryRepresentation;	// IMP=0x000000000007c496
- (id)description;	// IMP=0x000000000007c3e7
@property(nonatomic) _Bool hasIsUpdate;
@property(readonly, nonatomic) _Bool hasActivityUUID;
- (int)StringAsEventType:(id)arg1;	// IMP=0x000000000007c2d8
- (id)eventTypeAsString:(int)arg1;	// IMP=0x000000000007c259
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) _Bool hasActivityType;
@property(nonatomic) _Bool hasIsIndoor;
@property(nonatomic) _Bool hasIsFirstPartyDonation;

@end
