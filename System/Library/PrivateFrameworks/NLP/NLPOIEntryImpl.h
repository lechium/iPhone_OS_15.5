//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NLP/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLPOIEntryImpl : PBCodable <NSCopying>
{
    NSString *_category;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    float _score;	// 32 = 0x20
    struct {
        unsigned int score:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000054cd2
- (unsigned long long)hash;	// IMP=0x0000000000054b5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054a62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005497a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000548e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054851
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054844
- (id)dictionaryRepresentation;	// IMP=0x00000000000544cb
- (id)description;	// IMP=0x0000000000054454
@property(nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasName;
- (void)dealloc;	// IMP=0x0000000000054368

@end

