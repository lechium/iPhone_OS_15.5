//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying>
{
    _Bool _isLong;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    struct {
        unsigned int isLong:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool isLong; // @synthesize isLong=_isLong;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000012cc8
- (unsigned long long)hash;	// IMP=0x0000000000012c8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012bce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012b5f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000012b2e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000012ace
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000012ac1
- (id)dictionaryRepresentation;	// IMP=0x0000000000012757
- (id)description;	// IMP=0x00000000000126a8
@property(nonatomic) _Bool hasIsLong;

@end

