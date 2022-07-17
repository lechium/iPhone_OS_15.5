//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;

@interface NWNetworkAgentRegistration : NSObject
{
    int _registrationSocket;	// 8 = 0x8
    Class _networkAgentClass;	// 16 = 0x10
    NSObject<NWNetworkAgent> *_networkAgent;	// 24 = 0x18
    NSUUID *_registeredUUID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_readSource;	// 48 = 0x30
}

+ (_Bool)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long *)arg2;	// IMP=0x0000000000038ee0
+ (_Bool)removeActiveAssertionFromNetworkAgent:(id)arg1;	// IMP=0x0000000000038df0
+ (_Bool)addActiveAssertionToNetworkAgent:(id)arg1;	// IMP=0x0000000000038cd0
+ (int)newRegistrationFileDescriptor;	// IMP=0x0000000000038cc0
- (void).cxx_destruct;	// IMP=0x0000000000038b30
@property(retain) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int registrationSocket; // @synthesize registrationSocket=_registrationSocket;
@property(retain) NSUUID *registeredUUID; // @synthesize registeredUUID=_registeredUUID;
@property(retain) NSObject<NWNetworkAgent> *networkAgent; // @synthesize networkAgent=_networkAgent;
@property Class networkAgentClass; // @synthesize networkAgentClass=_networkAgentClass;
@property(readonly, nonatomic) unsigned int tokenCount;
@property(nonatomic) unsigned long long useCount;
- (_Bool)assignResolvedEndpoints:(id)arg1 toClient:(id)arg2;	// IMP=0x0000000000038610
- (_Bool)assignDiscoveredEndpoints:(id)arg1 toClient:(id)arg2;	// IMP=0x00000000000382e0
- (_Bool)assignNexusData:(id)arg1 toClient:(id)arg2;	// IMP=0x0000000000037cf0
- (_Bool)removeNetworkAgentFromInterfaceNamed:(id)arg1;	// IMP=0x0000000000037be0
- (_Bool)addNetworkAgentToInterfaceNamed:(id)arg1;	// IMP=0x0000000000037ad0
- (_Bool)setLowWaterMark:(unsigned int)arg1;	// IMP=0x0000000000037a70
- (_Bool)resetError;	// IMP=0x0000000000037a20
- (_Bool)flushTokens;	// IMP=0x00000000000379d0
- (_Bool)addToken:(id)arg1;	// IMP=0x00000000000375e0
- (_Bool)unregisterNetworkAgent;	// IMP=0x00000000000374f0
- (_Bool)updateNetworkAgent:(id)arg1;	// IMP=0x0000000000036fd0
- (_Bool)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2;	// IMP=0x0000000000036dd0
- (_Bool)registerNetworkAgent:(id)arg1;	// IMP=0x0000000000036d60
- (_Bool)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2;	// IMP=0x0000000000036790
- (_Bool)createReadSourceWithRegistrationSocket:(int)arg1;	// IMP=0x0000000000036140
- (void)handleMessageFromAgent;	// IMP=0x0000000000035210
- (int)dupRegistrationFileDescriptor;	// IMP=0x00000000000351d0
@property(readonly, nonatomic, getter=isRegistered) _Bool registered;
- (id)description;	// IMP=0x0000000000035190
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;	// IMP=0x0000000000035070
- (void)dealloc;	// IMP=0x0000000000034fc0
- (id)initWithNetworkAgentClass:(Class)arg1 queue:(id)arg2;	// IMP=0x0000000000034a10
- (id)initWithNetworkAgentClass:(Class)arg1;	// IMP=0x0000000000034750

@end
