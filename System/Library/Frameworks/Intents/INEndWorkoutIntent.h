//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INEndWorkoutIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INEndWorkoutIntent <INEndWorkoutIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000000b11e4
- (id)parametersByName;	// IMP=0x00000000000b11d2
- (void)setVerb:(id)arg1;	// IMP=0x00000000000b11cc
- (id)verb;	// IMP=0x00000000000b11bf
- (void)setDomain:(id)arg1;	// IMP=0x00000000000b11b9
- (id)domain;	// IMP=0x00000000000b11ac
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000000b1145
- (id)_dictionaryRepresentation;	// IMP=0x00000000000b1070
- (void)setWorkoutName:(id)arg1;	// IMP=0x00000000000b0fe5
@property(readonly, copy, nonatomic) INSpeakableString *workoutName;
- (id)initWithWorkoutName:(id)arg1;	// IMP=0x00000000000b0f0a
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000000b0e98
- (id)_metadata;	// IMP=0x00000000000b0e48
- (id)_typedBackingStore;	// IMP=0x00000000000b0df1
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;	// IMP=0x000000000010737a
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;	// IMP=0x00000000003847f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

