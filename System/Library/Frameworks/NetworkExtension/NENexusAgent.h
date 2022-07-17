//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NWNetworkAgent-Protocol.h>

@class NSString, NSUUID, NWNetworkAgentRegistration;
@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject <NWNetworkAgent>
{
    _Bool active;	// 8 = 0x8
    _Bool supportsBrowseRequests;	// 9 = 0x9
    _Bool nexusProvider;	// 10 = 0xa
    unsigned int _frameType;	// 12 = 0xc
    NSUUID *agentUUID;	// 16 = 0x10
    NSString *agentDescription;	// 24 = 0x18
    NWNetworkAgentRegistration *_registration;	// 32 = 0x20
    NSObject<NENexusAgentDelegate> *_delegate;	// 40 = 0x28
}

+ (id)agentFromData:(id)arg1;	// IMP=0x0000000000143b08
+ (id)agentType;	// IMP=0x0000000000143afb
+ (id)agentDomain;	// IMP=0x0000000000143aee
- (void).cxx_destruct;	// IMP=0x0000000000144042
@property __weak NSObject<NENexusAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned int frameType; // @synthesize frameType=_frameType;
@property(retain) NWNetworkAgentRegistration *registration; // @synthesize registration=_registration;
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider; // @synthesize nexusProvider;
@property(nonatomic) _Bool supportsBrowseRequests; // @synthesize supportsBrowseRequests;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)unassertAgentWithOptions:(id)arg1;	// IMP=0x0000000000143eff
- (_Bool)assertAgentWithOptions:(id)arg1;	// IMP=0x0000000000143e7f
- (_Bool)startAgentWithOptions:(id)arg1;	// IMP=0x0000000000143dff
- (void)closeNexusWithOptions:(id)arg1;	// IMP=0x0000000000143d80
- (_Bool)requestNexusWithOptions:(id)arg1;	// IMP=0x0000000000143cfc
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
- (id)copyAgentData;	// IMP=0x0000000000143bc5

// Remaining properties
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic) _Bool supportsListenRequests;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end
