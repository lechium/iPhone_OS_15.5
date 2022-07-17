//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol NavdDoomDestinationsUpdater <NSObject>
- (void)stopUpdating;
- (NSArray *)currentDestinations;
- (_Bool)updateDestinationsForDuration:(double)arg1 completionHandler:(void (^)(_Bool, NSArray *))arg2;
@end
