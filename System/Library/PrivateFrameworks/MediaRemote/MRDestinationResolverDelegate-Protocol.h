//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRAVEndpoint, MRDestinationResolver, MROrigin, MRPlayerPath, NSError;

@protocol MRDestinationResolverDelegate <NSObject>

@optional
- (void)destinationResolver:(MRDestinationResolver *)arg1 didFailWithError:(NSError *)arg2;
- (void)destinationResolverDestinationDidInvalidate:(MRDestinationResolver *)arg1;
- (void)destinationResolver:(MRDestinationResolver *)arg1 playerPathDidChange:(MRPlayerPath *)arg2;
- (void)destinationResolver:(MRDestinationResolver *)arg1 originDidChange:(MROrigin *)arg2;
- (void)destinationResolver:(MRDestinationResolver *)arg1 endpointDidChange:(MRAVEndpoint *)arg2;
@end
