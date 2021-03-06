//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface CAMSchemaCAMClientEventMetadata
{
    SISchemaUUID *_camId;	// 8 = 0x8
    NSString *_resultCandidateId;	// 16 = 0x10
    int _feature;	// 24 = 0x18
    struct {
        unsigned int feature:1;
    } _has;	// 28 = 0x1c
    _Bool _hasCamId;	// 32 = 0x20
    _Bool _hasResultCandidateId;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000000556b9
@property(nonatomic) _Bool hasResultCandidateId; // @synthesize hasResultCandidateId=_hasResultCandidateId;
@property(nonatomic) _Bool hasCamId; // @synthesize hasCamId=_hasCamId;
@property(nonatomic) int feature; // @synthesize feature=_feature;
@property(copy, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(retain, nonatomic) SISchemaUUID *camId; // @synthesize camId=_camId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005546b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000553ad
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000055169
- (unsigned long long)hash;	// IMP=0x00000000000550f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054df7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054d09
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054cfc
- (void)deleteFeature;	// IMP=0x0000000000054cd2
@property(nonatomic) _Bool hasFeature;
- (void)deleteResultCandidateId;	// IMP=0x0000000000054c79
- (void)deleteCamId;	// IMP=0x0000000000054c50
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003325ea
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003325b2

@end

