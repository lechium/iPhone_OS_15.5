//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData : PBCodable <NSCopying>
{
    _Bool _isBundleChannel;	// 8 = 0x8
    CDStruct_8fa617c1 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool isBundleChannel; // @synthesize isBundleChannel=_isBundleChannel;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000022f4c7
- (unsigned long long)hash;	// IMP=0x000000000022f49c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022f3fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022f398
- (void)copyTo:(id)arg1;	// IMP=0x000000000022f374
- (void)writeTo:(id)arg1;	// IMP=0x000000000022f348
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022f33b
- (id)dictionaryRepresentation;	// IMP=0x000000000022f0c1
- (id)description;	// IMP=0x000000000022f012
@property(nonatomic) _Bool hasIsBundleChannel;

@end
