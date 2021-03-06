//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/UIPickerViewDataSource-Protocol.h>
#import <WebKit/UIPickerViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPicker <UIPickerViewDataSource, UIPickerViewDelegate>
{
    struct RetainPtr<WKDataListSuggestionsPickerView> _pickerView;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000000003ff656
- (void).cxx_destruct;	// IMP=0x00000000003ff62f
- (void)invalidate;	// IMP=0x00000000003ff598
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000000003ff502
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000003ff4f0
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000003ff4e5
- (void)showSuggestionsDropdown:(void *)arg1 activationType:(unsigned char)arg2;	// IMP=0x00000000003ff427
- (void)updateWithInformation:(void *)arg1;	// IMP=0x00000000003ff33f
- (id)initWithInformation:(void *)arg1 inView:(id)arg2;	// IMP=0x00000000003ff218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

