//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SuggestionsSpotlightMetrics/NSCopying-Protocol.h>

@class NSString;

@interface SGSM2NoResultSelectedInSpotlight : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003bd5
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003b9d
- (unsigned long long)hash;	// IMP=0x0000000000003b80
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003ae6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003a6e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003a44
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003a20
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003a13
- (id)dictionaryRepresentation;	// IMP=0x00000000000039b7
- (id)description;	// IMP=0x0000000000003908
@property(readonly, nonatomic) _Bool hasKey;

@end
