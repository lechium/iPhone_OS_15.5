//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UILabel, UIPickerView;

__attribute__((visibility("hidden")))
@interface B238SetupSiriLanguageViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIPickerView *_pickerView;	// 48 = 0x30
    NSArray *_languages;	// 56 = 0x38
    NSString *_preferredLanguage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000017acde
@property(copy, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x001000000017ac90
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x001000000017ac2c
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x001000000017ac0f
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x001000000017ac04
- (void)handleDontUseSiriButton:(id)arg1;	// IMP=0x001000000017ab49
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000017aac9
- (void)handleChooseButton:(id)arg1;	// IMP=0x001000000017a995
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000017a911
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000017a80d

@end

