//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IXPromisedOutOfBandTransfer;

@protocol IXCoordinatorWithUserDataPromise <NSObject>
@property(readonly, nonatomic) _Bool hasUserDataPromise;
- (IXPromisedOutOfBandTransfer *)userDataPromiseWithError:(id *)arg1;
- (_Bool)setUserDataPromise:(IXPromisedOutOfBandTransfer *)arg1 error:(id *)arg2;
@end
