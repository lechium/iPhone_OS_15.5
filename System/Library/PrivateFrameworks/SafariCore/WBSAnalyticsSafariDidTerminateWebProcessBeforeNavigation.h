//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariDidTerminateWebProcessBeforeNavigation : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _terminationReason;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int terminationReason:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000025222
- (unsigned long long)hash;	// IMP=0x00000000000251dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025129
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000250aa
- (void)copyTo:(id)arg1;	// IMP=0x000000000002504e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000024fdc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000024fcf
- (id)dictionaryRepresentation;	// IMP=0x0000000000024c34
- (id)description;	// IMP=0x0000000000024b85
- (int)StringAsTerminationReason:(id)arg1;	// IMP=0x0000000000024b23
- (id)terminationReasonAsString:(int)arg1;	// IMP=0x0000000000024ace
@property(nonatomic) _Bool hasTerminationReason;
@property(nonatomic) int terminationReason; // @synthesize terminationReason=_terminationReason;
@property(nonatomic) _Bool hasTimestamp;

@end

