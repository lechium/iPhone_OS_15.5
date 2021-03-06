//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMEMessageDatagramServer, NSError;
@protocol HMEMessageDatagramConnection, HMETimerProvider;

@protocol HMEMessageDatagramServerDataSource <NSObject>
- (unsigned long long)serverFragmentEventsDataSize:(HMEMessageDatagramServer *)arg1;
- (_Bool)server:(HMEMessageDatagramServer *)arg1 shouldProcessEventsForConnection:(id <HMEMessageDatagramConnection>)arg2;
- (id <HMETimerProvider>)serverTimerProvider:(HMEMessageDatagramServer *)arg1;
- (_Bool)server:(HMEMessageDatagramServer *)arg1 isConnectionTerminatingError:(NSError *)arg2;
- (double)server:(HMEMessageDatagramServer *)arg1 timeoutIntervalForConnection:(id <HMEMessageDatagramConnection>)arg2;
@end

