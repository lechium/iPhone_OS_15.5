//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/NSSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSProcessMatching-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString, NSUUID, RBSProcessIdentifier;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying>
{
    int _pid;	// 8 = 0x8
    NSString *_description;	// 16 = 0x10
    unsigned long long _hash;	// 24 = 0x18
    NSString *_angelJobLabel;	// 32 = 0x20
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000010acd
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010aa1
+ (_Bool)shouldManageExtensionWithExtensionPoint:(id)arg1;	// IMP=0x00000000000104e4
+ (id)identityForXPCServiceExecutablePath:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3 host:(id)arg4 UUID:(id)arg5;	// IMP=0x000000000000fde2
+ (id)identityForXPCServiceExecutablePath:(id)arg1 host:(id)arg2;	// IMP=0x000000000000fdb0
+ (id)extensionIdentityForPlugInKitIdentifier:(id)arg1 hostIdentifier:(id)arg2 UUID:(id)arg3;	// IMP=0x000000000000fc16
+ (id)identityForXPCServiceIdentifier:(id)arg1;	// IMP=0x000000000000fbfb
+ (id)_identityForXPCServiceIdentifier:(id)arg1 variant:(long long)arg2;	// IMP=0x000000000000fbe2
+ (id)identityForExecutablePath:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3;	// IMP=0x000000000000f929
+ (id)identityForLaunchdJobLabel:(id)arg1 isMultiInstance:(_Bool)arg2 pid:(int)arg3 auid:(unsigned int)arg4;	// IMP=0x000000000000f84f
+ (id)identityForAngelJobLabel:(id)arg1;	// IMP=0x000000000000f66f
+ (id)identityForDaemonJobLabel:(id)arg1;	// IMP=0x000000000000f61d
+ (id)identityForMacApplicationJobLabel:(id)arg1 appID:(id)arg2 platform:(int)arg3;	// IMP=0x000000000000f604
+ (id)identityForMacApplicationJobLabel:(id)arg1 wrappedInfoProvider:(id)arg2 platform:(int)arg3;	// IMP=0x000000000000f5b7
+ (id)identityForApplicationJobLabel:(id)arg1;	// IMP=0x000000000000f598
+ (id)identityForLSApplicationIdentity:(id)arg1;	// IMP=0x000000000000f57f
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1 auid:(unsigned int)arg2;	// IMP=0x000000000000f55b
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1;	// IMP=0x000000000000f547
+ (id)identityForWrappedInfoProviderIdentity:(id)arg1;	// IMP=0x000000000000f4fa
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1 jobLabel:(id)arg2 auid:(unsigned int)arg3 platform:(int)arg4;	// IMP=0x000000000000f4b5
+ (id)identityForApplicationJobLabel:(id)arg1 bundleID:(id)arg2 platform:(int)arg3;	// IMP=0x000000000000f470
+ (id)identityOfCurrentProcess;	// IMP=0x000000000000f422
+ (id)identityForPlugInKitIdentifier:(id)arg1;	// IMP=0x000000000000f3e6
- (void).cxx_destruct;	// IMP=0x0000000000010c32
@property(readonly, copy, nonatomic) NSString *angelJobLabel; // @synthesize angelJobLabel=_angelJobLabel;
@property(readonly) unsigned long long hash; // @synthesize hash=_hash;
@property(readonly, copy) NSString *description; // @synthesize description=_description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010bff
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000010b47
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000010ad5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010abb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010aa9
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqualToIdentity:(id)arg1;	// IMP=0x000000000001092f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000108c2
@property(readonly, nonatomic) _Bool inheritsCoalitionBand;
- (id)processPredicate;	// IMP=0x000000000001089e
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000010848
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x0000000000010839
- (id)initWithDecodeFromJob:(id)arg1;	// IMP=0x00000000000105fc
- (id)encodeForJob;	// IMP=0x0000000000010575
@property(readonly, nonatomic) NSString *personaString;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, copy, nonatomic) NSString *applicationJobLabel;
@property(readonly, copy, nonatomic) RBSProcessIdentifier *hostIdentifier;
@property(readonly, copy, nonatomic) RBSProcessIdentity *hostIdentity;
@property(readonly, copy, nonatomic) NSString *daemonJobLabel;
@property(readonly, copy, nonatomic) NSString *embeddedApplicationIdentifier;
@property(readonly, nonatomic, getter=isAnonymous) _Bool anonymous;
@property(readonly, nonatomic, getter=isApplication) _Bool application;
@property(readonly, nonatomic, getter=isAngel) _Bool angel;
@property(readonly, nonatomic, getter=isDaemon) _Bool daemon;
@property(readonly, copy, nonatomic) NSString *xpcServiceIdentifier;
@property(readonly, nonatomic, getter=isXPCService) _Bool XPCService;
@property(readonly, nonatomic, getter=isEmbeddedApplication) _Bool embeddedApplication;
@property(readonly, nonatomic) unsigned char defaultManageFlags;
@property(readonly, nonatomic, getter=isExtension) _Bool extension;
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x000000000000f844
- (id)_init;	// IMP=0x000000000000f743
- (id)init;	// IMP=0x000000000000f6bc
@property(readonly, nonatomic) NSString *shortDescription;
@property(readonly, nonatomic) int platform;
@property(readonly, nonatomic) unsigned int auid;

// Remaining properties
@property(readonly) Class superclass;

@end

