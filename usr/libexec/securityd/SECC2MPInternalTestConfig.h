//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPInternalTestConfig : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ea4e4
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ea437
- (unsigned long long)hash;	// IMP=0x00100000000ea3ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ea322
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ea284
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ea221
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ea1c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ea1b7
- (id)dictionaryRepresentation;	// IMP=0x00100000000ea134
- (id)description;	// IMP=0x00100000000ea085
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

