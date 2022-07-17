//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponseHeaderInfo : PBCodable <NSCopying>
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001bf60c
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bf55f
- (unsigned long long)hash;	// IMP=0x00000000001bf512
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bf44a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bf3ac
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bf33b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bf2a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bf293
- (id)dictionaryRepresentation;	// IMP=0x00000000001bf07e
- (id)description;	// IMP=0x00000000001befcf

@end
