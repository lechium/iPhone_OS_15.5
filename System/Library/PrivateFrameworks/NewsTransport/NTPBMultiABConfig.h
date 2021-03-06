//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBMultiABConfig : PBCodable <NSCopying>
{
    long long _moduloForHashing;	// 8 = 0x8
    NSMutableArray *_abConfigs;	// 16 = 0x10
    NTPBConfig *_defaultConfig;	// 24 = 0x18
    CDStruct_3f5c4e18 _has;	// 32 = 0x20
}

+ (Class)abConfigsType;	// IMP=0x000000000018eacc
- (void).cxx_destruct;	// IMP=0x000000000018f826
@property(retain, nonatomic) NSMutableArray *abConfigs; // @synthesize abConfigs=_abConfigs;
@property(nonatomic) long long moduloForHashing; // @synthesize moduloForHashing=_moduloForHashing;
@property(retain, nonatomic) NTPBConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018f605
- (unsigned long long)hash;	// IMP=0x000000000018f595
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018f4a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018f29c
- (void)writeTo:(id)arg1;	// IMP=0x000000000018f127
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018f11a
- (id)dictionaryRepresentation;	// IMP=0x000000000018eb8c
- (id)description;	// IMP=0x000000000018eadd
- (id)abConfigsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018eaaf
- (unsigned long long)abConfigsCount;	// IMP=0x000000000018ea92
- (void)addAbConfigs:(id)arg1;	// IMP=0x000000000018ea28
- (void)clearAbConfigs;	// IMP=0x000000000018ea0b
@property(nonatomic) _Bool hasModuloForHashing;
@property(readonly, nonatomic) _Bool hasDefaultConfig;

@end

