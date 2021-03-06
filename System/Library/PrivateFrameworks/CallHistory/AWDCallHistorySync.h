//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistorySync : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _downloadRecordCount;	// 16 = 0x10
    unsigned int _uploadRecordCount;	// 20 = 0x14
    struct {
        unsigned int timestamp:1;
        unsigned int downloadRecordCount:1;
        unsigned int uploadRecordCount:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned int downloadRecordCount; // @synthesize downloadRecordCount=_downloadRecordCount;
@property(nonatomic) unsigned int uploadRecordCount; // @synthesize uploadRecordCount=_uploadRecordCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000034ee9
- (unsigned long long)hash;	// IMP=0x0000000000034e88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000034db5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034d1d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000034ca8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000034c17
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000034c0a
- (id)dictionaryRepresentation;	// IMP=0x00000000000347a6
- (id)description;	// IMP=0x00000000000346f7
@property(nonatomic) _Bool hasDownloadRecordCount;
@property(nonatomic) _Bool hasUploadRecordCount;
@property(nonatomic) _Bool hasTimestamp;

@end

