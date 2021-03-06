//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMPBEncodeOption : PBCodable <NSCopying>
{
    _Bool _isSPI;	// 8 = 0x8
    _Bool _isXPC;	// 9 = 0x9
    struct {
        unsigned int isSPI:1;
        unsigned int isXPC:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool isSPI; // @synthesize isSPI=_isSPI;
@property(nonatomic) _Bool isXPC; // @synthesize isXPC=_isXPC;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006876be
- (unsigned long long)hash;	// IMP=0x0000000000687678
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006875aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068752d
- (void)copyTo:(id)arg1;	// IMP=0x00000000006874d3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000687460
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000687453
- (id)dictionaryRepresentation;	// IMP=0x000000000068735a
- (id)description;	// IMP=0x00000000006872ab
@property(nonatomic) _Bool hasIsSPI;
@property(nonatomic) _Bool hasIsXPC;

@end

