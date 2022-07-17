//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoTellCompanionLanguageAndLocaleChangeStatus : PBCodable <NSCopying>
{
    double _status;	// 8 = 0x8
    struct {
        unsigned int status:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) double status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000016dac
- (unsigned long long)hash;	// IMP=0x0000000000016c99
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016c01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016b9b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000016b73
- (void)writeTo:(id)arg1;	// IMP=0x0000000000016b46
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000016b39
- (id)dictionaryRepresentation;	// IMP=0x00000000000168eb
- (id)description;	// IMP=0x000000000001683c
@property(nonatomic) _Bool hasStatus;

@end
