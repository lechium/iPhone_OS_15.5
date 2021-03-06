//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/NSObject-Protocol.h>

@protocol SOSServerProtocol <NSObject>
- (void)mostRecentLocationSentWithCompletion:(void (^)(CLLocation *))arg1;
- (void)isSendingLocationUpdate:(void (^)(_Bool))arg1;
- (void)stopSendingLocationUpdate;
- (void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(void (^)(_Bool, id *))arg2;
- (void)startSendingLocationUpdateWithCompletion:(void (^)(_Bool, id *))arg1;
- (void)willStartSendingLocationUpdate;
@end

