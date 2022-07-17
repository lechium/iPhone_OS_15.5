//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetTimerAttributeIntentExport-Protocol.h>

@class INSpeakableString, INTimer, NSString;

@interface INSetTimerAttributeIntent <INSetTimerAttributeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000386001
- (id)parametersByName;	// IMP=0x0000000000385fef
- (void)setVerb:(id)arg1;	// IMP=0x0000000000385fe9
- (id)verb;	// IMP=0x0000000000385fdc
- (void)setDomain:(id)arg1;	// IMP=0x0000000000385fd6
- (id)domain;	// IMP=0x0000000000385fc9
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000385f62
- (id)_dictionaryRepresentation;	// IMP=0x0000000000385d91
- (void)setToLabel:(id)arg1;	// IMP=0x0000000000385d06
@property(readonly, copy, nonatomic) INSpeakableString *toLabel;
- (void)setToDuration:(double)arg1;	// IMP=0x0000000000385c28
@property(readonly, nonatomic) double toDuration;
- (void)setTargetTimer:(id)arg1;	// IMP=0x0000000000385b09
@property(readonly, copy, nonatomic) INTimer *targetTimer;
- (id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3;	// IMP=0x00000000003859e1
- (id)_categoryVerb;	// IMP=0x00000000003859d4
- (long long)_intentCategory;	// IMP=0x00000000003859c9
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000385957
- (id)_metadata;	// IMP=0x0000000000385907
- (id)_typedBackingStore;	// IMP=0x00000000003858b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
