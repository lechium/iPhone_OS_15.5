//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableTinkerOptInRequest : PBRequest <NSCopying>
{
    NSString *_guardianDisplayName;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000263306
@property(retain, nonatomic) NSString *guardianDisplayName; // @synthesize guardianDisplayName=_guardianDisplayName;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000263259
- (unsigned long long)hash;	// IMP=0x000000000026320c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000263144
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002630a6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000263043
- (void)writeTo:(id)arg1;	// IMP=0x0000000000262fe6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000262fd9
- (id)dictionaryRepresentation;	// IMP=0x0000000000262dc4
- (id)description;	// IMP=0x0000000000262d15
@property(readonly, nonatomic) _Bool hasGuardianDisplayName;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;

@end
