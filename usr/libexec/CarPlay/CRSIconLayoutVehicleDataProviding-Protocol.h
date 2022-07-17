//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRSIconLayoutState, NSString;

@protocol CRSIconLayoutVehicleDataProviding <NSObject>
- (void)getApplicationIconInformationForBundleID:(NSString *)arg1 completion:(void (^)(CRSApplicationIcon *, NSError *))arg2;
- (void)resetIconState;
- (void)setIconState:(CRSIconLayoutState *)arg1;
- (void)getIconStateWithCompletion:(void (^)(CRSIconLayoutState *, NSError *))arg1;
@end
