//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostDelegate-Protocol.h>

@class NEExtensionAppProxyProviderHostContext;

@protocol NEExtensionAppProxyProviderHostDelegate <NEExtensionTunnelProviderHostDelegate>
- (void)extension:(NEExtensionAppProxyProviderHostContext *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg2;
@end

