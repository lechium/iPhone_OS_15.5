//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable
{
    NSMutableArray *_assets;	// 8 = 0x8
}

+ (Class)assetsType;	// IMP=0x00200000000078fb
- (void).cxx_destruct;	// IMP=0x0020000000008390
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000008236
- (unsigned long long)hash;	// IMP=0x0010000000008219
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000817f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007fbc
- (void)copyTo:(id)arg1;	// IMP=0x0010000000007ef5
- (void)writeTo:(id)arg1;	// IMP=0x0010000000007dc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000007db8
- (id)dictionaryRepresentation;	// IMP=0x00100000000079bb
- (id)description;	// IMP=0x001000000000790c
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000078de
- (unsigned long long)assetsCount;	// IMP=0x00100000000078c1
- (void)addAssets:(id)arg1;	// IMP=0x0010000000007857
- (void)clearAssets;	// IMP=0x001000000000783a

@end

