//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/UIPickerViewDataSource-Protocol.h>
#import <ProxCardKit/UIPickerViewDelegate-Protocol.h>

@class NSString, PRXPickerContentView;

@interface PRXPickerContentViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
}

+ (Class)contentViewClass;	// IMP=0x000000000000ffba
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x0000000000010236
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000000101e9
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000000101de
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000100b5
- (void)viewDidLoad;	// IMP=0x000000000000ffcb

// Remaining properties
@property(readonly, nonatomic) PRXPickerContentView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

