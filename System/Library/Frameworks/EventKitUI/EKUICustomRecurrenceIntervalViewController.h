//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/UIPickerViewDataSource-Protocol.h>
#import <EventKitUI/UIPickerViewDelegate-Protocol.h>

@class NSString, UIPickerView;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_pickerView;	// 8 = 0x8
    _Bool _maximumInterval;	// 16 = 0x10
    long long _frequency;	// 24 = 0x18
    long long _interval;	// 32 = 0x20
    CDUnknownBlockType _changeBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015c1e9
@property(copy) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property(nonatomic) _Bool maximumInterval; // @synthesize maximumInterval=_maximumInterval;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000015c0e4
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000015bef7
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000015beb4
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000015bea9
- (id)pickerView;	// IMP=0x000000000015bd38
- (void)viewDidLoad;	// IMP=0x000000000015bcf9
- (void)loadView;	// IMP=0x000000000015bcad
- (id)initWithSelectedInterval:(long long)arg1 frequency:(long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000015bba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
