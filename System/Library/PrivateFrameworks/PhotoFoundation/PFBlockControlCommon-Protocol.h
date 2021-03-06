//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/NSObject-Protocol.h>

@class PFDispatchQueue;

@protocol PFBlockControlCommon <NSObject>
- (_Bool)blockWasCanceled;
- (_Bool)blockHasFinished;
- (_Bool)blockHasStarted;
- (void)waitForBlock;
- (void)notifyOnQueue:(PFDispatchQueue *)arg1 whenFinished:(void (^)(void))arg2;
@end

