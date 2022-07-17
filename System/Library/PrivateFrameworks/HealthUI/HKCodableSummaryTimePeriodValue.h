//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@interface HKCodableSummaryTimePeriodValue : PBCodable <NSCopying>
{
    double _dateData;	// 8 = 0x8
    double _timeInterval;	// 16 = 0x10
    struct {
        unsigned int dateData:1;
        unsigned int timeInterval:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) double dateData; // @synthesize dateData=_dateData;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001cd034
- (unsigned long long)hash;	// IMP=0x00000000001cce0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ccd4e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cccc9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ccc67
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ccbf2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ccbe5
- (id)dictionaryRepresentation;	// IMP=0x00000000001cc8cb
- (id)description;	// IMP=0x00000000001cc81c
@property(nonatomic) _Bool hasDateData;
@property(nonatomic) _Bool hasTimeInterval;

@end
