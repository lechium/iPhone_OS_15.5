//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface RBSXPCMessageContext : NSObject
{
    NSObject<OS_xpc_object> *_handoffToken;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
}

+ (void)runWithoutContext:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037429
+ (id)currentContext;	// IMP=0x00000000000373a1
- (void).cxx_destruct;	// IMP=0x0000000000037812
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)handoffToQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037695

@end

