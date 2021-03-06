//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSFileHandle, NSProgress, UASharedPasteboardInfoWrapper;

@protocol UCStreamCoder <NSObject>
- (void)sendPasteboard:(UASharedPasteboardInfoWrapper *)arg1 withCompletion:(void (^)(id <UCStreamCoder>, unsigned long long, NSError *))arg2;
- (void)cancelReceive;
- (void)receivePasteboardToFile:(NSFileHandle *)arg1 withProgress:(NSProgress *)arg2 infoReceivedHandler:(void (^)(UASharedPasteboardInfoWrapper *, NSError *))arg3 completionHandler:(void (^)(id <UCStreamCoder>, unsigned long long, NSError *))arg4 returnInfoEarly:(_Bool)arg5;
@end

