//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying>
{
    NSString *_digitalCardImageUrl;	// 8 = 0x8
    NSString *_logoImageUrl;	// 16 = 0x10
    NSString *_thumbnailImageUrl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000078b02
@property(retain, nonatomic) NSString *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
@property(retain, nonatomic) NSString *thumbnailImageUrl; // @synthesize thumbnailImageUrl=_thumbnailImageUrl;
@property(retain, nonatomic) NSString *digitalCardImageUrl; // @synthesize digitalCardImageUrl=_digitalCardImageUrl;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000078a10
- (unsigned long long)hash;	// IMP=0x00000000000789a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000788ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000787e7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000078764
- (void)writeTo:(id)arg1;	// IMP=0x00000000000786ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000786dd
- (id)dictionaryRepresentation;	// IMP=0x0000000000078491
- (id)description;	// IMP=0x00000000000783e2
@property(readonly, nonatomic) _Bool hasLogoImageUrl;
@property(readonly, nonatomic) _Bool hasThumbnailImageUrl;
@property(readonly, nonatomic) _Bool hasDigitalCardImageUrl;

@end

