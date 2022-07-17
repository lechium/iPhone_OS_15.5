//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBAbsolutePersonalizedSectionPresenceConfig : PBCodable <NSCopying>
{
    double _cTRToHide;	// 8 = 0x8
    double _cTRToShow;	// 16 = 0x10
    double _minProbabilityToShow;	// 24 = 0x18
    unsigned long long _sectionEdition;	// 32 = 0x20
    struct {
        unsigned int cTRToHide:1;
        unsigned int cTRToShow:1;
        unsigned int minProbabilityToShow:1;
        unsigned int sectionEdition:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) unsigned long long sectionEdition; // @synthesize sectionEdition=_sectionEdition;
@property(nonatomic) double minProbabilityToShow; // @synthesize minProbabilityToShow=_minProbabilityToShow;
@property(nonatomic) double cTRToHide; // @synthesize cTRToHide=_cTRToHide;
@property(nonatomic) double cTRToShow; // @synthesize cTRToShow=_cTRToShow;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000015afe
- (unsigned long long)hash;	// IMP=0x00000000000157b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000156a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000155eb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015535
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015528
- (id)dictionaryRepresentation;	// IMP=0x0000000000015042
- (id)description;	// IMP=0x0000000000014f93
@property(nonatomic) _Bool hasSectionEdition;
@property(nonatomic) _Bool hasMinProbabilityToShow;
@property(nonatomic) _Bool hasCTRToHide;
@property(nonatomic) _Bool hasCTRToShow;

@end
