//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2FeedbackAtK : PBCodable <NSCopying>
{
    NSString *_activeTreatments;	// 8 = 0x8
    unsigned int _bucket;	// 16 = 0x10
    int _domain;	// 20 = 0x14
    unsigned int _evaluatedCount;	// 24 = 0x18
    int _feedbackType;	// 28 = 0x1c
    unsigned int _k;	// 32 = 0x20
    struct {
        unsigned int bucket:1;
        unsigned int domain:1;
        unsigned int evaluatedCount:1;
        unsigned int feedbackType:1;
        unsigned int k:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000000b2bd9
@property(nonatomic) unsigned int bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
@property(nonatomic) unsigned int evaluatedCount; // @synthesize evaluatedCount=_evaluatedCount;
@property(nonatomic) unsigned int k; // @synthesize k=_k;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b2aab
- (unsigned long long)hash;	// IMP=0x00000000000b29c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b2856
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2750
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b2677
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b258d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b2580
- (id)dictionaryRepresentation;	// IMP=0x00000000000b2268
- (id)description;	// IMP=0x00000000000b21b9
@property(nonatomic) _Bool hasBucket;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsFeedbackType:(id)arg1;	// IMP=0x00000000000b2070
- (id)feedbackTypeAsString:(int)arg1;	// IMP=0x00000000000b1fd6
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
- (int)StringAsDomain:(id)arg1;	// IMP=0x00000000000b1e34
- (id)domainAsString:(int)arg1;	// IMP=0x00000000000b1d82
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool hasEvaluatedCount;
@property(nonatomic) _Bool hasK;

@end
