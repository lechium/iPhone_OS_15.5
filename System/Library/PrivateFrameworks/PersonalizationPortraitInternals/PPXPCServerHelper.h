//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPXPCServerHelper : NSObject
{
}

+ (_Bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3;	// IMP=0x00000000000f0d2e
+ (_Bool)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000f0c87
+ (_Bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 allowedServerInterface:(id)arg3 allowedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(CDUnknownBlockType)arg6 setupClientProxy:(CDUnknownBlockType)arg7 interruptionHandler:(CDUnknownBlockType)arg8 invalidationHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000000f06e3

@end

