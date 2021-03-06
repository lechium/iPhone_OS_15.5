//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/CKCodeOperationMessageMutation-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface HMDCameraClipsQuotaEnableCameraMessage : PBCodable <CKCodeOperationMessageMutation, NSCopying>
{
    NSString *_zoneName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a7a4f4
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a7a4ab
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7a3f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7a37c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a7a352
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a7a32e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a7a321
- (id)dictionaryRepresentation;	// IMP=0x0000000000a7a2c5
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasZoneName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

