//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateAlarmIntentExport-Protocol.h>

@class INDateComponentsRange, INSpeakableString, NSNumber, NSString;

@interface INCreateAlarmIntent <INCreateAlarmIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004ae5aa
- (id)parametersByName;	// IMP=0x00000000004ae598
- (void)setVerb:(id)arg1;	// IMP=0x00000000004ae592
- (id)verb;	// IMP=0x00000000004ae585
- (void)setDomain:(id)arg1;	// IMP=0x00000000004ae57f
- (id)domain;	// IMP=0x00000000004ae572
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004ae47d
- (id)_dictionaryRepresentation;	// IMP=0x00000000004ae23c
- (void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1;	// IMP=0x00000000004ae1af
@property(readonly, nonatomic) unsigned long long alarmRepeatScheduleOptions;
- (void)setLabel:(id)arg1;	// IMP=0x00000000004ae052
@property(readonly, copy, nonatomic) INSpeakableString *label;
- (void)setTime:(id)arg1;	// IMP=0x00000000004adf54
@property(readonly, copy, nonatomic) INDateComponentsRange *time;
- (void)setRelativeOffsetInMinutes:(id)arg1;	// IMP=0x00000000004ade55
@property(readonly, copy, nonatomic) NSNumber *relativeOffsetInMinutes;
- (id)initWithRelativeOffsetInMinutes:(id)arg1 time:(id)arg2 label:(id)arg3 alarmRepeatScheduleOptions:(unsigned long long)arg4;	// IMP=0x00000000004adcc3
- (id)_categoryVerb;	// IMP=0x00000000004adcb6
- (long long)_intentCategory;	// IMP=0x00000000004adcab
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004adc39
- (id)_metadata;	// IMP=0x00000000004adbe9
- (id)_typedBackingStore;	// IMP=0x00000000004adb92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

