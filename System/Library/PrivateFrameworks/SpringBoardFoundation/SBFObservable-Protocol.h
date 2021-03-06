//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@protocol SBFCancelable, SBFObservable, SBFObserver, SBFScheduler;

@protocol SBFObservable <NSObject>
- (id <SBFObservable>)generate:(id (^)(void))arg1;
- (id <SBFObservable>)map:(id (^)(id))arg1;
- (id <SBFObservable>)throttle:(double)arg1 onScheduler:(id <SBFScheduler>)arg2;
- (id <SBFObservable>)observeOn:(id <SBFScheduler>)arg1;
- (id <SBFObservable>)subscribeOn:(id <SBFScheduler>)arg1;
- (id <SBFCancelable>)subscribeWithResultBlock:(void (^)(id))arg1 completionBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (id <SBFCancelable>)subscribeWithResultBlock:(void (^)(id))arg1;
- (id <SBFCancelable>)subscribe:(id <SBFObserver>)arg1;
@end

