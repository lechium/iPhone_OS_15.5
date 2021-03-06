//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>
{
    NSMutableArray *_failures;	// 8 = 0x8
    NSMutableArray *_successes;	// 16 = 0x10
}

+ (Class)failuresType;	// IMP=0x00000000000dce8c
+ (Class)successesType;	// IMP=0x00000000000dcdd7
@property(retain, nonatomic) NSMutableArray *failures; // @synthesize failures=_failures;
@property(retain, nonatomic) NSMutableArray *successes; // @synthesize successes=_successes;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000dd9f7
- (unsigned long long)hash;	// IMP=0x00000000000dd9aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dd916
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dd64c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dd481
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dd474
- (id)dictionaryRepresentation;	// IMP=0x00000000000dcf14
- (id)description;	// IMP=0x00000000000dce9d
- (id)failuresAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dce6f
- (unsigned long long)failuresCount;	// IMP=0x00000000000dce52
- (void)addFailures:(id)arg1;	// IMP=0x00000000000dce05
- (void)clearFailures;	// IMP=0x00000000000dcde8
- (id)successesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dcdba
- (unsigned long long)successesCount;	// IMP=0x00000000000dcd9d
- (void)addSuccesses:(id)arg1;	// IMP=0x00000000000dcd50
- (void)clearSuccesses;	// IMP=0x00000000000dcd33
- (void)dealloc;	// IMP=0x00000000000dccdc

@end

