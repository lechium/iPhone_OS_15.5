//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INListCarsIntentExport-Protocol.h>

@class NSString;

@interface INListCarsIntent <INListCarsIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000042d488
- (id)parametersByName;	// IMP=0x000000000042d476
- (void)setVerb:(id)arg1;	// IMP=0x000000000042d470
- (id)verb;	// IMP=0x000000000042d463
- (void)setDomain:(id)arg1;	// IMP=0x000000000042d45d
- (id)domain;	// IMP=0x000000000042d450
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000042d3e9
- (id)_dictionaryRepresentation;	// IMP=0x000000000042d3dc
- (id)init;	// IMP=0x000000000042d3ad
- (id)_categoryVerb;	// IMP=0x000000000042d3a0
- (long long)_intentCategory;	// IMP=0x000000000042d395
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000042d323
- (id)_metadata;	// IMP=0x000000000042d2d3
- (id)_typedBackingStore;	// IMP=0x000000000042d27c
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000928d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

