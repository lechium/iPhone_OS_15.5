//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaActiveAudioDevice
{
    NSString *_vendorIdentifier;	// 8 = 0x8
    NSString *_productIdentifier;	// 16 = 0x10
    _Bool _hasVendorIdentifier;	// 24 = 0x18
    _Bool _hasProductIdentifier;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000042d88
@property(nonatomic) _Bool hasProductIdentifier; // @synthesize hasProductIdentifier=_hasProductIdentifier;
@property(nonatomic) _Bool hasVendorIdentifier; // @synthesize hasVendorIdentifier=_hasVendorIdentifier;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000042bb8
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000042afa
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000042957
- (unsigned long long)hash;	// IMP=0x000000000004290a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004264d
- (void)writeTo:(id)arg1;	// IMP=0x000000000004259f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000423d5
- (void)deleteProductIdentifier;	// IMP=0x00000000000423c1
- (void)deleteVendorIdentifier;	// IMP=0x0000000000042398
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331627

@end
