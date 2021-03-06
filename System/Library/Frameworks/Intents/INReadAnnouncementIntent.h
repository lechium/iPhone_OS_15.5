//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INReadAnnouncementIntentExport-Protocol.h>
#import <Intents/UNNotificationContentProviding-Protocol.h>

@class NSString;

@interface INReadAnnouncementIntent <UNNotificationContentProviding, INReadAnnouncementIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000483b5f
- (id)parametersByName;	// IMP=0x0000000000483b4d
- (void)setVerb:(id)arg1;	// IMP=0x0000000000483b47
- (id)verb;	// IMP=0x0000000000483b3a
- (void)setDomain:(id)arg1;	// IMP=0x0000000000483b34
- (id)domain;	// IMP=0x0000000000483b27
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000483ac0
- (id)_dictionaryRepresentation;	// IMP=0x0000000000483934
- (void)setUserNotificationType:(long long)arg1;	// IMP=0x00000000004838c3
@property(readonly, nonatomic) long long userNotificationType;
- (void)setStartAnnouncementIdentifier:(id)arg1;	// IMP=0x00000000004837ab
@property(readonly, copy, nonatomic) NSString *startAnnouncementIdentifier;
- (void)setReadType:(long long)arg1;	// IMP=0x00000000004836c8
@property(readonly, nonatomic) long long readType;
- (id)initWithReadType:(long long)arg1 startAnnouncementIdentifier:(id)arg2 userNotificationType:(long long)arg3;	// IMP=0x0000000000483584
- (id)_categoryVerb;	// IMP=0x0000000000483577
- (long long)_intentCategory;	// IMP=0x000000000048356c
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004834fa
- (id)_metadata;	// IMP=0x00000000004834aa
- (id)_typedBackingStore;	// IMP=0x0000000000483453

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

