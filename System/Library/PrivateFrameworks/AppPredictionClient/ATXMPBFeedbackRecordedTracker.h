//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSString;

@interface ATXMPBFeedbackRecordedTracker : PBCodable <NSCopying>
{
    NSString *_consumerSubType;	// 8 = 0x8
    int _engagementType;	// 16 = 0x10
    CDStruct_c054b854 _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000001f3b1
@property(retain, nonatomic) NSString *consumerSubType; // @synthesize consumerSubType=_consumerSubType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f329
- (unsigned long long)hash;	// IMP=0x000000000001f2dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f217
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f187
- (void)copyTo:(id)arg1;	// IMP=0x000000000001f124
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f0c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f0b3
- (id)dictionaryRepresentation;	// IMP=0x000000000001edb9
- (id)description;	// IMP=0x000000000001ed0a
@property(readonly, nonatomic) _Bool hasConsumerSubType;
- (int)StringAsEngagementType:(id)arg1;	// IMP=0x000000000001ec93
- (id)engagementTypeAsString:(int)arg1;	// IMP=0x000000000001ec3e
@property(nonatomic) _Bool hasEngagementType;
@property(nonatomic) int engagementType; // @synthesize engagementType=_engagementType;

@end
