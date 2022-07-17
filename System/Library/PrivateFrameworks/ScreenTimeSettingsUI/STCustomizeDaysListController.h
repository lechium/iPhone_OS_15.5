//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <ScreenTimeSettingsUI/PSDateTimePickerCellDelegate-Protocol.h>

@class NSDictionary, PSSpecifier;
@protocol STCustomizeDaysListControllerDelegate;

__attribute__((visibility("hidden")))
@interface STCustomizeDaysListController : PSListController <PSDateTimePickerCellDelegate>
{
    id <STCustomizeDaysListControllerDelegate> _delegate;	// 192 = 0xc0
    NSDictionary *_timeByDay;	// 200 = 0xc8
    PSSpecifier *_timePickerSpecifier;	// 208 = 0xd0
    PSSpecifier *_selectedDaySpecifier;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000048205
@property(retain, nonatomic) PSSpecifier *selectedDaySpecifier; // @synthesize selectedDaySpecifier=_selectedDaySpecifier;
@property(retain, nonatomic) PSSpecifier *timePickerSpecifier; // @synthesize timePickerSpecifier=_timePickerSpecifier;
@property(copy, nonatomic) NSDictionary *timeByDay; // @synthesize timeByDay=_timeByDay;
@property(nonatomic) __weak id <STCustomizeDaysListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)datePickerForSpecifier:(id)arg1;	// IMP=0x0000000000047f6f
- (void)datePickerChanged:(id)arg1;	// IMP=0x0000000000047d2e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000047c28
- (id)budgetTime:(id)arg1;	// IMP=0x0000000000047b2d
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;	// IMP=0x00000000000477a1
- (id)specifiers;	// IMP=0x0000000000047317
- (id)_localizedDayNames;	// IMP=0x00000000000472bb
- (id)_localizedDayOrder;	// IMP=0x00000000000471ba
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000047101
- (id)init;	// IMP=0x000000000004704a

@end
