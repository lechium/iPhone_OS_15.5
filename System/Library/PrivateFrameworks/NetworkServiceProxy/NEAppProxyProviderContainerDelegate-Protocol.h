//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEAppProxyProviderContainer, NETunnelNetworkSettings, NSError;

@protocol NEAppProxyProviderContainerDelegate
- (void)container:(NEAppProxyProviderContainer *)arg1 didSetTunnelConfiguration:(NETunnelNetworkSettings *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)container:(NEAppProxyProviderContainer *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg2;
- (void)container:(NEAppProxyProviderContainer *)arg1 didFailWithError:(NSError *)arg2;
- (void)container:(NEAppProxyProviderContainer *)arg1 didStartWithError:(NSError *)arg2;
@end

