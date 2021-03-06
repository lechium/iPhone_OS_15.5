//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>

@class HMSiriEndpointProfilesMessenger, NSArray, NSNumber, NSString, NSUUID;
@protocol _HMSiriEndpointProfileDelegate;

@interface _HMSiriEndpointProfile <HMFLogging, HMFObject>
{
    _Bool _manuallyDisabled;	// 16 = 0x10
    long long _sessionState;	// 24 = 0x18
    NSUUID *_sessionHubIdentifer;	// 32 = 0x20
    NSString *_siriEndpointVersion;	// 40 = 0x28
    unsigned long long _capability;	// 48 = 0x30
    NSString *_siriEngineVersion;	// 56 = 0x38
    NSNumber *_activeIdentifier;	// 64 = 0x40
    long long _multifunctionButton;	// 72 = 0x48
    NSArray *_assistants;	// 80 = 0x50
    id <_HMSiriEndpointProfileDelegate> _delegate;	// 88 = 0x58
    HMSiriEndpointProfilesMessenger *_messenger;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0000000000170fd1
+ (id)shortDescription;	// IMP=0x0000000000170fbf
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000170fb7
- (void).cxx_destruct;	// IMP=0x000000000016f248
@property(retain) HMSiriEndpointProfilesMessenger *messenger; // @synthesize messenger=_messenger;
@property __weak id <_HMSiriEndpointProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x000000000016f170
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x000000000016e101
- (_Bool)_mergeAssistants:(id)arg1;	// IMP=0x000000000016deec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016de36
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016da2e
- (id)messageDestination;	// IMP=0x000000000016d9c5
- (void)setNotifications:(_Bool)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016d7be
- (void)_handleUpdateProfileState:(id)arg1;	// IMP=0x000000000016c918
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016c727
@property(retain) NSArray *assistants; // @synthesize assistants=_assistants;
@property long long multifunctionButton; // @synthesize multifunctionButton=_multifunctionButton;
@property(nonatomic) _Bool manuallyDisabled; // @synthesize manuallyDisabled=_manuallyDisabled;
@property(retain) NSNumber *activeIdentifier; // @synthesize activeIdentifier=_activeIdentifier;
@property(retain) NSString *siriEngineVersion; // @synthesize siriEngineVersion=_siriEngineVersion;
@property(nonatomic) unsigned long long capability; // @synthesize capability=_capability;
@property(retain) NSString *siriEndpointVersion; // @synthesize siriEndpointVersion=_siriEndpointVersion;
@property(retain) NSUUID *sessionHubIdentifer; // @synthesize sessionHubIdentifer=_sessionHubIdentifer;
@property long long sessionState; // @synthesize sessionState=_sessionState;
- (void)notifyClientDidUpdateSessionState;	// IMP=0x000000000016b4f1
- (void)deleteSiriHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016b345
- (void)applyOnboardingSelections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016b178
- (void)_registerNotificationHandlers;	// IMP=0x000000000016b0fb
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000016af6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

