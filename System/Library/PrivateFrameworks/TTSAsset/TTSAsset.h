//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSNumber, NSString, TTSAssetQuality, TTSAssetSource, TTSAssetTechnology, TTSAssetType;

@interface TTSAsset : NSObject
{
    _Bool _locallyAvailable;	// 8 = 0x8
    _Bool _downloading;	// 9 = 0x9
    _Bool _purgeable;	// 10 = 0xa
    TTSAssetType *_assetType;	// 16 = 0x10
    TTSAssetSource *_assetSource;	// 24 = 0x18
    TTSAssetTechnology *_technology;	// 32 = 0x20
    TTSAssetQuality *_quality;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    long long _versionNumber;	// 64 = 0x40
    NSString *_versionDescription;	// 72 = 0x48
    NSArray *_supportedLanguages;	// 80 = 0x50
    NSString *_primaryLanguage;	// 88 = 0x58
    long long _gender;	// 96 = 0x60
    NSNumber *_age;	// 104 = 0x68
    NSNumber *_diskSize;	// 112 = 0x70
    NSDictionary *_attributes;	// 120 = 0x78
    NSBundle *_bundle;	// 128 = 0x80
}

+ (struct _NSRange)_gryphonVoiceCompatibility;	// IMP=0x0000000000001841
+ (_Bool)_hasTrialEntitlements;	// IMP=0x00000000000016ad
+ (void)_postNewAssetNotification;	// IMP=0x000000000000169c
+ (id)NewAssetNotification;	// IMP=0x000000000000168f
+ (id)bestAssetOfTypes:(id)arg1 matching:(id)arg2;	// IMP=0x00000000000188a0
+ (id)listAssetsOfTypes:(id)arg1 matching:(id)arg2;	// IMP=0x0000000000018690
+ (void)waitForCatalogUpdates;	// IMP=0x000000000001f210
+ (id)describeServer:(id)arg1 source:(id)arg2;	// IMP=0x000000000001f0c0
+ (id)describeServer:(id)arg1 forType:(id)arg2;	// IMP=0x000000000001ef60
+ (id)getServerForType:(id)arg1 source:(id)arg2;	// IMP=0x000000000001ee40
+ (id)getServerForType:(id)arg1;	// IMP=0x000000000001ed40
+ (_Bool)setServer:(id)arg1 forType:(id)arg2 source:(id)arg3;	// IMP=0x000000000001ec10
+ (_Bool)setServer:(id)arg1 forType:(id)arg2;	// IMP=0x000000000001ead0
+ (_Bool)handleProxyEvent:(id)arg1 reply:(id)arg2 connection:(id)arg3;	// IMP=0x000000000002d1c0
- (void).cxx_destruct;	// IMP=0x0000000000001918
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) _Bool purgeable; // @synthesize purgeable=_purgeable;
@property(readonly, nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
@property(readonly, nonatomic) _Bool locallyAvailable; // @synthesize locallyAvailable=_locallyAvailable;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSNumber *diskSize; // @synthesize diskSize=_diskSize;
@property(readonly, nonatomic) NSNumber *age; // @synthesize age=_age;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(readonly, nonatomic) NSArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(readonly, nonatomic) NSString *versionDescription; // @synthesize versionDescription=_versionDescription;
@property(readonly, nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) TTSAssetQuality *quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) TTSAssetTechnology *technology; // @synthesize technology=_technology;
@property(readonly, nonatomic) TTSAssetSource *assetSource; // @synthesize assetSource=_assetSource;
@property(readonly, nonatomic) TTSAssetType *assetType; // @synthesize assetType=_assetType;
- (id)init;	// IMP=0x0000000000001660
- (id)relatedAssetsWithOnlyAvailable:(_Bool)arg1;	// IMP=0x00000000000187d0
@property(nonatomic, readonly) NSString *description;
- (_Bool)isNewer:(id)arg1;	// IMP=0x000000000001e260
- (_Bool)isOlder:(id)arg1;	// IMP=0x000000000001e0e0
- (id)legacyAssetWithBundle:(id)arg1;	// IMP=0x0000000000029ed0
- (void)purge;	// IMP=0x0000000000029e50
- (void)cancelDownloadingThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029df0
- (void)downloadWithReservation:(id)arg1 useBattery:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029d40

@end

