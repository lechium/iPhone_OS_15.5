//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetAudioSourceInCarIntentExport-Protocol.h>

@class NSString;

@interface INSetAudioSourceInCarIntent <INSetAudioSourceInCarIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000007ee9f
- (id)parametersByName;	// IMP=0x000000000007ee8d
- (void)setVerb:(id)arg1;	// IMP=0x000000000007ee87
- (id)verb;	// IMP=0x000000000007ee7a
- (void)setDomain:(id)arg1;	// IMP=0x000000000007ee74
- (id)domain;	// IMP=0x000000000007ee67
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000007ee00
- (id)_dictionaryRepresentation;	// IMP=0x000000000007ec72
- (void)setRelativeAudioSourceReference:(long long)arg1;	// IMP=0x000000000007ec01
@property(readonly, nonatomic) long long relativeAudioSourceReference;
- (void)setAudioSource:(long long)arg1;	// IMP=0x000000000007eaf9
@property(readonly, nonatomic) long long audioSource;
- (id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2;	// IMP=0x000000000007e9e8
- (id)_categoryVerb;	// IMP=0x000000000007e9db
- (long long)_intentCategory;	// IMP=0x000000000007e9d0
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000007e95e
- (id)_metadata;	// IMP=0x000000000007e90e
- (id)_typedBackingStore;	// IMP=0x000000000007e8b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

