//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>
{
    NSMutableArray *_defaultTags;	// 8 = 0x8
    NSMutableArray *_disabledPortraitTags;	// 16 = 0x10
    NSMutableArray *_optionalTags;	// 24 = 0x18
}

+ (Class)disabledPortraitTagsType;	// IMP=0x00000000002296e9
+ (Class)optionalTagsType;	// IMP=0x0000000000229617
+ (Class)defaultTagsType;	// IMP=0x0000000000229545
- (void).cxx_destruct;	// IMP=0x000000000022aa39
@property(retain, nonatomic) NSMutableArray *disabledPortraitTags; // @synthesize disabledPortraitTags=_disabledPortraitTags;
@property(retain, nonatomic) NSMutableArray *optionalTags; // @synthesize optionalTags=_optionalTags;
@property(retain, nonatomic) NSMutableArray *defaultTags; // @synthesize defaultTags=_defaultTags;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000022a698
- (unsigned long long)hash;	// IMP=0x000000000022a62b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022a533
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022a0fe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000229e17
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000229e0a
- (id)dictionaryRepresentation;	// IMP=0x00000000002297a9
- (id)description;	// IMP=0x00000000002296fa
- (id)disabledPortraitTagsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002296cc
- (unsigned long long)disabledPortraitTagsCount;	// IMP=0x00000000002296af
- (void)addDisabledPortraitTags:(id)arg1;	// IMP=0x0000000000229645
- (void)clearDisabledPortraitTags;	// IMP=0x0000000000229628
- (id)optionalTagsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002295fa
- (unsigned long long)optionalTagsCount;	// IMP=0x00000000002295dd
- (void)addOptionalTags:(id)arg1;	// IMP=0x0000000000229573
- (void)clearOptionalTags;	// IMP=0x0000000000229556
- (id)defaultTagsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000229528
- (unsigned long long)defaultTagsCount;	// IMP=0x000000000022950b
- (void)addDefaultTags:(id)arg1;	// IMP=0x00000000002294a1
- (void)clearDefaultTags;	// IMP=0x0000000000229484

@end

