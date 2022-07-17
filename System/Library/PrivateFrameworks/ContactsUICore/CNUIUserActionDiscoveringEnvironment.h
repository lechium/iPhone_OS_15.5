//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionDiscoveringEnvironment-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver, NSString;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionTargetDiscovering;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    id <CNLSApplicationWorkspace> _applicationWorkspace;	// 16 = 0x10
    id <CNTUCallProviderManager> _callProviderManager;	// 24 = 0x18
    CNUIIDSContactPropertyResolver *_idsContactPropertyResolver;	// 32 = 0x20
    id <CNMCProfileConnection> _profileConnection;	// 40 = 0x28
    id <CNCapabilities> _capabilities;	// 48 = 0x30
    id <CNSchedulerProvider> _schedulerProvider;	// 56 = 0x38
    id <CNSchedulerProvider> _highLatencySchedulerProvider;	// 64 = 0x40
    id <CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;	// 72 = 0x48
    id <CNUIRTTUtilities> _ttyUtilities;	// 80 = 0x50
    id <CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000003462a
@property(readonly, nonatomic) id <CNUIUserActionTargetDiscovering> targetDiscoveringHelper; // @synthesize targetDiscoveringHelper=_targetDiscoveringHelper;
@property(readonly, nonatomic) id <CNUIRTTUtilities> ttyUtilities; // @synthesize ttyUtilities=_ttyUtilities;
@property(readonly, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher; // @synthesize defaultUserActionFetcher=_defaultUserActionFetcher;
@property(readonly, nonatomic) id <CNSchedulerProvider> highLatencySchedulerProvider; // @synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) id <CNMCProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver; // @synthesize idsContactPropertyResolver=_idsContactPropertyResolver;
@property(readonly, nonatomic) id <CNTUCallProviderManager> callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
- (id)nts_lazyContactStore;	// IMP=0x000000000003458b
@property(readonly, nonatomic) CNContactStore *contactStore;
- (id)copyWithContactStore:(id)arg1;	// IMP=0x0000000000034375
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9 ttyUtilities:(id)arg10;	// IMP=0x0000000000034168
- (id)initWithIDSAvailabilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;	// IMP=0x0000000000033e16
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;	// IMP=0x0000000000033e04
- (id)init;	// IMP=0x0000000000033d4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
