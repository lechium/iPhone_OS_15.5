//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class MISSING_TYPE;
@protocol HKSHQuickScheduleManagementViewControllerDelegateInternal;

__attribute__((visibility("hidden")))
@interface HKSHQuickScheduleManagementViewControllerInternal : UINavigationController
{
    MISSING_TYPE *sleepStore;	// 8 = 0x8
    MISSING_TYPE *sleepDelegate;	// 16 = 0x10
    MISSING_TYPE *provenanceSource;	// 24 = 0x18
    MISSING_TYPE *sleepScheduleProvider;	// 32 = 0x20
    MISSING_TYPE *gregorianCalendar;	// 0 = 0x0
    MISSING_TYPE *featureAvailability;	// 0 = 0x0
    MISSING_TYPE *appStateObserver;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000099be0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000009a000
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000099f30
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x0000000000099e90
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000099df0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000099db0
- (void)dealloc;	// IMP=0x0000000000099b50
- (id)initWithSleepStore:(id)arg1 provenanceSource:(id)arg2;	// IMP=0x00000000000999a0
@property(nonatomic) __weak id <HKSHQuickScheduleManagementViewControllerDelegateInternal> sleepDelegate; // @synthesize sleepDelegate;

@end
