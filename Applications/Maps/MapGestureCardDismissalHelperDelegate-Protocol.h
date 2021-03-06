//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MapGestureCardDismissalHelper;
@protocol DragGestureTracking, UICoordinateSpace;

@protocol MapGestureCardDismissalHelperDelegate <NSObject>
- (void)cardDismissalHelper:(MapGestureCardDismissalHelper *)arg1 requestedDismissalWithVelocity:(double)arg2;
- (double)dismissalRectTopEdgeForCardDismissalHelper:(MapGestureCardDismissalHelper *)arg1 coordinateSpace:(id <UICoordinateSpace>)arg2;
- (_Bool)cardDismissalHelperShouldObserveGestures:(MapGestureCardDismissalHelper *)arg1;

@optional
- (id <DragGestureTracking>)dragGestureTrackerForCardDismissalHelper:(MapGestureCardDismissalHelper *)arg1;
@end

