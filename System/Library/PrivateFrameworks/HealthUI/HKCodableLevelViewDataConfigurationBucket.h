//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableClosedRange;

@interface HKCodableLevelViewDataConfigurationBucket : PBCodable <NSCopying>
{
    HKCodableClosedRange *_range;	// 8 = 0x8
    _Bool _highlighted;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001df980
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) HKCodableClosedRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001df8d3
- (unsigned long long)hash;	// IMP=0x00000000001df894
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001df7e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001df75a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001df700
- (void)writeTo:(id)arg1;	// IMP=0x00000000001df6a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001df695
- (id)dictionaryRepresentation;	// IMP=0x00000000001df352
- (id)description;	// IMP=0x00000000001df2a3

@end

