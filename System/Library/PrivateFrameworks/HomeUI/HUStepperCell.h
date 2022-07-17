//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUStepperCellProtocol-Protocol.h>

@class HFItem, NSNumber, NSString, UILabel, UIStepper;
@protocol HUResizableCellDelegate, HUStepperCellDelegate;

@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol>
{
    _Bool _disabled;	// 8 = 0x8
    HFItem *_item;	// 16 = 0x10
    NSNumber *_stepperValue;	// 24 = 0x18
    NSNumber *_minimumValue;	// 32 = 0x20
    NSNumber *_maximumValue;	// 40 = 0x28
    NSNumber *_stepValue;	// 48 = 0x30
    id <HUStepperCellDelegate> _stepperCellDelegate;	// 56 = 0x38
    UIStepper *_stepper;	// 64 = 0x40
    UILabel *_valueLabel;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002ab377
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate; // @synthesize stepperCellDelegate=_stepperCellDelegate;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(copy, nonatomic) NSNumber *stepperValue; // @synthesize stepperValue=_stepperValue;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (id)_valueDescription;	// IMP=0x00000000002ab1ec
- (void)_toggleValueChange:(id)arg1;	// IMP=0x00000000002ab13f
- (void)_stepperValueDidChange:(id)arg1;	// IMP=0x00000000002ab03b
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000002aab87
- (void)prepareForReuse;	// IMP=0x00000000002aa91c
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002aa916
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002aa910
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002aa1da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
