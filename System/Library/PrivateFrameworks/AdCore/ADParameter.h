//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADParameter : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)options;	// IMP=0x000000000000b6ed
- (void).cxx_destruct;	// IMP=0x000000000000bd48
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000bc9b
- (unsigned long long)hash;	// IMP=0x000000000000bc4e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bb86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bae8
- (void)copyTo:(id)arg1;	// IMP=0x000000000000ba77
- (void)writeTo:(id)arg1;	// IMP=0x000000000000ba10
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000ba03
- (id)dictionaryRepresentation;	// IMP=0x000000000000b7ec
- (id)description;	// IMP=0x000000000000b73d

@end
