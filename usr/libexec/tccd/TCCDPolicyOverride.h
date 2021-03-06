//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

@interface TCCDPolicyOverride : NSObject
{
    NSString *plistFilePath;	// 8 = 0x8
    NSDictionary *plistDictionary;	// 16 = 0x10
    NSMutableDictionary *policyAccessByIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_source> *watchedFileVnodeSource;	// 32 = 0x20
}

+ (unsigned long long)evaluateOverridePolicyForAccessByIdentity:(id)arg1 toService:(id)arg2 withIndirectObjectIdentityIdentity:(id)arg3 authorizationReason:(unsigned long long *)arg4;	// IMP=0x0020000000044357
+ (void)loadPolicyData;	// IMP=0x001000000004422f
+ (_Bool)isMDMPolicyOverrideActive;	// IMP=0x00100000000441c1
+ (id)orderedOverridePolicies;	// IMP=0x0010000000044195
+ (id)useString:(id)arg1 orReadFromDefaults:(struct __CFString *)arg2;	// IMP=0x000000000004417f
+ (id)queue;	// IMP=0x0010000000044123
+ (id)logHandle;	// IMP=0x00100000000440f3
- (void).cxx_destruct;	// IMP=0x00200000000463f4
@property(retain) NSObject<OS_dispatch_source> *watchedFileVnodeSource; // @synthesize watchedFileVnodeSource;
@property(retain) NSMutableDictionary *policyAccessByIdentifier; // @synthesize policyAccessByIdentifier;
@property(retain) NSDictionary *plistDictionary; // @synthesize plistDictionary;
@property(retain) NSString *plistFilePath; // @synthesize plistFilePath;
- (void)watchPlistChanges;	// IMP=0x0010000000045f3d
- (id)watchedPath;	// IMP=0x0010000000045f35
- (unsigned long long)_locked_evaluateAccessByIdentity:(id)arg1 toService:(id)arg2 withIndirectObjectIdentityIdentity:(id)arg3 authorizationReason:(unsigned long long *)arg4;	// IMP=0x0010000000045f2a
- (void)parsePlist;	// IMP=0x0010000000045126
- (_Bool)validateEntry:(id)arg1 identifierType:(id)arg2 codeRequirementString:(id)arg3 serviceName:(id)arg4 allowed:(id)arg5 comment:(id)arg6;	// IMP=0x0010000000044eb7
- (id)allowedParser:(id)arg1;	// IMP=0x0010000000044ea1
- (struct __CFData *)parseCodeRequirements:(id)arg1;	// IMP=0x0010000000044e99
- (void)loadAndParse;	// IMP=0x0010000000044da8
- (void)loadPlist;	// IMP=0x00100000000449c8
@property(readonly, getter=isActive) _Bool active;
- (id)init;	// IMP=0x001000000004488f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

