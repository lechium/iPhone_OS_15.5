//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@protocol AMSMachService <NSObject>
+ (NSXPCInterface *)serviceInterface;
+ (NSString *)machServiceName;
+ (_Bool)isConnectionEntitled:(NSXPCConnection *)arg1;
@end
