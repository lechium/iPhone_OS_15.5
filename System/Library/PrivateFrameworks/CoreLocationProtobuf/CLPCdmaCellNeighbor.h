//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPCdmaCellNeighbor : PBCodable <NSCopying>
{
    int _channel;	// 8 = 0x8
    int _ecn0;	// 12 = 0xc
    int _pilotPhase;	// 16 = 0x10
    int _pnoffset;	// 20 = 0x14
    int _rscp;	// 24 = 0x18
    struct {
        unsigned int channel:1;
        unsigned int ecn0:1;
        unsigned int pilotPhase:1;
        unsigned int pnoffset:1;
        unsigned int rscp:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(nonatomic) int pilotPhase; // @synthesize pilotPhase=_pilotPhase;
@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000e9e5
- (unsigned long long)hash;	// IMP=0x000000000000e94a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e828
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e760
- (void)copyTo:(id)arg1;	// IMP=0x000000000000e6bb
- (void)writeTo:(id)arg1;	// IMP=0x000000000000e5ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000e5e0
- (id)dictionaryRepresentation;	// IMP=0x000000000000df9c
- (id)description;	// IMP=0x000000000000deed
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasRscp;
@property(nonatomic) _Bool hasEcn0;
@property(nonatomic) _Bool hasPilotPhase;
@property(nonatomic) _Bool hasPnoffset;

@end
