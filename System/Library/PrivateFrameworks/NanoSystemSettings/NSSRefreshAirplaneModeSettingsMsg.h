//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoSystemSettings/NSCopying-Protocol.h>

@interface NSSRefreshAirplaneModeSettingsMsg : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000350c
- (unsigned long long)hash;	// IMP=0x0000000000003504
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000034bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003486
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003480
- (void)writeTo:(id)arg1;	// IMP=0x000000000000347a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000346d
- (id)dictionaryRepresentation;	// IMP=0x000000000000334f
- (id)description;	// IMP=0x00000000000032a0

@end
