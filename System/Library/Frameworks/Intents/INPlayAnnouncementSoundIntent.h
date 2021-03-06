//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPlayAnnouncementSoundIntentExport-Protocol.h>

@class NSString;

@interface INPlayAnnouncementSoundIntent <INPlayAnnouncementSoundIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000049a8ed
- (id)parametersByName;	// IMP=0x000000000049a8db
- (void)setVerb:(id)arg1;	// IMP=0x000000000049a8d5
- (id)verb;	// IMP=0x000000000049a8c8
- (void)setDomain:(id)arg1;	// IMP=0x000000000049a8c2
- (id)domain;	// IMP=0x000000000049a8b5
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000049a84e
- (id)_dictionaryRepresentation;	// IMP=0x000000000049a799
- (void)setSoundType:(long long)arg1;	// IMP=0x000000000049a741
@property(readonly, nonatomic) long long soundType;
- (id)initWithSoundType:(long long)arg1;	// IMP=0x000000000049a658
- (id)_categoryVerb;	// IMP=0x000000000049a64b
- (long long)_intentCategory;	// IMP=0x000000000049a640
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000049a5ce
- (id)_metadata;	// IMP=0x000000000049a57e
- (id)_typedBackingStore;	// IMP=0x000000000049a527

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

