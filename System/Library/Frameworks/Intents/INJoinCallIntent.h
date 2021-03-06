//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INJoinCallIntentExport-Protocol.h>

@class INCallGroupConversation, INCallGroupConversationFilter, NSString;

@interface INJoinCallIntent <INJoinCallIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004df24b
- (id)parametersByName;	// IMP=0x00000000004df239
- (void)setVerb:(id)arg1;	// IMP=0x00000000004df233
- (id)verb;	// IMP=0x00000000004df226
- (void)setDomain:(id)arg1;	// IMP=0x00000000004df220
- (id)domain;	// IMP=0x00000000004df213
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004df1ac
- (id)_dictionaryRepresentation;	// IMP=0x00000000004df061
- (void)setGroupConversation:(id)arg1;	// IMP=0x00000000004defd6
@property(readonly, copy, nonatomic) INCallGroupConversation *groupConversation;
- (void)setGroupConversationFilter:(id)arg1;	// IMP=0x00000000004deed8
@property(readonly, copy, nonatomic) INCallGroupConversationFilter *groupConversationFilter;
- (id)initWithGroupConversationFilter:(id)arg1 groupConversation:(id)arg2;	// IMP=0x00000000004dedc7
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004ded55
- (id)_metadata;	// IMP=0x00000000004ded05
- (id)_typedBackingStore;	// IMP=0x00000000004decae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

