//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetTaskAttributeIntentExport-Protocol.h>

@class INContactEventTrigger, INSpatialEventTrigger, INSpeakableString, INTask, INTemporalEventTrigger, NSString;

@interface INSetTaskAttributeIntent <INSetTaskAttributeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000001401c9
- (id)parametersByName;	// IMP=0x00000000001401b7
- (void)setVerb:(id)arg1;	// IMP=0x00000000001401b1
- (id)verb;	// IMP=0x00000000001401a4
- (void)setDomain:(id)arg1;	// IMP=0x000000000014019e
- (id)domain;	// IMP=0x0000000000140191
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000014012a
- (id)_dictionaryRepresentation;	// IMP=0x000000000013fe13
@property(copy, nonatomic) INContactEventTrigger *contactEventTrigger;
- (void)setTemporalEventTrigger:(id)arg1;	// IMP=0x000000000013fc8a
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setSpatialEventTrigger:(id)arg1;	// IMP=0x000000000013fb8c
@property(readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
- (void)setPriority:(long long)arg1;	// IMP=0x000000000013fabc
@property(readonly, nonatomic) long long priority;
- (void)setStatus:(long long)arg1;	// IMP=0x000000000013f9c1
@property(readonly, nonatomic) long long status;
- (void)setTaskTitle:(id)arg1;	// IMP=0x000000000013f893
@property(readonly, copy, nonatomic) INSpeakableString *taskTitle;
- (void)setTargetTask:(id)arg1;	// IMP=0x000000000013f795
@property(readonly, copy, nonatomic) INTask *targetTask;
- (id)initWithTargetTask:(id)arg1 taskTitle:(id)arg2 status:(long long)arg3 priority:(long long)arg4 spatialEventTrigger:(id)arg5 temporalEventTrigger:(id)arg6;	// IMP=0x000000000013f610
- (id)_categoryVerb;	// IMP=0x000000000013f603
- (long long)_intentCategory;	// IMP=0x000000000013f5f8
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000013f586
- (id)_metadata;	// IMP=0x000000000013f536
- (id)_typedBackingStore;	// IMP=0x000000000013f4df
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;	// IMP=0x00000000000201b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

