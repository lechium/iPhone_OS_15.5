//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Logger, NSCache;

@interface PSAppDataUsagePolicyCache : NSObject
{
    Logger *_logger;	// 8 = 0x8
    NSCache *_policyCache;	// 16 = 0x10
    struct __CTServerConnection *_ctServerConnection;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000000a60c
- (void).cxx_destruct;	// IMP=0x000000000000b903
@property(retain, nonatomic) struct __CTServerConnection *ctServerConnection; // @synthesize ctServerConnection=_ctServerConnection;
@property(retain, nonatomic) NSCache *policyCache; // @synthesize policyCache=_policyCache;
- (id)getLogger;	// IMP=0x000000000000b875
- (_Bool)setUsagePoliciesForBundle:(id)arg1 cellular:(_Bool)arg2 wifi:(_Bool)arg3;	// IMP=0x000000000000b59e
- (_Bool)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2;	// IMP=0x000000000000b32f
- (id)usagePolicyFor:(id)arg1;	// IMP=0x000000000000b198
- (id)fetchUsagePolicyFor:(id)arg1;	// IMP=0x000000000000adb7
- (id)init;	// IMP=0x000000000000ad08
- (void)managedConfigurationProfileListDidChange;	// IMP=0x000000000000ac8a
- (void)managedConfigurationSettingsDidChange;	// IMP=0x000000000000ac0c
- (void)willEnterForeground;	// IMP=0x000000000000ab8e
- (void)handlePolicyChangedNotification;	// IMP=0x000000000000aa67
- (void)clearCache;	// IMP=0x000000000000a9e8
- (void)dealloc;	// IMP=0x000000000000a9a9
- (id)initPrivate;	// IMP=0x000000000000a671

@end

