//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/SSRAssetProviding-Protocol.h>

@class NSString;

@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>
{
}

- (id)_filteredAssets:(id)arg1 forLanguage:(id)arg2;	// IMP=0x00000000000428fc
- (id)_findLatestInstalledAsset:(id)arg1;	// IMP=0x0000000000042638
- (id)_installedMobileAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2;	// IMP=0x000000000004240f
- (id)_buildAssetQueryForAssetType:(unsigned long long)arg1;	// IMP=0x00000000000422d2
- (unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;	// IMP=0x00000000000422a4
- (id)_getEndpointAssetTypeString;	// IMP=0x0000000000042271
- (id)_getSSRAssetTypeString;	// IMP=0x0000000000042264
- (unsigned long long)_getSSRAssetCurrentCompatibilityVersion;	// IMP=0x0000000000042259
- (unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;	// IMP=0x0000000000042205
- (id)_getVoiceTriggerAssetTypeString;	// IMP=0x000000000004219c
- (unsigned long long)getAssetProviderType;	// IMP=0x0000000000042194
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000041d6e
- (id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2;	// IMP=0x0000000000041bc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

