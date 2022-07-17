//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, MapsDebugCheckmarkRowsGroup, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MapsDebugCheckmarkRow
{
    _Bool _checked;	// 8 = 0x8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    CDUnknownBlockType _controlSelectionAction;	// 24 = 0x18
    CDUnknownBlockType _get;	// 32 = 0x20
    id _value;	// 40 = 0x28
    MapsDebugCheckmarkRowsGroup *_rowsGroup;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x001000000010622c
@property(readonly, nonatomic) _Bool isChecked; // @synthesize isChecked=_checked;
@property(retain, nonatomic) MapsDebugCheckmarkRowsGroup *rowsGroup; // @synthesize rowsGroup=_rowsGroup;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void)setGet:(CDUnknownBlockType)arg1;	// IMP=0x00100000001061d5
- (CDUnknownBlockType)get;	// IMP=0x00100000001061c4
- (CDUnknownBlockType)selectionAction;	// IMP=0x001000000010616f
- (MISSING_TYPE *)updateConfiguration;	// IMP=0x0010000000106093
- (void)updateChecked;	// IMP=0x0010000000105eb5
- (void)update;	// IMP=0x0010000000105e87
- (void)setCurrentCollectionViewCell:(id)arg1;	// IMP=0x0010000000105e46
- (void)invalidate;	// IMP=0x0010000000105d68
- (id)reuseIdentifier;	// IMP=0x0010000000105d56
- (id)init;	// IMP=0x0010000000105c18
- (void)configureCollectionViewCell:(id)arg1;	// IMP=0x0010000000248f48
- (void)configureCell:(id)arg1;	// IMP=0x0010000000248eda
- (void)_fireControlSelectionAction;	// IMP=0x0010000000248dff
- (void)_didTapLabel:(id)arg1;	// IMP=0x0010000000248dbe
- (void)_didSelectAccessory:(id)arg1;	// IMP=0x0010000000248dac
- (id)_createAccessoryView;	// IMP=0x0010000000248c60
- (void)_configureTapGestureOnLabel:(id)arg1;	// IMP=0x0010000000248b82
- (void)_configureCollectionViewCellForCheckedValue:(id)arg1;	// IMP=0x0010000000248797
- (void)_configureCellForCheckedValue:(id)arg1;	// IMP=0x0010000000248556
- (void)setSelectionAction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000248473
@property(readonly, nonatomic) _Bool isDisabled;

@end
