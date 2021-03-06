//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateTransitStep : PBCodable <NSCopying>
{
    unsigned int _currentStep;	// 8 = 0x8
    struct {
        unsigned int has_currentStep:1;
    } _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000151eaca
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000151ecc9
- (unsigned long long)hash;	// IMP=0x000000000151ec83
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000151ebc8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000151eb66
- (void)copyTo:(id)arg1;	// IMP=0x000000000151eb11
- (void)writeTo:(id)arg1;	// IMP=0x000000000151eae6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000151ead7
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000151ea6a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000151ea58
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000151e97b
- (id)jsonRepresentation;	// IMP=0x000000000151e96c
- (id)dictionaryRepresentation;	// IMP=0x000000000151e89e
- (id)description;	// IMP=0x000000000151e7ef
@property(nonatomic) _Bool hasCurrentStep;
@property(nonatomic) unsigned int currentStep;

@end

