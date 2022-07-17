//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/BNPresentableIdentifying-Protocol.h>
#import <CarPlaySupport/BNPresentableObserving-Protocol.h>

@class NSString, UIViewController;
@protocol BNPanGestureProxy, BNPresentableContext;

@protocol BNPresentable <BNPresentableIdentifying, BNPresentableObserving>
@property(readonly, nonatomic) UIViewController *viewController;

@optional
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
- (NSString *)presentableDescription;
- (void)draggingDidBeginWithGestureProxy:(id <BNPanGestureProxy>)arg1;
@end
