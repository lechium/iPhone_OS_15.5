//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDMServiceGraphRunner, NSArray, NSDictionary, NSLock, NSMutableDictionary, NSOrderedSet, NSString;

@interface CDMComposerService
{
    NSString *_languageCode;	// 24 = 0x18
    NSDictionary *_startCommand;	// 32 = 0x20
    NSMutableDictionary *_clientIdPropDict;	// 40 = 0x28
    NSArray *_servicesArray;	// 48 = 0x30
    CDMServiceGraphRunner *_serviceGraphRunner;	// 56 = 0x38
    NSLock *_aneLock;	// 64 = 0x40
    NSOrderedSet *_availableServiceGraphs;	// 72 = 0x48
    NSString *_currentServiceGraph;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000419b9
- (id)getCurrentServiceGraph;	// IMP=0x0000000000041960
- (void)setCurrentServiceGraph:(id)arg1;	// IMP=0x00000000000418a4
- (id)createWithId:(id)arg1 serviceGraphType:(id)arg2 graphInput:(id)arg3 languageCode:(id)arg4 startCommand:(id)arg5 selfMetadata:(id)arg6;	// IMP=0x000000000004172d
- (void)_handleSetupRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000410c1
- (void)_handleNLURequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fe0a
- (void)failWithError:(id)arg1 rawCommand:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000003fb41
- (void)_handleListGraphs:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fac5
- (void)_handleSetActiveGraph:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f711
- (void)handleCommand:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f52f
- (void)updateServiceGraphRunner:(id)arg1;	// IMP=0x000000000003f51b
- (void)updateServices:(id)arg1;	// IMP=0x000000000003f507
- (id)supportedCommands;	// IMP=0x000000000003f412
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000003f305
- (void)logNluRequestForInsights:(id)arg1;	// IMP=0x000000000003ec77

@end

