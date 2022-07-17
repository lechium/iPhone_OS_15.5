//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INAddTasksIntentExport-Protocol.h>

@class INContactEventTrigger, INIntent, INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSArray, NSString;

@interface INAddTasksIntent <INAddTasksIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000342a67
- (id)parametersByName;	// IMP=0x0000000000342a55
- (void)setVerb:(id)arg1;	// IMP=0x0000000000342a4f
- (id)verb;	// IMP=0x0000000000342a42
- (void)setDomain:(id)arg1;	// IMP=0x0000000000342a3c
- (id)domain;	// IMP=0x0000000000342a2f
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000003429c8
- (id)_dictionaryRepresentation;	// IMP=0x000000000034271e
@property(copy, nonatomic) INIntent *intent;
@property(copy, nonatomic) INContactEventTrigger *contactEventTrigger;
- (void)setPriority:(long long)arg1;	// IMP=0x00000000003424c5
@property(readonly, nonatomic) long long priority;
- (void)setTemporalEventTrigger:(id)arg1;	// IMP=0x0000000000342397
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setSpatialEventTrigger:(id)arg1;	// IMP=0x0000000000342299
@property(readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
- (void)setTaskTitles:(id)arg1;	// IMP=0x000000000034219b
@property(readonly, copy, nonatomic) NSArray *taskTitles;
- (void)setTargetTaskList:(id)arg1;	// IMP=0x0000000000342099
@property(readonly, copy, nonatomic) INTaskList *targetTaskList;
@property(copy, nonatomic) NSArray *targetTaskListMembers;
@property(nonatomic) long long taskReference;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 priority:(long long)arg5;	// IMP=0x0000000000341d46
- (id)_categoryVerb;	// IMP=0x0000000000341d39
- (long long)_intentCategory;	// IMP=0x0000000000341d2e
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000341cbc
- (id)_metadata;	// IMP=0x0000000000341c6c
- (id)_typedBackingStore;	// IMP=0x0000000000341c15
@property(copy, nonatomic) NSArray *contactEventTriggers;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;	// IMP=0x000000000039941c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
