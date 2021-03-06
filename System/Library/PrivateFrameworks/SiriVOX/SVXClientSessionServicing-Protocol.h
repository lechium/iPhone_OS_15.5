//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@protocol SVXClientSessionServiceDelegate;

@protocol SVXClientSessionServicing <NSObject>
@property(nonatomic) __weak id <SVXClientSessionServiceDelegate> delegate;
@property(readonly, nonatomic) long long currentState;
- (void)fetchAlarmAndTimerFiringContextWithCompletion:(void (^)(SVXAlarmAndTimerFiringContext *))arg1;
- (void)fetchStateWithCompletion:(void (^)(long long))arg1;
@end

