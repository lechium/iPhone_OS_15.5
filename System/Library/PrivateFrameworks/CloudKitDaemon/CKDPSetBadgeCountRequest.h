//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying>
{
    unsigned int _badgeCount;	// 8 = 0x8
    _Bool _forDevice;	// 12 = 0xc
    struct {
        unsigned int badgeCount:1;
        unsigned int forDevice:1;
    } _has;	// 16 = 0x10
}

+ (id)options;	// IMP=0x000000000008bb2d
@property(nonatomic) _Bool forDevice; // @synthesize forDevice=_forDevice;
@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008c2af
- (unsigned long long)hash;	// IMP=0x000000000008c26a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c1a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008c12a
- (void)copyTo:(id)arg1;	// IMP=0x000000000008c0d0
- (Class)responseClass;	// IMP=0x000000000008c0bf
- (unsigned int)requestTypeCode;	// IMP=0x000000000008c0b4
- (void)writeTo:(id)arg1;	// IMP=0x000000000008c042
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008c035
- (id)dictionaryRepresentation;	// IMP=0x000000000008bcba
- (id)description;	// IMP=0x000000000008bc0b
@property(nonatomic) _Bool hasForDevice;
@property(nonatomic) _Bool hasBadgeCount;

@end

