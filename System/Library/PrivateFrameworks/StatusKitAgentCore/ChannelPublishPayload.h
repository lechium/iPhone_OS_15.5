//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <StatusKitAgentCore/NSCopying-Protocol.h>

@class ChannelIdentity, NSData;

__attribute__((visibility("hidden")))
@interface ChannelPublishPayload : PBCodable <NSCopying>
{
    unsigned long long _publishInitiateTimestampMillis;	// 8 = 0x8
    unsigned long long _publishPayloadExpiryTtlMillis;	// 16 = 0x10
    ChannelIdentity *_channelIdentity;	// 24 = 0x18
    NSData *_publishPayload;	// 32 = 0x20
    int _pushPriority;	// 40 = 0x28
    unsigned int _retryCount;	// 44 = 0x2c
    _Bool _pendingPublishHint;	// 48 = 0x30
    _Bool _scheduledPublishHint;	// 49 = 0x31
    struct {
        unsigned int publishInitiateTimestampMillis:1;
        unsigned int publishPayloadExpiryTtlMillis:1;
        unsigned int pushPriority:1;
        unsigned int retryCount:1;
        unsigned int pendingPublishHint:1;
        unsigned int scheduledPublishHint:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000002b176
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool scheduledPublishHint; // @synthesize scheduledPublishHint=_scheduledPublishHint;
@property(nonatomic) _Bool pendingPublishHint; // @synthesize pendingPublishHint=_pendingPublishHint;
@property(nonatomic) unsigned long long publishPayloadExpiryTtlMillis; // @synthesize publishPayloadExpiryTtlMillis=_publishPayloadExpiryTtlMillis;
@property(retain, nonatomic) NSData *publishPayload; // @synthesize publishPayload=_publishPayload;
@property(retain, nonatomic) ChannelIdentity *channelIdentity; // @synthesize channelIdentity=_channelIdentity;
@property(nonatomic) unsigned long long publishInitiateTimestampMillis; // @synthesize publishInitiateTimestampMillis=_publishInitiateTimestampMillis;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002afad
- (unsigned long long)hash;	// IMP=0x000000000002ae8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002acb5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ab69
- (void)copyTo:(id)arg1;	// IMP=0x000000000002aa53
- (void)writeTo:(id)arg1;	// IMP=0x000000000002a929
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002a91c
- (id)dictionaryRepresentation;	// IMP=0x000000000002a098
- (id)description;	// IMP=0x0000000000029fe9
@property(nonatomic) _Bool hasRetryCount;
@property(nonatomic) _Bool hasScheduledPublishHint;
@property(nonatomic) _Bool hasPendingPublishHint;
- (int)StringAsPushPriority:(id)arg1;	// IMP=0x0000000000029e76
- (id)pushPriorityAsString:(int)arg1;	// IMP=0x0000000000029e10
@property(nonatomic) _Bool hasPushPriority;
@property(nonatomic) int pushPriority; // @synthesize pushPriority=_pushPriority;
@property(nonatomic) _Bool hasPublishPayloadExpiryTtlMillis;
@property(readonly, nonatomic) _Bool hasPublishPayload;
@property(readonly, nonatomic) _Bool hasChannelIdentity;
@property(nonatomic) _Bool hasPublishInitiateTimestampMillis;

@end
