//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, PKOSVersionRequirementRange, PKPaymentHeroImageSet;

@interface PKPaymentHeroImage : NSObject
{
    NSData *_imageData;	// 8 = 0x8
    PKPaymentHeroImageSet *_images;	// 16 = 0x10
    _Bool _isBeta;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    PKOSVersionRequirementRange *_versionRequirement;	// 40 = 0x28
    NSArray *_requiredDeviceFeatures;	// 48 = 0x30
    long long _credentialType;	// 56 = 0x38
    long long _cardType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001073e3
@property(readonly, nonatomic) _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property(readonly, nonatomic) NSArray *requiredDeviceFeatures; // @synthesize requiredDeviceFeatures=_requiredDeviceFeatures;
@property(readonly, nonatomic) PKOSVersionRequirementRange *versionRequirement; // @synthesize versionRequirement=_versionRequirement;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isSupportedByDevice:(id)arg1;	// IMP=0x00000000001072b4
- (id)imageFilePathForImageModel:(id)arg1;	// IMP=0x00000000001071f5
- (id)imageFilePathOnDiskForPreferredLanguages:(id)arg1 scale:(double)arg2;	// IMP=0x0000000000107192
- (void)downloadImageForPreferredLanguages:(id)arg1 scale:(double)arg2 fileDownloader:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000106d17
- (void)downloadImageWithScale:(double)arg1 fileDownloader:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106c7b
- (id)imageForPreferredLanguages:(id)arg1 scale:(double)arg2;	// IMP=0x0000000000106be0
- (id)URLForImageWithScale:(double)arg1;	// IMP=0x0000000000106b46
- (id)imageWithScale:(double)arg1;	// IMP=0x0000000000106ad6
- (_Bool)hasCachedImageWithScale:(double)arg1;	// IMP=0x00000000001069f7
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 credentialType:(long long)arg3;	// IMP=0x0000000000106963
- (id)initWithLegacyDictionary:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000010667a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001063dc

@end
