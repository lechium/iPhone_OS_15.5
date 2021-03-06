//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBTagTodaySectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _cutoffTime;	// 8 = 0x8
    unsigned long long _headlinesPerFeedFetchCount;	// 16 = 0x10
    unsigned long long _minimumUpdateInterval;	// 24 = 0x18
    int _fetchingBin;	// 32 = 0x20
    NSString *_tagID;	// 40 = 0x28
    struct {
        unsigned int cutoffTime:1;
        unsigned int headlinesPerFeedFetchCount:1;
        unsigned int minimumUpdateInterval:1;
        unsigned int fetchingBin:1;
    } _has;	// 48 = 0x30
}

@property(nonatomic) unsigned long long minimumUpdateInterval; // @synthesize minimumUpdateInterval=_minimumUpdateInterval;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property(nonatomic) unsigned long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000477c
- (unsigned long long)hash;	// IMP=0x00000000000046bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000045a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000044b9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000043f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000043e8
- (id)dictionaryRepresentation;	// IMP=0x0000000000003ea2
- (id)description;	// IMP=0x0000000000003e2b
@property(nonatomic) _Bool hasMinimumUpdateInterval;
@property(readonly, nonatomic) _Bool hasTagID;
@property(nonatomic) _Bool hasFetchingBin;
@property(nonatomic) int fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property(nonatomic) _Bool hasHeadlinesPerFeedFetchCount;
@property(nonatomic) _Bool hasCutoffTime;
- (void)dealloc;	// IMP=0x0000000000003c90

@end

