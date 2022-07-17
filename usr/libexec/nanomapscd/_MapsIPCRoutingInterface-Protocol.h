//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IPCLoadDirectionsMessage, IPCStartNavigationMessage;

@protocol _MapsIPCRoutingInterface <NSObject>
- (_Bool)dismissNavigationSafetyAlert;
- (void)endNavigationWithCompletion:(void (^)(IPCNavigationActionReply *))arg1;
- (void)startPreparedNavigation:(IPCStartNavigationMessage *)arg1 completion:(void (^)(IPCNavigationActionReply *))arg2;
- (void)loadDirections:(IPCLoadDirectionsMessage *)arg1 completion:(void (^)(IPCLoadDirectionsReply *))arg2;
@end
