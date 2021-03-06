//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData;

@interface PBBProtoHandleActivationData : PBCodable <NSCopying>
{
    NSData *_activationData;	// 8 = 0x8
    NSData *_responseHeaders;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d1d5
@property(retain, nonatomic) NSData *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSData *activationData; // @synthesize activationData=_activationData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000d128
- (unsigned long long)hash;	// IMP=0x000000000000d0db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d013
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000cf75
- (void)copyTo:(id)arg1;	// IMP=0x000000000000cf04
- (void)writeTo:(id)arg1;	// IMP=0x000000000000cea5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000ce98
- (id)dictionaryRepresentation;	// IMP=0x000000000000cc81
- (id)description;	// IMP=0x000000000000cbd2

@end

