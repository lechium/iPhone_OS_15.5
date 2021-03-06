//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetLabeledSettingIntentExport-Protocol.h>

@class INSettingMetadata, INTemporalEventTrigger, NSString;

@interface INSetLabeledSettingIntent <INSetLabeledSettingIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000047ca1c
- (id)parametersByName;	// IMP=0x000000000047ca0a
- (void)setVerb:(id)arg1;	// IMP=0x000000000047ca04
- (id)verb;	// IMP=0x000000000047c9f7
- (void)setDomain:(id)arg1;	// IMP=0x000000000047c9f1
- (id)domain;	// IMP=0x000000000047c9e4
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000047c97d
- (id)_dictionaryRepresentation;	// IMP=0x000000000047c7c4
- (void)setTemporalEventTrigger:(id)arg1;	// IMP=0x000000000047c739
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setLabeledValue:(id)arg1;	// IMP=0x000000000047c654
@property(readonly, copy, nonatomic) NSString *labeledValue;
- (void)setSettingMetadata:(id)arg1;	// IMP=0x000000000047c557
@property(readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
- (id)initWithSettingMetadata:(id)arg1 labeledValue:(id)arg2 temporalEventTrigger:(id)arg3;	// IMP=0x000000000047c41d
- (id)_categoryVerb;	// IMP=0x000000000047c410
- (long long)_intentCategory;	// IMP=0x000000000047c405
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000047c393
- (id)_metadata;	// IMP=0x000000000047c343
- (id)_typedBackingStore;	// IMP=0x000000000047c2ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

