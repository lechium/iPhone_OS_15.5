//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySuspendTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000044650
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000445d1
- (unsigned long long)hash;	// IMP=0x00100000000445b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004451a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000444a2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000044478
- (void)writeTo:(id)arg1;	// IMP=0x0010000000044454
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000442ad
- (id)dictionaryRepresentation;	// IMP=0x0010000000044223
- (id)description;	// IMP=0x0010000000044174
@property(readonly, nonatomic) _Bool hasTask;

@end
