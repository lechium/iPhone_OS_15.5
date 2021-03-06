//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying>
{
    NSString *_fieldName;	// 8 = 0x8
    NSString *_regex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019f64
@property(retain, nonatomic) NSString *regex; // @synthesize regex=_regex;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019eb7
- (unsigned long long)hash;	// IMP=0x0000000000019e6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019da2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019d04
- (void)copyTo:(id)arg1;	// IMP=0x0000000000019ca1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019c47
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000019c3a
- (id)dictionaryRepresentation;	// IMP=0x0000000000019bb7
- (id)description;	// IMP=0x0000000000019b08
@property(readonly, nonatomic) _Bool hasRegex;
@property(readonly, nonatomic) _Bool hasFieldName;
- (_Bool)matches:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002595f

@end

