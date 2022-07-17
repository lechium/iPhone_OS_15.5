//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying>
{
    NSMutableArray *_names;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (Class)propertiesType;	// IMP=0x000000000005ab46
+ (Class)namesType;	// IMP=0x000000000005aa74
- (void).cxx_destruct;	// IMP=0x000000000005ba7f
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005b7f3
- (unsigned long long)hash;	// IMP=0x000000000005b7a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005b6de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005b3e2
- (void)copyTo:(id)arg1;	// IMP=0x000000000005b282
- (void)writeTo:(id)arg1;	// IMP=0x000000000005b071
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005b064
- (id)dictionaryRepresentation;	// IMP=0x000000000005ac06
- (id)description;	// IMP=0x000000000005ab57
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005ab29
- (unsigned long long)propertiesCount;	// IMP=0x000000000005ab0c
- (void)addProperties:(id)arg1;	// IMP=0x000000000005aaa2
- (void)clearProperties;	// IMP=0x000000000005aa85
- (id)namesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005aa57
- (unsigned long long)namesCount;	// IMP=0x000000000005aa3a
- (void)addNames:(id)arg1;	// IMP=0x000000000005a9d0
- (void)clearNames;	// IMP=0x000000000005a9b3

@end
