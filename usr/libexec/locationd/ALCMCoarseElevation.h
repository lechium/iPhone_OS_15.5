//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCoarseElevation : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    int _source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000037733b
- (unsigned long long)hash;	// IMP=0x00100000003772ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000377291
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000377222
- (void)copyTo:(id)arg1;	// IMP=0x00100000003771f1
- (void)writeTo:(id)arg1;	// IMP=0x00100000003771a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000377193
- (id)dictionaryRepresentation;	// IMP=0x0010000000376e4b
- (id)description;	// IMP=0x0010000000376dd4
- (int)StringAsSource:(id)arg1;	// IMP=0x0010000000376d8d
- (id)sourceAsString:(int)arg1;	// IMP=0x0010000000376d4e
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

