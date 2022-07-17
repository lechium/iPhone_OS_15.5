//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface RAPTableCheckmarkRadioSection
{
    NSArray *_values;	// 8 = 0x8
    id _owner;	// 16 = 0x10
    CDUnknownBlockType _configure;	// 24 = 0x18
    CDUnknownBlockType _selection;	// 32 = 0x20
    id _selectedValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000a9bbad
@property(retain, nonatomic) id selectedValue; // @synthesize selectedValue=_selectedValue;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x0010000000a9babd
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000a9b97d
- (long long)rowsCount;	// IMP=0x0010000000a9b960
- (void)configureCell:(id)arg1 forValue:(id)arg2;	// IMP=0x0010000000a9b414
- (id)dequeueCellForValue:(id)arg1;	// IMP=0x0010000000a9b305
- (void)registerReuseIdentifiersForCells;	// IMP=0x0010000000a9b282
- (void)selectedValueDidChange;	// IMP=0x0010000000a9b225
- (Class)defaultCellClass;	// IMP=0x0010000000a9b21d
- (id)initWithOwner:(id)arg1 initialValues:(id)arg2 initialSelectedValue:(id)arg3 configureForValue:(CDUnknownBlockType)arg4 selection:(CDUnknownBlockType)arg5;	// IMP=0x0010000000a9b0e1
- (id)initWithOwner:(id)arg1 configureForValue:(CDUnknownBlockType)arg2 selection:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a9b0b5

@end
