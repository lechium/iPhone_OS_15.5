//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying>
{
    long long _retryAfterMillis;	// 8 = 0x8
    NSString *_resource;	// 16 = 0x10
    _Bool _allowed;	// 24 = 0x18
    struct {
        unsigned int retryAfterMillis:1;
        unsigned int allowed:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000026ae0
@property(nonatomic) long long retryAfterMillis; // @synthesize retryAfterMillis=_retryAfterMillis;
@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000026a19
- (unsigned long long)hash;	// IMP=0x00000000000269ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000268b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026803
- (void)copyTo:(id)arg1;	// IMP=0x0000000000026782
- (void)writeTo:(id)arg1;	// IMP=0x00000000000266f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000266e5
- (id)dictionaryRepresentation;	// IMP=0x00000000000265c5
- (id)description;	// IMP=0x0000000000026516
@property(nonatomic) _Bool hasRetryAfterMillis;
@property(nonatomic) _Bool hasAllowed;
@property(readonly, nonatomic) _Bool hasResource;

@end

