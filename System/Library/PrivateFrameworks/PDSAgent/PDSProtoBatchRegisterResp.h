//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying>
{
    long long _responseTtl;	// 8 = 0x8
    long long _retryInterval;	// 16 = 0x10
    long long _serverTimestamp;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
    int _status;	// 40 = 0x28
    NSMutableArray *_userPushTokenRegResponses;	// 48 = 0x30
    struct {
        unsigned int responseTtl:1;
        unsigned int retryInterval:1;
        unsigned int serverTimestamp:1;
    } _has;	// 56 = 0x38
}

+ (Class)userPushTokenRegResponsesType;	// IMP=0x000000000001b2ca
- (void).cxx_destruct;	// IMP=0x000000000001c6ce
@property(nonatomic) long long serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long responseTtl; // @synthesize responseTtl=_responseTtl;
@property(retain, nonatomic) NSMutableArray *userPushTokenRegResponses; // @synthesize userPushTokenRegResponses=_userPushTokenRegResponses;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c450
- (unsigned long long)hash;	// IMP=0x000000000001c37f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c22f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bfce
- (void)copyTo:(id)arg1;	// IMP=0x000000000001be7e
- (void)writeTo:(id)arg1;	// IMP=0x000000000001bca1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001bc94
- (id)dictionaryRepresentation;	// IMP=0x000000000001b466
- (id)description;	// IMP=0x000000000001b3b7
@property(nonatomic) _Bool hasServerTimestamp;
@property(nonatomic) _Bool hasRetryInterval;
@property(nonatomic) _Bool hasResponseTtl;
- (id)userPushTokenRegResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001b2ad
- (unsigned long long)userPushTokenRegResponsesCount;	// IMP=0x000000000001b290
- (void)addUserPushTokenRegResponses:(id)arg1;	// IMP=0x000000000001b226
- (void)clearUserPushTokenRegResponses;	// IMP=0x000000000001b209
@property(readonly, nonatomic) _Bool hasMessage;

@end

