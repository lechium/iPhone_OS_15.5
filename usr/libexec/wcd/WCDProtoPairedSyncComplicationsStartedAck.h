//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface WCDProtoPairedSyncComplicationsStartedAck : PBCodable
{
    MISSING_TYPE *_version;	// 8 = 0x8
    _Bool _success;	// 12 = 0xc
    struct {
        unsigned int version:1;
        unsigned int success:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000fef2
- (unsigned long long)hash;	// IMP=0x001000000000fead
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000fdea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000fd6d
- (void)copyTo:(id)arg1;	// IMP=0x001000000000fd13
- (void)writeTo:(id)arg1;	// IMP=0x001000000000fca1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000fc94
- (id)dictionaryRepresentation;	// IMP=0x001000000000f915
- (id)description;	// IMP=0x001000000000f866
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasVersion;

@end
