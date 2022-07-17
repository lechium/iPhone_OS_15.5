//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView, UIPrintPageRangeOption, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIPrintRangeView <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIPrintPageRangeOption *_pageRangePrintOption;	// 8 = 0x8
    UIView *_pickerView;	// 16 = 0x10
    UIPickerView *_fromPicker;	// 24 = 0x18
    UIPickerView *_toPicker;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    NSArray *_savedMultiPageRanges;	// 48 = 0x30
    NSString *_multiPageRangeTitle;	// 56 = 0x38
    double _pickerWidth;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004bbb78
@property(nonatomic) double pickerWidth; // @synthesize pickerWidth=_pickerWidth;
@property(retain, nonatomic) NSString *multiPageRangeTitle; // @synthesize multiPageRangeTitle=_multiPageRangeTitle;
@property(retain, nonatomic) NSArray *savedMultiPageRanges; // @synthesize savedMultiPageRanges=_savedMultiPageRanges;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIPickerView *toPicker; // @synthesize toPicker=_toPicker;
@property(retain, nonatomic) UIPickerView *fromPicker; // @synthesize fromPicker=_fromPicker;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIPrintPageRangeOption *pageRangePrintOption; // @synthesize pageRangePrintOption=_pageRangePrintOption;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000000004bb743
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;	// IMP=0x00000000004bb626
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000000004bb618
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000004bb5d4
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000004bb5c9
- (void)reloadTableView;	// IMP=0x00000000004bb548
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004bb123
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004baa86
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000004baa74
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000004baa66
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000004ba9ff
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000004ba9f4
- (void)updatePageRangeView;	// IMP=0x00000000004ba61d
- (void)loadViews;	// IMP=0x00000000004b98fa
- (id)initWithFrame:(struct CGRect)arg1 pageRangePrintOption:(id)arg2;	// IMP=0x00000000004b986b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
