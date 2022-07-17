//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MapsSuggestionsShortcut, RAPPersonalPlaceRefinementCoordinator, UIViewController;

@protocol RAPPersonalPlaceRefinementCoordinatorDelegate <NSObject>

@optional
- (void)refinementCoordinator:(RAPPersonalPlaceRefinementCoordinator *)arg1 presentViewController:(UIViewController *)arg2;
- (void)refinementCoordinator:(RAPPersonalPlaceRefinementCoordinator *)arg1 finishedRefiningCoordinate:(struct CLLocationCoordinate2D)arg2 withShortcut:(MapsSuggestionsShortcut *)arg3;
- (void)refinementCoordinatorRequestsChangeAddress:(RAPPersonalPlaceRefinementCoordinator *)arg1 withShortcut:(MapsSuggestionsShortcut *)arg2;
- (void)refinementCoordinatorDidComplete:(RAPPersonalPlaceRefinementCoordinator *)arg1;
@end
