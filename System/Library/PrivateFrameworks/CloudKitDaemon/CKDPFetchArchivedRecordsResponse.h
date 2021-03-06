//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying>
{
    NSData *_archiveContinuationToken;	// 8 = 0x8
    NSMutableArray *_records;	// 16 = 0x10
    int _status;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 28 = 0x1c
}

+ (Class)recordType;	// IMP=0x000000000029e70c
- (void).cxx_destruct;	// IMP=0x000000000029f6b7
@property(retain, nonatomic) NSData *archiveContinuationToken; // @synthesize archiveContinuationToken=_archiveContinuationToken;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029f4d3
- (unsigned long long)hash;	// IMP=0x000000000029f45e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029f369
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029f134
- (void)copyTo:(id)arg1;	// IMP=0x000000000029f02a
- (void)writeTo:(id)arg1;	// IMP=0x000000000029eea4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029ee97
- (id)dictionaryRepresentation;	// IMP=0x000000000029e905
- (id)description;	// IMP=0x000000000029e856
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000029e7ef
- (id)statusAsString:(int)arg1;	// IMP=0x000000000029e799
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasArchiveContinuationToken;
- (id)recordAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029e6ef
- (unsigned long long)recordsCount;	// IMP=0x000000000029e6d2
- (void)addRecord:(id)arg1;	// IMP=0x000000000029e668
- (void)clearRecords;	// IMP=0x000000000029e64b

@end

