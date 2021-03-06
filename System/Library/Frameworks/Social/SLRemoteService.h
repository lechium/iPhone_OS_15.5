//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Social/NSSecureCoding-Protocol.h>

@class NSBundle, NSSet, NSString, NSURL, UIImage;

@interface SLRemoteService <NSSecureCoding>
{
    long long _maximumVideoCount;	// 8 = 0x8
    UIImage *_activityImage;	// 16 = 0x10
    NSBundle *_serviceBundle;	// 24 = 0x18
    _Bool _serviceRegionTargetIsChina;	// 32 = 0x20
    _Bool _addDeviceClassToRequest;	// 33 = 0x21
    NSString *_serviceTypeIdentifier;	// 40 = 0x28
    NSString *_accountTypeIdentifier;	// 48 = 0x30
    NSString *_localizedServiceName;	// 56 = 0x38
    NSString *_activityViewIconResourceName;	// 64 = 0x40
    long long _authenticationStyle;	// 72 = 0x48
    long long _maximumURLCount;	// 80 = 0x50
    long long _maximumImageCount;	// 88 = 0x58
    long long _maximumImageDataSize;	// 96 = 0x60
    long long _maximumVideoDataSize;	// 104 = 0x68
    long long _maximumVideoTimeLimit;	// 112 = 0x70
    NSSet *_supportedImageAssetURLSchemes;	// 120 = 0x78
    NSSet *_supportedVideoAssetURLSchemes;	// 128 = 0x80
    NSString *_activityImageName;	// 136 = 0x88
    NSURL *_serviceBundleURL;	// 144 = 0x90
}

+ (id)remoteServiceForTypeIdentifier:(id)arg1;	// IMP=0x00000000000468a6
+ (id)remoteServices;	// IMP=0x000000000004688d
+ (id)_cachedServiceWithType:(id)arg1;	// IMP=0x00000000000466a4
+ (id)_cachedServices;	// IMP=0x000000000004663f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000462e5
- (void).cxx_destruct;	// IMP=0x0000000000046b95
@property(retain) NSURL *serviceBundleURL; // @synthesize serviceBundleURL=_serviceBundleURL;
@property(retain) NSString *activityImageName; // @synthesize activityImageName=_activityImageName;
@property _Bool addDeviceClassToRequest; // @synthesize addDeviceClassToRequest=_addDeviceClassToRequest;
@property(retain) NSSet *supportedVideoAssetURLSchemes; // @synthesize supportedVideoAssetURLSchemes=_supportedVideoAssetURLSchemes;
@property(retain) NSSet *supportedImageAssetURLSchemes; // @synthesize supportedImageAssetURLSchemes=_supportedImageAssetURLSchemes;
@property long long maximumVideoTimeLimit; // @synthesize maximumVideoTimeLimit=_maximumVideoTimeLimit;
@property long long maximumVideoDataSize; // @synthesize maximumVideoDataSize=_maximumVideoDataSize;
@property long long maximumImageDataSize; // @synthesize maximumImageDataSize=_maximumImageDataSize;
@property long long maximumImageCount; // @synthesize maximumImageCount=_maximumImageCount;
@property long long maximumURLCount; // @synthesize maximumURLCount=_maximumURLCount;
@property long long authenticationStyle; // @synthesize authenticationStyle=_authenticationStyle;
@property _Bool serviceRegionTargetIsChina; // @synthesize serviceRegionTargetIsChina=_serviceRegionTargetIsChina;
@property(retain) NSString *activityViewIconResourceName; // @synthesize activityViewIconResourceName=_activityViewIconResourceName;
@property(retain) NSString *localizedServiceName; // @synthesize localizedServiceName=_localizedServiceName;
@property(retain) NSString *accountTypeIdentifier; // @synthesize accountTypeIdentifier=_accountTypeIdentifier;
@property(retain) NSString *serviceTypeIdentifier; // @synthesize serviceTypeIdentifier=_serviceTypeIdentifier;
@property(nonatomic) long long maximumVideoCount; // @dynamic maximumVideoCount;
- (id)description;	// IMP=0x00000000000468bf
- (id)composeViewController;	// IMP=0x00000000000465dc
- (id)activityTitle;	// IMP=0x00000000000465ca
- (id)activityImage;	// IMP=0x0000000000046503
@property(readonly) NSBundle *serviceBundle;
- (_Bool)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;	// IMP=0x00000000000463eb
- (_Bool)supportsVideoURL:(id)arg1;	// IMP=0x000000000004637c
- (_Bool)supportsImageURL:(id)arg1;	// IMP=0x000000000004630d
- (_Bool)isFirstClassService;	// IMP=0x0000000000046305
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000000000462ff
- (id)serviceType;	// IMP=0x00000000000462ed
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045cc3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000458a6
- (id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000004577a
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;	// IMP=0x0000000000045645
- (long long)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;	// IMP=0x000000000004555e
- (_Bool)_isValidAuthenicationStyleIdentifier:(id)arg1;	// IMP=0x00000000000454d4
- (id)_encodableStringProperties;	// IMP=0x00000000000454c7
- (id)_authenticationStyleIdentifierMappings;	// IMP=0x00000000000454ba
- (id)integerPropertyKeyMappings;	// IMP=0x00000000000453d6
- (id)_requiredInfoDictKeys;	// IMP=0x0000000000045359
- (_Bool)infoDictHasRequiredKeys:(id)arg1;	// IMP=0x00000000000450dc
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;	// IMP=0x0000000000044aff

@end

