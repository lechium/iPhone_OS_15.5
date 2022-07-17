//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface BCSCategoryStyleAttribute : PBCodable <NSCopying>
{
    int _key;	// 8 = 0x8
    int _value;	// 12 = 0xc
    struct {
        unsigned int key:1;
        unsigned int value:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int value; // @synthesize value=_value;
@property(nonatomic) int key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006232c
- (unsigned long long)hash;	// IMP=0x00000000000622e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062233
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000621b6
- (void)copyTo:(id)arg1;	// IMP=0x000000000006215c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000620eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000620de
- (id)dictionaryRepresentation;	// IMP=0x0000000000061d66
- (id)description;	// IMP=0x0000000000061cb7
@property(nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasKey;

@end
