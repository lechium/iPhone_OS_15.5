//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPDashboardApp : PBCodable
{
    NSString *_appIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000182ef8
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000182eaf
- (unsigned long long)hash;	// IMP=0x0010000000182e92
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000182df8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000182d80
- (void)copyTo:(id)arg1;	// IMP=0x0010000000182d56
- (void)writeTo:(id)arg1;	// IMP=0x0010000000182d32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000182d25
- (id)dictionaryRepresentation;	// IMP=0x0010000000182b59
- (id)description;	// IMP=0x0010000000182aaa
@property(readonly, nonatomic) _Bool hasAppIdentifier;

@end
