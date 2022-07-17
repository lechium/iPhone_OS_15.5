//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PBBProtoSendTinkerAccountCredentials : PBCodable <NSCopying>
{
    NSData *_acceptedTermsData;	// 8 = 0x8
    NSString *_pairingParentAltDSID;	// 16 = 0x10
    NSString *_pairingParentAppleID;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    NSString *_username;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000006d13
@property(retain, nonatomic) NSString *pairingParentAppleID; // @synthesize pairingParentAppleID=_pairingParentAppleID;
@property(retain, nonatomic) NSString *pairingParentAltDSID; // @synthesize pairingParentAltDSID=_pairingParentAltDSID;
@property(retain, nonatomic) NSData *acceptedTermsData; // @synthesize acceptedTermsData=_acceptedTermsData;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000006b97
- (unsigned long long)hash;	// IMP=0x0000000000006af4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006994
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000687c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000067b9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000006705
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000066f8
- (id)dictionaryRepresentation;	// IMP=0x00000000000063fc
- (id)description;	// IMP=0x000000000000634d
@property(readonly, nonatomic) _Bool hasPairingParentAppleID;
@property(readonly, nonatomic) _Bool hasPairingParentAltDSID;
@property(readonly, nonatomic) _Bool hasAcceptedTermsData;
@property(readonly, nonatomic) _Bool hasPassword;
@property(readonly, nonatomic) _Bool hasUsername;

@end
