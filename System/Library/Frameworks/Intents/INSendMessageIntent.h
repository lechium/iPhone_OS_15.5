//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSendMessageIntentExport-Protocol.h>
#import <Intents/UNNotificationContentProviding-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@interface INSendMessageIntent <UNNotificationContentProviding, INSendMessageIntentExport>
{
}

+ (id)_ignoredParameters;	// IMP=0x0000000000118102
- (id)_spotlightContentType;	// IMP=0x00000000001f8104
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;	// IMP=0x00000000001f7c70
- (void)setParametersByName:(id)arg1;	// IMP=0x00000000001f7c6a
- (id)parametersByName;	// IMP=0x00000000001f7c58
- (void)setVerb:(id)arg1;	// IMP=0x00000000001f7c52
- (id)verb;	// IMP=0x00000000001f7c45
- (void)setDomain:(id)arg1;	// IMP=0x00000000001f7c3f
- (id)domain;	// IMP=0x00000000001f7c32
- (_Bool)_isUserConfirmationRequired;	// IMP=0x00000000001f7c2a
- (id)_currentParameterCombination;	// IMP=0x00000000001f7a60
- (id)_validParameterCombinationsWithSchema:(id)arg1;	// IMP=0x00000000001f762c
- (id)_keyCodableAttributes;	// IMP=0x00000000001f7572
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000001f7397
- (id)_dictionaryRepresentation;	// IMP=0x00000000001f6f62
- (id)_redactedDictionaryRepresentation;	// IMP=0x00000000001f6ef2
@property(copy, nonatomic) NSString *notificationThreadIdentifier;
- (void)setAttachments:(id)arg1;	// IMP=0x00000000001f6d83
@property(readonly, copy, nonatomic) NSArray *attachments;
@property(nonatomic) long long effect;
- (void)setSender:(id)arg1;	// IMP=0x00000000001f6b83
@property(readonly, copy, nonatomic) INPerson *sender;
- (void)setServiceName:(id)arg1;	// IMP=0x00000000001f6a9e
@property(readonly, copy, nonatomic) NSString *serviceName;
- (void)setConversationIdentifier:(id)arg1;	// IMP=0x00000000001f69ba
@property(readonly, copy, nonatomic) NSString *conversationIdentifier;
- (void)setSpeakableGroupName:(id)arg1;	// IMP=0x00000000001f68bd
@property(readonly, copy, nonatomic) INSpeakableString *speakableGroupName;
- (void)setContent:(id)arg1;	// IMP=0x00000000001f67bf
@property(readonly, copy, nonatomic) NSString *content;
- (void)setOutgoingMessageType:(long long)arg1;	// IMP=0x00000000001f66d7
@property(readonly, nonatomic) long long outgoingMessageType;
- (void)setRecipients:(id)arg1;	// IMP=0x00000000001f65a6
@property(readonly, copy, nonatomic) NSArray *recipients;
- (id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 attachments:(id)arg8;	// IMP=0x00000000001f63d6
- (long long)_preferredInteractionDirection;	// IMP=0x00000000001f63cb
- (id)_categoryVerb;	// IMP=0x00000000001f63be
- (long long)_intentCategory;	// IMP=0x00000000001f63b3
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000001f6341
- (id)_metadata;	// IMP=0x00000000001f62f1
- (id)_typedBackingStore;	// IMP=0x00000000001f629a
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;	// IMP=0x0000000000010c6f
- (void)setGroupName:(id)arg1;	// IMP=0x000000000007143b
- (id)groupName;	// IMP=0x0000000000071389
- (id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7;	// IMP=0x0000000000071354
- (id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6;	// IMP=0x0000000000071321
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;	// IMP=0x000000000007121f
- (_Bool)_isValidSubProducer:(id)arg1;	// IMP=0x00000000001d44e9
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000436488

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

