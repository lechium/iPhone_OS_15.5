//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFComposeActivityHandoffOperation, NSData, NSError;

@protocol MFComposeActivityHandoffOperationDelegate <NSObject>
- (void)activityHandoffOperation:(MFComposeActivityHandoffOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)activityHandoffOperation:(MFComposeActivityHandoffOperation *)arg1 didFinishSendingDataWithResult:(long long)arg2;
- (void)activityHandoffOperation:(MFComposeActivityHandoffOperation *)arg1 didFinishReceivingData:(NSData *)arg2;
- (void)activityHandoffOperationReceivedBytes:(MFComposeActivityHandoffOperation *)arg1;
@end

