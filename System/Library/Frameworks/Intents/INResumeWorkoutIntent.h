//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INResumeWorkoutIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INResumeWorkoutIntent <INResumeWorkoutIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000333847
- (id)parametersByName;	// IMP=0x0000000000333835
- (void)setVerb:(id)arg1;	// IMP=0x000000000033382f
- (id)verb;	// IMP=0x0000000000333822
- (void)setDomain:(id)arg1;	// IMP=0x000000000033381c
- (id)domain;	// IMP=0x000000000033380f
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000003337a8
- (id)_dictionaryRepresentation;	// IMP=0x00000000003336d3
- (void)setWorkoutName:(id)arg1;	// IMP=0x0000000000333648
@property(readonly, copy, nonatomic) INSpeakableString *workoutName;
- (id)initWithWorkoutName:(id)arg1;	// IMP=0x000000000033356d
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000003334fb
- (id)_metadata;	// IMP=0x00000000003334ab
- (id)_typedBackingStore;	// IMP=0x0000000000333454
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;	// IMP=0x0000000000106f44
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;	// IMP=0x00000000003847cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

