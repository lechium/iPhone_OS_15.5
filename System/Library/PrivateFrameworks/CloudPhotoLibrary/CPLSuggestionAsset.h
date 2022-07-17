//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class CPLSuggestionAssetFlag, NSData, NSString;

@interface CPLSuggestionAsset : PBCodable <NSCopying>
{
    NSData *_actionData;	// 8 = 0x8
    CPLSuggestionAssetFlag *_assetFlag;	// 16 = 0x10
    NSString *_assetIdentifier;	// 24 = 0x18
    NSString *_masterFingerprint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ea6ee
@property(retain, nonatomic) NSString *masterFingerprint; // @synthesize masterFingerprint=_masterFingerprint;
@property(retain, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property(retain, nonatomic) CPLSuggestionAssetFlag *assetFlag; // @synthesize assetFlag=_assetFlag;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ea5a0
- (unsigned long long)hash;	// IMP=0x00000000000ea51c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea3f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea306
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ea263
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ea1cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ea1bf
- (id)dictionaryRepresentation;	// IMP=0x00000000000ea0c1
- (id)description;	// IMP=0x00000000000ea012
@property(readonly, nonatomic) _Bool hasMasterFingerprint;
@property(readonly, nonatomic) _Bool hasActionData;
@property(readonly, nonatomic) _Bool hasAssetFlag;
@property(readonly, nonatomic) _Bool hasAssetIdentifier;

@end
