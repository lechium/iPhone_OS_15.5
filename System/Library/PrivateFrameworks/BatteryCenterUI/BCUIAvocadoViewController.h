//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSString;

@interface BCUIAvocadoViewController : UIViewController
{
    _Bool _batteryDeviceViewsValid;	// 8 = 0x8
    NSMutableArray *_batteryDeviceViews;	// 16 = 0x10
    NSArray *_batteryDevices;	// 24 = 0x18
    double _scaleFactor;	// 32 = 0x20
    NSString *_debugIdentifier;	// 40 = 0x28
}

+ (id)avocadoViewControllerForSize:(long long)arg1;	// IMP=0x000000000000463a
+ (void)initialize;	// IMP=0x0000000000004612
- (void).cxx_destruct;	// IMP=0x00000000000056ad
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) NSArray *batteryDevices; // @synthesize batteryDevices=_batteryDevices;
- (id)_synthesizedDebugIdentifier;	// IMP=0x000000000000558e
- (void)_validateBatteryDeviceViewsIfNecessary;	// IMP=0x0000000000004ac6
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000004abe
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000004a7d
- (void)invalidateBatteryDeviceState;	// IMP=0x0000000000004a35
@property(readonly, copy, nonatomic, getter=_batteryDeviceViews) NSMutableArray *batteryDeviceViews;
- (void)_configureBatteryDeviceView:(id)arg1 withBatteryDevice:(id)arg2 transitionCoordinator:(id)arg3;	// IMP=0x0000000000005806
- (id)_newBatteryDeviceView;	// IMP=0x0000000000005789
@property(readonly, nonatomic, getter=_includeEmptyDevices) _Bool includeEmptyDevices;
@property(readonly, nonatomic, getter=_maximumNumberOfBatteryDeviceViews) unsigned long long maximumNumberOfBatteryDeviceViews;

@end

