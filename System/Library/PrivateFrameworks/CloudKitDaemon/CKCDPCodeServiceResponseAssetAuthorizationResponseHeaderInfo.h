//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponseHeaderInfo : PBCodable <NSCopying>
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012f91d
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012f870
- (unsigned long long)hash;	// IMP=0x000000000012f823
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012f75b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f6bd
- (void)copyTo:(id)arg1;	// IMP=0x000000000012f65a
- (void)writeTo:(id)arg1;	// IMP=0x000000000012f5fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012f5f0
- (id)dictionaryRepresentation;	// IMP=0x000000000012f3db
- (id)description;	// IMP=0x000000000012f32c
@property(readonly, nonatomic) _Bool hasHeaderValue;
@property(readonly, nonatomic) _Bool hasHeaderKey;

@end
