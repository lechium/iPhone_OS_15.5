//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface COSBBUserStudyDataBlob : PBCodable
{
    double _detectedConfidence;	// 8 = 0x8
    unsigned int _detectedCrownOrientation;	// 16 = 0x10
    unsigned int _detectedRightWrist;	// 20 = 0x14
    NSString *_phoneProductType;	// 24 = 0x18
    unsigned int _reportedCrownOrientation;	// 32 = 0x20
    unsigned int _reportedRightWrist;	// 36 = 0x24
    NSMutableArray *_results;	// 40 = 0x28
    unsigned int _userStudyVersion;	// 48 = 0x30
    unsigned int _version;	// 52 = 0x34
    unsigned int _watchMaterial;	// 56 = 0x38
    NSString *_watchProductType;	// 64 = 0x40
    unsigned int _watchSizeClass;	// 72 = 0x48
    struct {
        unsigned int detectedConfidence:1;
        unsigned int detectedCrownOrientation:1;
        unsigned int detectedRightWrist:1;
        unsigned int reportedCrownOrientation:1;
        unsigned int reportedRightWrist:1;
        unsigned int userStudyVersion:1;
        unsigned int version:1;
        unsigned int watchMaterial:1;
        unsigned int watchSizeClass:1;
    } _has;	// 76 = 0x4c
}

+ (Class)resultsType;	// IMP=0x002000000004be61
- (void).cxx_destruct;	// IMP=0x002000000004dd16
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned int detectedCrownOrientation; // @synthesize detectedCrownOrientation=_detectedCrownOrientation;
@property(nonatomic) double detectedConfidence; // @synthesize detectedConfidence=_detectedConfidence;
@property(nonatomic) unsigned int detectedRightWrist; // @synthesize detectedRightWrist=_detectedRightWrist;
@property(retain, nonatomic) NSString *phoneProductType; // @synthesize phoneProductType=_phoneProductType;
@property(retain, nonatomic) NSString *watchProductType; // @synthesize watchProductType=_watchProductType;
@property(nonatomic) unsigned int watchMaterial; // @synthesize watchMaterial=_watchMaterial;
@property(nonatomic) unsigned int watchSizeClass; // @synthesize watchSizeClass=_watchSizeClass;
@property(nonatomic) unsigned int userStudyVersion; // @synthesize userStudyVersion=_userStudyVersion;
@property(nonatomic) unsigned int reportedCrownOrientation; // @synthesize reportedCrownOrientation=_reportedCrownOrientation;
@property(nonatomic) unsigned int reportedRightWrist; // @synthesize reportedRightWrist=_reportedRightWrist;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004d92d
- (unsigned long long)hash;	// IMP=0x001000000004d68b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004d400
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004d09e
- (void)copyTo:(id)arg1;	// IMP=0x001000000004ce8a
- (void)writeTo:(id)arg1;	// IMP=0x001000000004cbed
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004cbe0
- (id)dictionaryRepresentation;	// IMP=0x001000000004bf21
- (id)description;	// IMP=0x001000000004be72
- (id)resultsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000004be44
- (unsigned long long)resultsCount;	// IMP=0x001000000004be27
- (void)addResults:(id)arg1;	// IMP=0x001000000004bdbd
- (void)clearResults;	// IMP=0x001000000004bda0
@property(nonatomic) _Bool hasDetectedCrownOrientation;
@property(nonatomic) _Bool hasDetectedConfidence;
@property(nonatomic) _Bool hasDetectedRightWrist;
@property(readonly, nonatomic) _Bool hasPhoneProductType;
@property(readonly, nonatomic) _Bool hasWatchProductType;
@property(nonatomic) _Bool hasWatchMaterial;
@property(nonatomic) _Bool hasWatchSizeClass;
@property(nonatomic) _Bool hasUserStudyVersion;
@property(nonatomic) _Bool hasReportedCrownOrientation;
@property(nonatomic) _Bool hasReportedRightWrist;
@property(nonatomic) _Bool hasVersion;

@end

