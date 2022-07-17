//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/NSObject-Protocol.h>

@class NSString;
@protocol STDynamicActivityAttributionClientHandle;

@protocol STDynamicActivityAttributionServerHandle <NSObject>
- (void)unsubscribeFromUpdates:(id <STDynamicActivityAttributionClientHandle>)arg1;
- (void)subscribeToUpdates:(id <STDynamicActivityAttributionClientHandle>)arg1;
- (void)setAttributionStringWithFormat:(NSString *)arg1 maskingClientAuditToken:(CDStruct_4c969caf)arg2 forClient:(id <STDynamicActivityAttributionClientHandle>)arg3;
- (void)setLocalizableAttributionKey:(NSString *)arg1 andApplication:(NSString *)arg2 forClient:(id <STDynamicActivityAttributionClientHandle>)arg3;
@end
