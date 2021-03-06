//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SAUIDomainObjectPicker;
@protocol SiriUIObjectPickerViewControllerDelegate;

@interface SiriUIObjectPickerViewController : UIViewController
{
    id <SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;	// 8 = 0x8
    SAUIDomainObjectPicker *_picker;	// 16 = 0x10
}

+ (id)pickerControllerWithPicker:(id)arg1;	// IMP=0x000000000002709f
- (void).cxx_destruct;	// IMP=0x00000000000271bf
@property(readonly, nonatomic, getter=_picker) SAUIDomainObjectPicker *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak id <SiriUIObjectPickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void)showPicker:(id)arg1;	// IMP=0x000000000002717b
- (id)initWithPicker:(id)arg1;	// IMP=0x0000000000027109

@end

