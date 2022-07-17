//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AEAssessmentStateSourceRegistering-Protocol.h>

@class AEXPCProxy;
@protocol OS_dispatch_queue;

@interface AEAssessmentStateSourceRegisteringProxy : NSObject <AEAssessmentStateSourceRegistering>
{
    AEXPCProxy *_xpcProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000b84b
+ (id)daemonProxyWithQueue:(id)arg1;	// IMP=0x000000000000b7cf
- (void).cxx_destruct;	// IMP=0x000000000000bb18
- (void)registerPublisherWithLifetimeEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b8dd

@end
