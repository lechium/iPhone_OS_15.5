//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PrivacyAccounting/NSCopying-Protocol.h>

@class PAPBAccess, PAPBApplication;

@interface PAPBReplayKitAccess : PBCodable <NSCopying>
{
    PAPBAccess *_access;	// 8 = 0x8
    PAPBApplication *_broadcaster;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006ecf
@property(retain, nonatomic) PAPBApplication *broadcaster; // @synthesize broadcaster=_broadcaster;
@property(retain, nonatomic) PAPBAccess *access; // @synthesize access=_access;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000006df4
- (unsigned long long)hash;	// IMP=0x0000000000006da7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006cdf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006c41
- (void)writeTo:(id)arg1;	// IMP=0x0000000000006be4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000006bd7
- (id)dictionaryRepresentation;	// IMP=0x00000000000068ed
- (id)description;	// IMP=0x000000000000683e
@property(readonly, nonatomic) _Bool hasBroadcaster;
@property(readonly, nonatomic) _Bool hasAccess;

@end

