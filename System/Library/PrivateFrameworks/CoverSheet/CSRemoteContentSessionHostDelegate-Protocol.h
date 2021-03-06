//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentModalViewController, CSRemoteContentSession, NSError;

@protocol CSRemoteContentSessionHostDelegate <NSObject>
- (void)remoteContentDidUpdateStyle;
- (void)remoteContentSession:(CSRemoteContentSession *)arg1 didInvalidateWithError:(NSError *)arg2;
- (_Bool)remoteContentSession:(CSRemoteContentSession *)arg1 dismissWithReason:(long long)arg2 completion:(void (^)(void))arg3;
- (_Bool)remoteContentSession:(CSRemoteContentSession *)arg1 presentViewController:(CSRemoteContentModalViewController *)arg2;
- (_Bool)shouldActivateRemoteContentSession:(CSRemoteContentSession *)arg1;
@end

