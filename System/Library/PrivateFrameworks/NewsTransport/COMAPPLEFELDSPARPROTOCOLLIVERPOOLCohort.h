//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying>
{
    double _clicks;	// 8 = 0x8
    double _impressions;	// 16 = 0x10
    double _rawClicks;	// 24 = 0x18
    long long _timestamp;	// 32 = 0x20
    int _type;	// 40 = 0x28
    struct {
        unsigned int clicks:1;
        unsigned int impressions:1;
        unsigned int rawClicks:1;
        unsigned int timestamp:1;
        unsigned int type:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) double rawClicks; // @synthesize rawClicks=_rawClicks;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double impressions; // @synthesize impressions=_impressions;
@property(nonatomic) double clicks; // @synthesize clicks=_clicks;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001127ae
- (unsigned long long)hash;	// IMP=0x000000000011243a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001122ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112229
- (void)copyTo:(id)arg1;	// IMP=0x0000000000112176
- (void)writeTo:(id)arg1;	// IMP=0x00000000001120a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000112094
- (id)dictionaryRepresentation;	// IMP=0x0000000000111aa7
- (id)description;	// IMP=0x00000000001119f8
@property(nonatomic) _Bool hasRawClicks;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasImpressions;
@property(nonatomic) _Bool hasClicks;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000011186b
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000111816
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

