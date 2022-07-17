//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <HearingUI/BCBatteryDeviceObserving-Protocol.h>
#import <HearingUI/HACCContentModule-Protocol.h>

@class BCBatteryDevice, BCBatteryDeviceController, HACCBatteryGroupView, NSNumberFormatter, NSString, UIImageView, UILabel;
@protocol HACCContentModuleDelegate;

@interface HACCStatusView : UIControl <BCBatteryDeviceObserving, HACCContentModule>
{
    NSNumberFormatter *_numberFormatter;	// 8 = 0x8
    unsigned long long module;	// 16 = 0x10
    id <HACCContentModuleDelegate> delegate;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIImageView *_iconView;	// 40 = 0x28
    HACCBatteryGroupView *_batteryView;	// 48 = 0x30
    BCBatteryDevice *_batteryDevice;	// 56 = 0x38
    BCBatteryDeviceController *_batteryController;	// 64 = 0x40
}

+ (id)_backgroundUpdateQueue;	// IMP=0x0000000000005b77
- (void).cxx_destruct;	// IMP=0x00000000000064b7
@property(retain, nonatomic) BCBatteryDeviceController *batteryController; // @synthesize batteryController=_batteryController;
@property(retain) BCBatteryDevice *batteryDevice; // @synthesize batteryDevice=_batteryDevice;
@property(retain, nonatomic) HACCBatteryGroupView *batteryView; // @synthesize batteryView=_batteryView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (id)accessibilityValue;	// IMP=0x0000000000005f90
- (id)accessibilityLabel;	// IMP=0x0000000000005f73
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000005f6b
- (void)buttonTapped:(id)arg1;	// IMP=0x0000000000005f1f
- (_Bool)enabled;	// IMP=0x0000000000005f17
- (id)contentValue;	// IMP=0x0000000000005f0f
- (void)updateValue;	// IMP=0x0000000000005c21
- (id)liveListenImageNameFromBluetoothRoute:(id)arg1;	// IMP=0x00000000000058ea
- (struct CGSize)liveListenImageSize:(id)arg1 forProductID:(id)arg2;	// IMP=0x0000000000005862
- (id)_productIdentifierFromBluetoothRoute:(id)arg1;	// IMP=0x000000000000583f
- (void)updateConstraints;	// IMP=0x00000000000057f3
- (void)connectedDevicesDidChange:(id)arg1;	// IMP=0x00000000000057e1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000004b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
