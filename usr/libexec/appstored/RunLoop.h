//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class XPCServiceBroker;

@interface RunLoop : NSObject
{
    XPCServiceBroker *_serviceBroker;	// 8 = 0x8
}

+ (id)currentRunLoop;	// IMP=0x00200000000c88d9
- (void).cxx_destruct;	// IMP=0x00200000000c8c90
@property(readonly) XPCServiceBroker *serviceBroker; // @synthesize serviceBroker=_serviceBroker;
- (void)_run;	// IMP=0x00100000000c8a6b
- (void)runUntilIdleExit;	// IMP=0x00100000000c8966
- (_Bool)performStartup;	// IMP=0x00100000000c895e

@end
