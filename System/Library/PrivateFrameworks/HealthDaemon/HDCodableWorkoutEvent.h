//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMetadataDictionary;

@interface HDCodableWorkoutEvent : PBCodable <NSCopying>
{
    double _date;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    long long _swimmingStrokeStyle;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    HDCodableMetadataDictionary *_metadataDictionary;	// 40 = 0x28
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int swimmingStrokeStyle:1;
        unsigned int type:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002727c8
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000027267e
- (unsigned long long)hash;	// IMP=0x00000000002723dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000272287
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000272192
- (void)copyTo:(id)arg1;	// IMP=0x00000000002720ca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000271ff9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000271fec
- (id)dictionaryRepresentation;	// IMP=0x0000000000271a32
- (id)description;	// IMP=0x0000000000271983
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(nonatomic) _Bool hasSwimmingStrokeStyle;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasType;
- (id)decodedDateIntervalStartDate;	// IMP=0x000000000038bdfc

@end

