//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <ActivityAchievementsDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class ACHTemplateStore, HDProfile, NSDictionary, NSString;

@interface ACHBackCompatMonthlyChallengeListener : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;	// 8 = 0x8
    ACHTemplateStore *_templateStore;	// 16 = 0x10
    CDUnknownBlockType _readTemplatesBlock;	// 24 = 0x18
    NSDictionary *_injectedKeyValuePairs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000161fb
@property(retain, nonatomic) NSDictionary *injectedKeyValuePairs; // @synthesize injectedKeyValuePairs=_injectedKeyValuePairs;
@property(copy, nonatomic) CDUnknownBlockType readTemplatesBlock; // @synthesize readTemplatesBlock=_readTemplatesBlock;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (id)_definitionsFromKeyValuePairs:(id)arg1;	// IMP=0x0000000000016016
- (_Bool)_readAndSaveBackCompatDefinitions;	// IMP=0x0000000000015333
- (void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)arg1;	// IMP=0x00000000000151f6
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x000000000001502c
- (void)daemonReady:(id)arg1;	// IMP=0x0000000000014dd2
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2;	// IMP=0x0000000000014d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

