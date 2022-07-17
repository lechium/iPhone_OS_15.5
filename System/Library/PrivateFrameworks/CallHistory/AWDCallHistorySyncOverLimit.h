//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistorySyncOverLimit : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _transactionLogCount;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int transactionLogCount:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int transactionLogCount; // @synthesize transactionLogCount=_transactionLogCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000345a0
- (unsigned long long)hash;	// IMP=0x000000000003455b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000344a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034429
- (void)copyTo:(id)arg1;	// IMP=0x00000000000343cd
- (void)writeTo:(id)arg1;	// IMP=0x000000000003435b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003434e
- (id)dictionaryRepresentation;	// IMP=0x0000000000033fd6
- (id)description;	// IMP=0x0000000000033f27
@property(nonatomic) _Bool hasTransactionLogCount;
@property(nonatomic) _Bool hasTimestamp;

@end
