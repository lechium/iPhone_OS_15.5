//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteUI/RUIWebContainerViewDelegate-Protocol.h>
#import <RemoteUI/UIPickerViewDelegate-Protocol.h>
#import <RemoteUI/UITextFieldDelegate-Protocol.h>

@class NSData, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSString, RUIDetailButtonElement, RUIPage, RUITableView, RUITableViewSection, RemoteUITableViewCell, UIControl, UISwitch, UIView;
@protocol RUITableViewRowDelegate, RUITextFieldChangeObserver;

@interface RUITableViewRow <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate>
{
    RemoteUITableViewCell *_tableCell;	// 8 = 0x8
    NSMutableArray *_selectOptions;	// 16 = 0x10
    long long _selectedRow;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSDate *_dateMax;	// 40 = 0x28
    NSDate *_dateMin;	// 48 = 0x30
    UISwitch *_switchControl;	// 56 = 0x38
    _Bool _switchValue;	// 64 = 0x40
    _Bool _rowInvalid;	// 65 = 0x41
    NSDictionary *_deleteAction;	// 72 = 0x48
    NSData *_data;	// 80 = 0x50
    float _cachedHeight;	// 88 = 0x58
    NSDateFormatter *_datePickerFormatter;	// 96 = 0x60
    _Bool _configured;	// 104 = 0x68
    _Bool _selected;	// 105 = 0x69
    _Bool _focused;	// 106 = 0x6a
    _Bool _showingProgressIndicator;	// 107 = 0x6b
    id <RUITableViewRowDelegate> _delegate;	// 112 = 0x70
    long long _datePickerMode;	// 120 = 0x78
    UIView *_pickerView;	// 128 = 0x80
    double _height;	// 136 = 0x88
    id <RUITextFieldChangeObserver> _textFieldChangeObserver;	// 144 = 0x90
    RUIPage *_linkedPage;	// 152 = 0x98
    RUIDetailButtonElement *_detailButton;	// 160 = 0xa0
    long long _alignment;	// 168 = 0xa8
    RUITableViewSection *_section;	// 176 = 0xb0
    RUITableView *_tableView;	// 184 = 0xb8
}

+ (void)resetLocale;	// IMP=0x0000000000063237
+ (id)_formatterForYearAndMonth;	// IMP=0x0000000000062e64
+ (id)_formatterForMonthAndDay;	// IMP=0x0000000000062d00
+ (id)_formatterForShortDate;	// IMP=0x0000000000062bb0
+ (id)_formatterForDateYMD;	// IMP=0x0000000000062aa9
+ (id)_timeZoneAdjustedDateFromDate:(id)arg1;	// IMP=0x0000000000062a1c
+ (void)initialize;	// IMP=0x0000000000062999
- (void).cxx_destruct;	// IMP=0x000000000006c4da
@property(nonatomic) __weak RUITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak RUITableViewSection *section; // @synthesize section=_section;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) RUIDetailButtonElement *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) __weak RUIPage *linkedPage; // @synthesize linkedPage=_linkedPage;
@property(nonatomic) __weak id <RUITextFieldChangeObserver> textFieldChangeObserver; // @synthesize textFieldChangeObserver=_textFieldChangeObserver;
@property(nonatomic, getter=isShowingProgressIndicator) _Bool showingProgressIndicator; // @synthesize showingProgressIndicator=_showingProgressIndicator;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(readonly, nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDate *dateMax; // @synthesize dateMax=_dateMax;
@property(retain, nonatomic) NSDate *dateMin; // @synthesize dateMin=_dateMin;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(nonatomic) _Bool rowInvalid; // @synthesize rowInvalid=_rowInvalid;
@property(nonatomic) __weak id <RUITableViewRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setBackgroundColor;	// IMP=0x000000000006c1ec
- (void)_drawCustomImage:(_Bool)arg1;	// IMP=0x000000000006b899
- (id)_checkmarkAccessoryViewWithSelected:(_Bool)arg1;	// IMP=0x000000000006b70f
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;	// IMP=0x000000000006b619
- (void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b4ee
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000006b1a4
- (void)setEditableTextFieldValue:(id)arg1;	// IMP=0x000000000006afd9
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000006af9a
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000006af8f
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000006af72
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000006aeed
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000006aded
@property(readonly, nonatomic) _Bool indentWhileEditing;
- (_Bool)rowSupportsLoadingIndicator;	// IMP=0x000000000006acdd
- (void)switchCanceled;	// IMP=0x000000000006aca9
- (void)_switchFlipped:(id)arg1;	// IMP=0x000000000006ac1d
- (void)clearCachedHeight;	// IMP=0x000000000006ac09
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;	// IMP=0x000000000006a2a7
- (void)_datePickerChanged:(id)arg1;	// IMP=0x000000000006a192
- (void)stopActivityIndicator;	// IMP=0x000000000006a0a0
- (void)startActivityIndicator;	// IMP=0x000000000006a064
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000069ef1
@property(readonly, nonatomic) NSString *copyText;
@property(readonly, nonatomic) _Bool isCopyable;
- (id)selectOptions;	// IMP=0x0000000000069c84
- (void)populatePostbackDictionary:(id)arg1;	// IMP=0x00000000000696f3
- (_Bool)supportsAutomaticSelection;	// IMP=0x0000000000069658
- (void)setValueFromString:(id)arg1;	// IMP=0x0000000000069641
- (void)setValueFromString:(id)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000069189
- (_Bool)setSelectPageRowValue:(id)arg1;	// IMP=0x0000000000068c69
- (void)setSelectRowValue:(id)arg1;	// IMP=0x0000000000068a3b
- (void)setSelectedRowTextColor;	// IMP=0x0000000000068899
- (void)setDetailAndPlaceholderText;	// IMP=0x00000000000686cc
- (void)_doneButtonTapped;	// IMP=0x0000000000068684
- (void)_addDoneButtonToTextField:(id)arg1;	// IMP=0x0000000000068544
- (id)tableCell;	// IMP=0x0000000000065df0
- (_Bool)loadAccessoryImage;	// IMP=0x0000000000065c40
- (void)accessoryImageLoaded;	// IMP=0x0000000000065a95
@property(readonly, nonatomic) UIControl *control;
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x000000000006594e
- (void)setImage:(id)arg1;	// IMP=0x00000000000658b6
- (long long)tableCellStyle;	// IMP=0x0000000000065624
- (Class)tableCellClass;	// IMP=0x0000000000065248
- (_Bool)wantsInlineActivityIndicator;	// IMP=0x0000000000065069
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000064825
- (void)_updateContentForDisabledState;	// IMP=0x00000000000642a3
- (void)_updateTextColors;	// IMP=0x0000000000063942
- (id)radioGroupSelectedColor;	// IMP=0x000000000006382b
- (id)textColorForAttributeName:(id)arg1;	// IMP=0x000000000006377b
- (id)textColorForAttributeName:(id)arg1 defaultColorString:(id)arg2;	// IMP=0x0000000000063688
- (id)dateFormatterCalendarIdentifier;	// IMP=0x00000000000635e6
- (void)setAttributes:(id)arg1;	// IMP=0x000000000006328f
- (id)_datePickerFormatter;	// IMP=0x0000000000063110
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000062fc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
