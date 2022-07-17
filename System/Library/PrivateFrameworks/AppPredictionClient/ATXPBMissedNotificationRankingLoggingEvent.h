//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/ATXJSONSerializableProtocol-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>

@class ATXPBMissedNotificationRanking;

@interface ATXPBMissedNotificationRankingLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying>
{
    double _timestamp;	// 8 = 0x8
    int _eventType;	// 16 = 0x10
    ATXPBMissedNotificationRanking *_missedNotificationRanking;	// 24 = 0x18
    CDStruct_7e36e431 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004f15b
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) ATXPBMissedNotificationRanking *missedNotificationRanking; // @synthesize missedNotificationRanking=_missedNotificationRanking;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004f089
- (unsigned long long)hash;	// IMP=0x000000000004ef27
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ee3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ed81
- (void)copyTo:(id)arg1;	// IMP=0x000000000004ecfd
- (void)writeTo:(id)arg1;	// IMP=0x000000000004ec6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004ec60
- (id)dictionaryRepresentation;	// IMP=0x000000000004e7d2
- (id)description;	// IMP=0x000000000004e723
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsEventType:(id)arg1;	// IMP=0x000000000004e5a4
- (id)eventTypeAsString:(int)arg1;	// IMP=0x000000000004e4f1
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) _Bool hasMissedNotificationRanking;
- (id)jsonRepresentation;	// IMP=0x0000000000065dbe
- (id)initFromJSON:(id)arg1;	// IMP=0x0000000000065b2c

@end
