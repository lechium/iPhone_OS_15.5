//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSAuditToken, BSMachPortTaskNameRight, NSString;

@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>
{
    _Bool _resolvedBundleID;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    NSString *_bundleID;	// 16 = 0x10
    BSAuditToken *_auditToken;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    BSMachPortTaskNameRight *_taskNameRight;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004fba5
+ (id)processHandleForAuditToken:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000004f2d6
+ (id)processHandleForTaskNameRight:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000004f252
+ (id)processHandleForPID:(int)arg1 bundleID:(id)arg2;	// IMP=0x000000000004f1ee
+ (id)processHandleForTaskNameRight:(id)arg1;	// IMP=0x000000000004ee5e
+ (id)processHandleForPID:(int)arg1;	// IMP=0x000000000004ecfa
+ (id)processHandleForNSXPCConnection:(id)arg1;	// IMP=0x000000000004ec84
+ (id)processHandleForXPCConnection:(id)arg1;	// IMP=0x000000000004ea64
+ (id)processHandleForAuditToken:(id)arg1;	// IMP=0x000000000004e693
+ (id)processHandle;	// IMP=0x000000000004e602
- (void).cxx_destruct;	// IMP=0x000000000004ffe6
@property(readonly, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @synthesize taskNameRight=_taskNameRight;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004fe1d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004fbad
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000004fad5
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000004f9be
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004f99c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004f938
- (id)succinctDescriptionBuilder;	// IMP=0x000000000004f7b5
- (id)succinctDescription;	// IMP=0x000000000004f751
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundlePath;
- (id)valueForEntitlement:(id)arg1;	// IMP=0x000000000004f707
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x000000000004f6f1
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleID;
- (void)dealloc;	// IMP=0x000000000004f521
- (id)init;	// IMP=0x000000000004f35a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
