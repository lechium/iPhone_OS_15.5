//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForMediaIntentExport-Protocol.h>

@class INMediaSearch, INPrivateSearchForMediaIntentData, NSArray, NSString;

@interface INSearchForMediaIntent <INSearchForMediaIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000003a9e0d
- (id)parametersByName;	// IMP=0x00000000003a9dfb
- (void)setVerb:(id)arg1;	// IMP=0x00000000003a9df5
- (id)verb;	// IMP=0x00000000003a9de8
- (void)setDomain:(id)arg1;	// IMP=0x00000000003a9de2
- (id)domain;	// IMP=0x00000000003a9dd5
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000003a9d6e
- (id)_dictionaryRepresentation;	// IMP=0x00000000003a9c23
@property(copy, nonatomic) INPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
- (void)setMediaSearch:(id)arg1;	// IMP=0x00000000003a9a9a
@property(readonly, copy, nonatomic) INMediaSearch *mediaSearch;
- (void)setMediaItems:(id)arg1;	// IMP=0x00000000003a999c
@property(readonly, copy, nonatomic) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2;	// IMP=0x00000000003a988b
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000003a9819
- (id)_metadata;	// IMP=0x00000000003a97c9
- (id)_typedBackingStore;	// IMP=0x00000000003a9772
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;	// IMP=0x00000000003847c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
