//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SDAirDropAlertManagerDelegate <NSObject>
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(NSString *)arg2 withFailureReason:(unsigned long long)arg3;
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(NSString *)arg2 withDestinationURL:(NSURL *)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;
@end

