//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RAPQuestion, RAPReport;
@protocol RAPPlace;

@protocol RAPQuestionAcceptingAlternatePlace <NSObject>
- (id)_initWithReport:(RAPReport *)arg1 parentQuestion:(RAPQuestion *)arg2 place:(id <RAPPlace>)arg3;
@end

