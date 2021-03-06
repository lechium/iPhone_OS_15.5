//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableArray *_products;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

+ (Class)productsType;	// IMP=0x00000000001235c6
- (void).cxx_destruct;	// IMP=0x0000000000124310
@property(retain, nonatomic) NSMutableArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000124109
- (unsigned long long)hash;	// IMP=0x000000000012409c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000123fa4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000123d9e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000123c94
- (void)writeTo:(id)arg1;	// IMP=0x0000000000123b2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000123b1e
- (id)dictionaryRepresentation;	// IMP=0x0000000000123686
- (id)description;	// IMP=0x00000000001235d7
- (id)productsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001235a9
- (unsigned long long)productsCount;	// IMP=0x000000000012358c
- (void)addProducts:(id)arg1;	// IMP=0x0000000000123522
- (void)clearProducts;	// IMP=0x0000000000123505
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

