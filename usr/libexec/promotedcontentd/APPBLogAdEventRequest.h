//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class APPBLogMetaData, NSMutableArray;

@interface APPBLogAdEventRequest : PBRequest
{
    NSMutableArray *_events;	// 8 = 0x8
    APPBLogMetaData *_metaData;	// 16 = 0x10
}

+ (Class)eventType;	// IMP=0x00200000000824f9
+ (id)options;	// IMP=0x00100000000823d3
- (void).cxx_destruct;	// IMP=0x0020000000083161
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) APPBLogMetaData *metaData; // @synthesize metaData=_metaData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000082f86
- (unsigned long long)hash;	// IMP=0x0010000000082f39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000082e71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000082c98
- (void)copyTo:(id)arg1;	// IMP=0x0010000000082bae
- (void)writeTo:(id)arg1;	// IMP=0x0010000000082a62
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000082a55
- (id)dictionaryRepresentation;	// IMP=0x00100000000825b9
- (id)description;	// IMP=0x001000000008250a
- (id)eventAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000824dc
- (unsigned long long)eventsCount;	// IMP=0x00100000000824bf
- (void)addEvent:(id)arg1;	// IMP=0x0010000000082455
- (void)clearEvents;	// IMP=0x0010000000082438
@property(readonly, nonatomic) _Bool hasMetaData;

@end

