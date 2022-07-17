//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTAccountMetadataClassCAccountSettings : PBCodable
{
    _Bool _w;	// 8 = 0x8
    _Bool _webAccess;	// 9 = 0x9
    struct {
        unsigned int w:1;
        unsigned int webAccess:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool webAccess; // @synthesize webAccess=_webAccess;
@property(nonatomic) _Bool w; // @synthesize w=_w;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002caab
- (unsigned long long)hash;	// IMP=0x001000000002ca65
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002c997
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002c91a
- (void)copyTo:(id)arg1;	// IMP=0x001000000002c8c0
- (void)writeTo:(id)arg1;	// IMP=0x001000000002c84d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002c840
- (id)dictionaryRepresentation;	// IMP=0x001000000002c747
- (id)description;	// IMP=0x001000000002c698
@property(nonatomic) _Bool hasWebAccess;
@property(nonatomic) _Bool hasW;

@end
