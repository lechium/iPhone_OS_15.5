//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BNPresentableObserving-Protocol.h>

@class NCNotificationPresentableViewController;

@protocol NCNotificationPresentableViewControllerDelegate <BNPresentableObserving>
- (void)notificationPresentableViewController:(NCNotificationPresentableViewController *)arg1 presentationSize:(out struct CGSize *)arg2 containerSize:(out struct CGSize *)arg3;
- (_Bool)notificationPresentableViewControllerShouldPresentLongLook:(NCNotificationPresentableViewController *)arg1;
@end

