//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface _ADPBProxyWakeUpRequest : PBRequest
{
    NSString *_streamId;	// 8 = 0x8
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x001000000011c5ea
- (void).cxx_destruct;	// IMP=0x00100000000a52c8
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a527f
- (unsigned long long)hash;	// IMP=0x00100000000a5262
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a51c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a5150
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a5126
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a5102
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a50f5
- (id)dictionaryRepresentation;	// IMP=0x00100000000a4f27
- (id)description;	// IMP=0x00100000000a4e78
@property(readonly, nonatomic) _Bool hasStreamId;
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x001000000008ebf2

@end
