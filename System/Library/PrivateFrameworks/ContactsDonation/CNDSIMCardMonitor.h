//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDSIMCardMonitor-Protocol.h>

@class CNReplaySubject, CoreTelephonyClient, NSString;
@protocol CNCancelable, CNDCoreTelephonyServices, OS_dispatch_queue;

@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor>
{
    CoreTelephonyClient *_coreTelephonyClient;	// 8 = 0x8
    id <CNDCoreTelephonyServices> _coreTelephonyServices;	// 16 = 0x10
    CNReplaySubject *_subject;	// 24 = 0x18
    id <CNCancelable> _subjectToken;	// 32 = 0x20
    struct __CTServerConnection *_serverConnection;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;	// 48 = 0x30
}

+ (void)infoWithClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003c79
+ (id)infoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003a36
+ (id)phoneNumberObservableWithCoreTelephonyClient:(id)arg1;	// IMP=0x0000000000003758
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection *)arg2;	// IMP=0x0000000000003541
+ (id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)arg1 services:(id)arg2 serverConnection:(struct __CTServerConnection *)arg3;	// IMP=0x0000000000003407
+ (id)os_log;	// IMP=0x0000000000002dde
- (void).cxx_destruct;	// IMP=0x0000000000004325
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverConnectionQueue; // @synthesize serverConnectionQueue=_serverConnectionQueue;
@property(nonatomic) struct __CTServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) id <CNCancelable> subjectToken; // @synthesize subjectToken=_subjectToken;
@property(readonly, nonatomic) CNReplaySubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) id <CNDCoreTelephonyServices> coreTelephonyServices; // @synthesize coreTelephonyServices=_coreTelephonyServices;
@property(readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (void)nts_configureSubjectIfNecessary;	// IMP=0x00000000000032cb
- (void)nts_configureConnectionIfNecessary;	// IMP=0x00000000000031e9
- (void)configureStateIfNecessary;	// IMP=0x0000000000003189
- (id)addInfoChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000030d4
- (void)dealloc;	// IMP=0x0000000000003059
- (id)initWithCoreTelephonyClient:(id)arg1 services:(id)arg2;	// IMP=0x0000000000002e9e
- (id)init;	// IMP=0x0000000000002e3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
