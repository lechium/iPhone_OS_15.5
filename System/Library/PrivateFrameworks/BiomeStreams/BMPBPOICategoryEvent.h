//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBPOICategoryEvent : PBCodable <NSCopying>
{
    double _timeIntervalSince1970;	// 8 = 0x8
    NSString *_poiCategory;	// 16 = 0x10
    unsigned int _rank;	// 24 = 0x18
    struct {
        unsigned int timeIntervalSince1970:1;
        unsigned int rank:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000071e59
@property(nonatomic) double timeIntervalSince1970; // @synthesize timeIntervalSince1970=_timeIntervalSince1970;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *poiCategory; // @synthesize poiCategory=_poiCategory;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000071d8e
- (unsigned long long)hash;	// IMP=0x0000000000071c2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000071b3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071a86
- (void)copyTo:(id)arg1;	// IMP=0x0000000000071a02
- (void)writeTo:(id)arg1;	// IMP=0x0000000000071972
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000071965
- (id)dictionaryRepresentation;	// IMP=0x00000000000715c1
- (id)description;	// IMP=0x0000000000071512
@property(nonatomic) _Bool hasTimeIntervalSince1970;
@property(nonatomic) _Bool hasRank;
@property(readonly, nonatomic) _Bool hasPoiCategory;

@end

