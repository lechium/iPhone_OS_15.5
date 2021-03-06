//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NWNetworkAgent-Protocol.h>

@class NSString, NSUUID;
@protocol NSPPrivacyProxyTokenAgentDelegate;

@interface NSPPrivacyProxyTokenAgent : NSObject <NWNetworkAgent>
{
    _Bool active;	// 8 = 0x8
    _Bool kernelActivated;	// 9 = 0x9
    _Bool userActivated;	// 10 = 0xa
    _Bool voluntary;	// 11 = 0xb
    NSUUID *agentUUID;	// 16 = 0x10
    NSString *agentDescription;	// 24 = 0x18
    NSObject<NSPPrivacyProxyTokenAgentDelegate> *_delegate;	// 32 = 0x20
}

+ (id)agentFromData:(id)arg1;	// IMP=0x000000000000d892
+ (id)agentType;	// IMP=0x000000000000d86f
+ (id)agentDomain;	// IMP=0x000000000000d862
- (void).cxx_destruct;	// IMP=0x000000000000d9f9
@property __weak NSObject<NSPPrivacyProxyTokenAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isVoluntary) _Bool voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (_Bool)reportError:(int)arg1 withOptions:(id)arg2;	// IMP=0x000000000000d8e6
- (void)tokenLowWaterMarkReached;	// IMP=0x000000000000d89a
- (id)copyAgentData;	// IMP=0x000000000000d88a
- (id)initWithDelegate:(id)arg1 uuid:(id)arg2 agentDesc:(id)arg3;	// IMP=0x000000000000d75d

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

