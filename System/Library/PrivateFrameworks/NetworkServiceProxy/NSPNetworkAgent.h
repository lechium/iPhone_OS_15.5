//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NWNetworkAgent-Protocol.h>

@class NSData, NSPAppRule, NSPConfiguration, NSString, NSUUID;

@interface NSPNetworkAgent : NSObject <NWNetworkAgent>
{
    unsigned char _dataDigest[32];	// 8 = 0x8
    _Bool active;	// 40 = 0x28
    _Bool kernelActivated;	// 41 = 0x29
    _Bool userActivated;	// 42 = 0x2a
    _Bool voluntary;	// 43 = 0x2b
    NSUUID *agentUUID;	// 48 = 0x30
    NSString *agentDescription;	// 56 = 0x38
    NSPConfiguration *_configuration;	// 64 = 0x40
    NSPAppRule *_appRule;	// 72 = 0x48
    NSData *_keybag;	// 80 = 0x50
    NSData *_agentData;	// 88 = 0x58
}

+ (id)agentFromData:(id)arg1;	// IMP=0x000000000004118f
+ (id)agentType;	// IMP=0x0000000000040d3a
+ (id)agentDomain;	// IMP=0x0000000000040d2d
- (void).cxx_destruct;	// IMP=0x0000000000041555
@property(retain) NSData *agentData; // @synthesize agentData=_agentData;
@property(retain) NSData *keybag; // @synthesize keybag=_keybag;
@property(retain) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(retain) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic, getter=isVoluntary) _Bool voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)parseAgentData;	// IMP=0x000000000004122c
- (id)copyAgentData;	// IMP=0x0000000000040d74
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040cb7
- (id)init;	// IMP=0x0000000000040c20

// Remaining properties
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic) _Bool supportsBrowseRequests;
@property(nonatomic) _Bool supportsListenRequests;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end

