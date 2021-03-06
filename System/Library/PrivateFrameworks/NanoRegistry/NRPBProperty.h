//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBPropertyValue, NSString;

@interface NRPBProperty : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NRPBPropertyValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000043d32
@property(retain, nonatomic) NRPBPropertyValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000043c6e
- (unsigned long long)hash;	// IMP=0x0000000000043c21
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000043b59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000043abb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000043a58
- (void)writeTo:(id)arg1;	// IMP=0x00000000000439fb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000439ee
- (id)dictionaryRepresentation;	// IMP=0x000000000004374f
- (id)description;	// IMP=0x00000000000436a0
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasName;

@end

