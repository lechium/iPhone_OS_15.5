//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HKCodableChartHandwashingEventDataSourceData : PBCodable <NSCopying>
{
    NSMutableArray *_events;	// 8 = 0x8
}

+ (Class)eventsType;	// IMP=0x00000000000ead16
- (void).cxx_destruct;	// IMP=0x00000000000eb7ab
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000eb651
- (unsigned long long)hash;	// IMP=0x00000000000eb634
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eb59a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eb3d7
- (void)copyTo:(id)arg1;	// IMP=0x00000000000eb310
- (void)writeTo:(id)arg1;	// IMP=0x00000000000eb1e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000eb1d3
- (id)dictionaryRepresentation;	// IMP=0x00000000000eadd6
- (id)description;	// IMP=0x00000000000ead27
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000eacf9
- (unsigned long long)eventsCount;	// IMP=0x00000000000eacdc
- (void)addEvents:(id)arg1;	// IMP=0x00000000000eac72
- (void)clearEvents;	// IMP=0x00000000000eac55

@end

