//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, NSString, SKUIRedeemIdManager;

@protocol SKUIRedeemIdManagerDelegate <NSObject>
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didReturnText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didChangeToText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 movedToRowAtIndexPath:(NSIndexPath *)arg2;
@end

