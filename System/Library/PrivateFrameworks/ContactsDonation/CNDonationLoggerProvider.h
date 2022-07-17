//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationLoggerProvider-Protocol.h>

@class NSString;
@protocol CNDonationAccountLogger, CNDonationAgentLogger, CNDonationAnalyticsLogger, CNDonationExtensionLogger, CNDonationPreferencesLogger, CNDonationToolLogger;

@interface CNDonationLoggerProvider : NSObject <CNDonationLoggerProvider>
{
    id <CNDonationAgentLogger> _agentLoggerImpl;	// 8 = 0x8
    id <CNDonationExtensionLogger> _extensionLoggerImpl;	// 16 = 0x10
    id <CNDonationToolLogger> _toolLoggerImpl;	// 24 = 0x18
    id <CNDonationAccountLogger> _accountLoggerImpl;	// 32 = 0x20
    id <CNDonationPreferencesLogger> _preferencesLoggerImpl;	// 40 = 0x28
    id <CNDonationAnalyticsLogger> _analyticsLoggerImpl;	// 48 = 0x30
}

+ (id)defaultProvider;	// IMP=0x0000000000010503
- (void).cxx_destruct;	// IMP=0x0000000000010717
@property(readonly, nonatomic) id <CNDonationAnalyticsLogger> analyticsLoggerImpl; // @synthesize analyticsLoggerImpl=_analyticsLoggerImpl;
@property(readonly, nonatomic) id <CNDonationPreferencesLogger> preferencesLoggerImpl; // @synthesize preferencesLoggerImpl=_preferencesLoggerImpl;
@property(readonly, nonatomic) id <CNDonationAccountLogger> accountLoggerImpl; // @synthesize accountLoggerImpl=_accountLoggerImpl;
@property(readonly, nonatomic) id <CNDonationToolLogger> toolLoggerImpl; // @synthesize toolLoggerImpl=_toolLoggerImpl;
@property(readonly, nonatomic) id <CNDonationExtensionLogger> extensionLoggerImpl; // @synthesize extensionLoggerImpl=_extensionLoggerImpl;
@property(readonly, nonatomic) id <CNDonationAgentLogger> agentLoggerImpl; // @synthesize agentLoggerImpl=_agentLoggerImpl;
@property(readonly) id <CNDonationAnalyticsLogger> analyticsLogger;
@property(readonly) id <CNDonationPreferencesLogger> preferencesLogger;
@property(readonly) id <CNDonationAccountLogger> accountLogger;
@property(readonly) id <CNDonationToolLogger> toolLogger;
@property(readonly) id <CNDonationExtensionLogger> extensionLogger;
@property(readonly) id <CNDonationAgentLogger> agentLogger;
- (id)init;	// IMP=0x0000000000010588

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
