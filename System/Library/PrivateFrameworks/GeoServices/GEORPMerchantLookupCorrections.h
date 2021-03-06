//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying>
{
    _Bool _isCategoryIncorrect;	// 8 = 0x8
    _Bool _isMerchantIncorrect;	// 9 = 0x9
    _Bool _isOtherIssue;	// 10 = 0xa
    struct {
        unsigned int has_isCategoryIncorrect:1;
        unsigned int has_isMerchantIncorrect:1;
        unsigned int has_isOtherIssue:1;
    } _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e46c9f
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e47293
- (unsigned long long)hash;	// IMP=0x0000000000e47214
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e470e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e4704a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e46fbd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e46f2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e46f1b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e468c0
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e468ae
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e466c9
- (id)jsonRepresentation;	// IMP=0x0000000000e466ba
- (id)dictionaryRepresentation;	// IMP=0x0000000000e4651b
- (id)description;	// IMP=0x0000000000e4646c
@property(nonatomic) _Bool hasIsOtherIssue;
@property(nonatomic) _Bool isOtherIssue;
@property(nonatomic) _Bool hasIsMerchantIncorrect;
@property(nonatomic) _Bool isMerchantIncorrect;
@property(nonatomic) _Bool hasIsCategoryIncorrect;
@property(nonatomic) _Bool isCategoryIncorrect;

@end

