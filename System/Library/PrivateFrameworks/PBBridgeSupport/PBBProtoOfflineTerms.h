//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PBBProtoOfflineTerms : PBCodable <NSCopying>
{
    NSMutableArray *_appleLanguages;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    NSData *_license;	// 32 = 0x20
    NSData *_multiterms;	// 40 = 0x28
    NSData *_warranty;	// 48 = 0x30
}

+ (Class)appleLanguagesType;	// IMP=0x000000000001904e
- (void).cxx_destruct;	// IMP=0x0000000000019f52
@property(retain, nonatomic) NSMutableArray *appleLanguages; // @synthesize appleLanguages=_appleLanguages;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSData *warranty; // @synthesize warranty=_warranty;
@property(retain, nonatomic) NSData *multiterms; // @synthesize multiterms=_multiterms;
@property(retain, nonatomic) NSData *license; // @synthesize license=_license;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019c7d
- (unsigned long long)hash;	// IMP=0x0000000000019bbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019a2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000197b3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000019649
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019489
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001947c
- (id)dictionaryRepresentation;	// IMP=0x000000000001910e
- (id)description;	// IMP=0x000000000001905f
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000019031
- (unsigned long long)appleLanguagesCount;	// IMP=0x0000000000019014
- (void)addAppleLanguages:(id)arg1;	// IMP=0x0000000000018faa
- (void)clearAppleLanguages;	// IMP=0x0000000000018f8d
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasWarranty;
@property(readonly, nonatomic) _Bool hasMultiterms;
@property(readonly, nonatomic) _Bool hasLicense;

@end

