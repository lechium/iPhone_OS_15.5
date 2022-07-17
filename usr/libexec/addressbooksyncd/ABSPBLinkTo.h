//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ABSPBLinkTo : PBCodable
{
    NSString *_toGuid;	// 8 = 0x8
    _Bool _isImage;	// 16 = 0x10
    _Bool _isName;	// 17 = 0x11
    struct {
        unsigned int isImage:1;
        unsigned int isName:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000024668
@property(nonatomic) _Bool isName; // @synthesize isName=_isName;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(retain, nonatomic) NSString *toGuid; // @synthesize toGuid=_toGuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000245a3
- (unsigned long long)hash;	// IMP=0x0010000000024533
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024435
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024380
- (void)copyTo:(id)arg1;	// IMP=0x0010000000024300
- (void)writeTo:(id)arg1;	// IMP=0x0010000000024270
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000024263
- (id)dictionaryRepresentation;	// IMP=0x0010000000023e8f
- (id)description;	// IMP=0x0010000000023de0
@property(nonatomic) _Bool hasIsName;
@property(nonatomic) _Bool hasIsImage;
@property(readonly, nonatomic) _Bool hasToGuid;

@end
