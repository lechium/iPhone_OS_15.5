//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject
{
    NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;	// 8 = 0x8
    NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;	// 16 = 0x10
    NSMutableDictionary *_acAccountTypeToClassNames;	// 24 = 0x18
    NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;	// 32 = 0x20
}

+ (void)_findPrivateFrameworks;	// IMP=0x000000000000a8c0
+ (id)sharedInstance;	// IMP=0x0000000000009d9c
- (void).cxx_destruct;	// IMP=0x000000000000bc4a
@property(retain, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes; // @synthesize acParentAccountTypeToChildAccountTypes=_acParentAccountTypeToChildAccountTypes;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToClassNames; // @synthesize acAccountTypeToClassNames=_acAccountTypeToClassNames;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath; // @synthesize acAccountTypeToAccountDaemonBundleSubpath=_acAccountTypeToAccountDaemonBundleSubpath;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath; // @synthesize acAccountTypeToAccountFrameworkSubpath=_acAccountTypeToAccountFrameworkSubpath;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;	// IMP=0x000000000000bb80
- (Class)agentClassForACAccount:(id)arg1;	// IMP=0x000000000000b855
- (Class)daemonAccountClassForACAccount:(id)arg1;	// IMP=0x000000000000b44e
- (Class)clientAccountClassForACAccount:(id)arg1;	// IMP=0x000000000000b089
- (Class)accountClassForACAccount:(id)arg1;	// IMP=0x000000000000ad4f
- (void)loadDaemonBundleForACAccountType:(id)arg1;	// IMP=0x000000000000accd
- (void)loadFrameworkForACAccountType:(id)arg1;	// IMP=0x000000000000ab82
- (_Bool)_loadFrameworkAtSubpath:(id)arg1;	// IMP=0x000000000000a9ec
- (id)init;	// IMP=0x000000000000a1ff
- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;	// IMP=0x0000000000009e41

@end

