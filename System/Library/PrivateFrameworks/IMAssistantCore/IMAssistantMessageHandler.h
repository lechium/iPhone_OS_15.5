//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantINMessageConverterPersonProvider-Protocol.h>
#import <IMAssistantCore/IMAssistantIdentifiableIntentHandler-Protocol.h>

@class NSArray, NSString;
@protocol IMAssistantMessageHandlerDataSource;

@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler>
{
    id <IMAssistantMessageHandlerDataSource> _messageHandlerDataSource;	// 8 = 0x8
    NSArray *_keysToFetch;	// 16 = 0x10
    NSString *_intentIdentifier;	// 24 = 0x18
}

+ (id)connectToIMDaemonController;	// IMP=0x000000000001b87b
- (void).cxx_destruct;	// IMP=0x000000000001bf39
@property(copy, nonatomic) NSString *intentIdentifier; // @synthesize intentIdentifier=_intentIdentifier;
@property(retain, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) id <IMAssistantMessageHandlerDataSource> messageHandlerDataSource; // @synthesize messageHandlerDataSource=_messageHandlerDataSource;
- (void)forceTriggerResumeNotification;	// IMP=0x000000000001bbc5
- (id)personFromSPIHandle:(id)arg1 contact:(id)arg2;	// IMP=0x000000000001b6eb
- (id)personFromSPIHandle:(id)arg1;	// IMP=0x000000000001b39a
- (id)contactIdentifiersForParticipantsInChat:(id)arg1;	// IMP=0x000000000001b1ac
- (id)meContactIdentifier;	// IMP=0x000000000001af32
- (id)contactIdentifiersMatchingSPIHandle:(id)arg1;	// IMP=0x000000000001ae09
- (id)contactIdentifiersMatchingHandle:(id)arg1;	// IMP=0x000000000001ada7
- (id)contactIdentifiersMatchingINPersonHandle:(id)arg1;	// IMP=0x000000000001ad45
- (id)contactIdentifiersMatchingHandleID:(id)arg1;	// IMP=0x000000000001a567
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;	// IMP=0x000000000001a2f6
- (id)contactWithIdentifier:(id)arg1;	// IMP=0x000000000001a0ef
- (id)unifiedContactIdentifierForContactIdentifier:(id)arg1;	// IMP=0x0000000000019d32
- (id)contactsMatchingINPerson:(id)arg1;	// IMP=0x0000000000019a0c
- (id)_initWithDataSource:(id)arg1 contactKeysToFetch:(id)arg2 intentIdentifier:(id)arg3;	// IMP=0x0000000000019760
- (id)initWithDataSource:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;	// IMP=0x000000000001974e
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;	// IMP=0x0000000000019737
- (id)initWithIntentIdentifier:(id)arg1;	// IMP=0x000000000001971e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

