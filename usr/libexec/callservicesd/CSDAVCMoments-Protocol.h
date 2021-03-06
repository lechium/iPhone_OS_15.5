//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, OS_dispatch_queue;
@protocol CSDAVCMomentsDelegate, CSDAVCMomentsRequest;

@protocol CSDAVCMoments <NSObject>
- (id <CSDAVCMomentsRequest>)newRequestWithMediaType:(unsigned char)arg1 mode:(unsigned char)arg2 requesteeID:(NSString *)arg3;
- (id)initWithStreamToken:(long long)arg1 requesterID:(NSString *)arg2 delegate:(id <CSDAVCMomentsDelegate>)arg3 dispatchQueue:(OS_dispatch_queue *)arg4;
@property(nonatomic, readonly) int pendingRequestCount;
@property(nonatomic, readonly) int activeRequestCount;
@property(nonatomic, readonly) unsigned int capabilities;
@property(nonatomic, readonly) long long streamToken;
@property(nonatomic, readonly) id <CSDAVCMomentsDelegate> delegate;
@end

