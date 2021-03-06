//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSaveProfileInCarIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSaveProfileInCarIntent <INSaveProfileInCarIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000003448f7
- (id)parametersByName;	// IMP=0x00000000003448e5
- (void)setVerb:(id)arg1;	// IMP=0x00000000003448df
- (id)verb;	// IMP=0x00000000003448d2
- (void)setDomain:(id)arg1;	// IMP=0x00000000003448cc
- (id)domain;	// IMP=0x00000000003448bf
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000034475d
- (id)_dictionaryRepresentation;	// IMP=0x0000000000344612
- (void)setProfileName:(id)arg1;	// IMP=0x0000000000344587
@property(readonly, copy, nonatomic) NSString *profileName;
- (void)setProfileNumber:(id)arg1;	// IMP=0x0000000000344489
@property(readonly, copy, nonatomic) NSNumber *profileNumber;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2;	// IMP=0x0000000000344378
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000344306
- (id)_metadata;	// IMP=0x00000000003442b6
- (id)_typedBackingStore;	// IMP=0x000000000034425f
@property(readonly, copy, nonatomic) NSString *profileLabel;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2;	// IMP=0x000000000006d8dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

