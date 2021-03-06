//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitRemoteLogout : PBCodable <NSCopying>
{
    unsigned long long _delay;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _requester;	// 24 = 0x18
    int _resultErrorCode;	// 28 = 0x1c
    struct {
        unsigned int delay:1;
        unsigned int timestamp:1;
        unsigned int requester:1;
        unsigned int resultErrorCode:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000602617
- (unsigned long long)hash;	// IMP=0x0000000000602598
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006024a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006023ee
- (void)copyTo:(id)arg1;	// IMP=0x000000000060235e
- (void)writeTo:(id)arg1;	// IMP=0x00000000006022ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006022a0
- (id)dictionaryRepresentation;	// IMP=0x00000000006020a3
- (id)description;	// IMP=0x0000000000601ff4
- (int)StringAsRequester:(id)arg1;	// IMP=0x0000000000601f40
- (id)requesterAsString:(int)arg1;	// IMP=0x0000000000601ebf
@property(nonatomic) _Bool hasRequester;
@property(nonatomic) int requester; // @synthesize requester=_requester;
@property(nonatomic) _Bool hasDelay;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

