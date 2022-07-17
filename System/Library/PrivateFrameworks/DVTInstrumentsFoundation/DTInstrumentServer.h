//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTInstrumentServerAllowedRPC-Protocol.h>
#import <DVTInstrumentsFoundation/DTInstrumentServerSimulatorPrivilege-Protocol.h>

@class DTXConnection, NSString;

@interface DTInstrumentServer : NSObject <DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege>
{
    DTXConnection *_connection;	// 8 = 0x8
}

+ (void)_tfpPortReceived:(unsigned int)arg1;	// IMP=0x000000000003db11
+ (void)_taskInvalid:(unsigned int)arg1 forPid:(int)arg2;	// IMP=0x000000000003d99f
+ (unsigned int)taskForPid:(int)arg1;	// IMP=0x000000000003d50e
+ (void)takeOwnershipOfSharedAuthorization:(void *)arg1;	// IMP=0x000000000003d4cd
+ (_Bool)isAppleInternal;	// IMP=0x000000000003c4e7
- (void).cxx_destruct;	// IMP=0x000000000003dc90
@property(readonly, nonatomic) DTXConnection *connection; // @synthesize connection=_connection;
- (id)_blessSimulatorHub:(int)arg1;	// IMP=0x000000000003db90
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)arg1;	// IMP=0x000000000003db77
- (void)loadServicesAtPath:(id)arg1;	// IMP=0x000000000003ccb9
- (void)setMaxConnectionEnqueue:(unsigned long long)arg1;	// IMP=0x000000000003cca3
- (void)cancel;	// IMP=0x000000000003cc8d
- (void)resume;	// IMP=0x000000000003cc77
- (id)initWithTransport:(id)arg1;	// IMP=0x000000000003c500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
