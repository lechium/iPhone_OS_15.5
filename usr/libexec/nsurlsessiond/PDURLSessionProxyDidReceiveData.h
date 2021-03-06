//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveData : PBCodable
{
    NSData *_receivedData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000338e0
@property(retain, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003381c
- (unsigned long long)hash;	// IMP=0x00100000000337cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000033707
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000033669
- (void)copyTo:(id)arg1;	// IMP=0x0010000000033606
- (void)writeTo:(id)arg1;	// IMP=0x00100000000335a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000333cb
- (id)dictionaryRepresentation;	// IMP=0x001000000003331b
- (id)description;	// IMP=0x001000000003326c
@property(readonly, nonatomic) _Bool hasReceivedData;
@property(readonly, nonatomic) _Bool hasTask;

@end

