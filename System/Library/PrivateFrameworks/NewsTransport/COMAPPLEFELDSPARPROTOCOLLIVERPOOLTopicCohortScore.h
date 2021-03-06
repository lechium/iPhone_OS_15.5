//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSString;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicCohortScore : PBCodable <NSCopying>
{
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_cohorts;	// 8 = 0x8
    NSString *_tagId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021bb1f
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts; // @synthesize cohorts=_cohorts;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021ba5b
- (unsigned long long)hash;	// IMP=0x000000000021ba0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021b946
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021b8a8
- (void)copyTo:(id)arg1;	// IMP=0x000000000021b845
- (void)writeTo:(id)arg1;	// IMP=0x000000000021b7e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021b7db
- (id)dictionaryRepresentation;	// IMP=0x000000000021b53a
- (id)description;	// IMP=0x000000000021b48b
@property(readonly, nonatomic) _Bool hasCohorts;
@property(readonly, nonatomic) _Bool hasTagId;

@end

