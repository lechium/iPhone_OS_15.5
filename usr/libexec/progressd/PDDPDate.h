//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface PDDPDate : PBCodable
{
    double _time;	// 8 = 0x8
    int _timezoneOffset;	// 16 = 0x10
    struct {
        unsigned int time:1;
        unsigned int timezoneOffset:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) double time; // @synthesize time=_time;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ce437
- (unsigned long long)hash;	// IMP=0x00100000000ce2f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ce23f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ce1be
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ce160
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ce0ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ce0e0
- (id)dictionaryRepresentation;	// IMP=0x00100000000cdda1
- (MISSING_TYPE *)description;	// IMP=0x00100000000cdcf2
@property(nonatomic) _Bool hasTimezoneOffset;
@property(nonatomic) _Bool hasTime;

@end

