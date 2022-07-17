//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKEdgeDnsOutput;

@interface TASKOutput : PBCodable
{
    TASKEdgeDnsOutput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000070b2e
@property(retain, nonatomic) TASKEdgeDnsOutput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000070aaf
- (unsigned long long)hash;	// IMP=0x0010000000070a92
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000709f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000070980
- (void)copyTo:(id)arg1;	// IMP=0x0010000000070956
- (void)writeTo:(id)arg1;	// IMP=0x0010000000070932
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000070925
- (id)dictionaryRepresentation;	// IMP=0x00100000000706da
- (id)description;	// IMP=0x001000000007062b
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end
