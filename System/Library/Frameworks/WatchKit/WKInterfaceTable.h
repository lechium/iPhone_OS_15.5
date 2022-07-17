//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, WKInterfaceController;

@interface WKInterfaceTable
{
    NSDictionary *_rowDescriptions;	// 8 = 0x8
    NSMutableArray *_rowControllers;	// 16 = 0x10
    NSMutableArray *_rowControllerProperties;	// 24 = 0x18
    WKInterfaceController *_controller;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000039d5b
@property(nonatomic) __weak WKInterfaceController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSMutableArray *rowControllerProperties; // @synthesize rowControllerProperties=_rowControllerProperties;
@property(retain, nonatomic) NSMutableArray *rowControllers; // @synthesize rowControllers=_rowControllers;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
- (void)scrollToRowAtIndex:(long long)arg1;	// IMP=0x0000000000039c65
- (void)performSegueForRow:(long long)arg1;	// IMP=0x0000000000039c16
- (void)resequenceRowControllerPropertyIndexes;	// IMP=0x00000000000399dd
- (void)removeRowsAtIndexes:(id)arg1;	// IMP=0x000000000003979e
- (void)insertRowsAtIndexes:(id)arg1 withRowType:(id)arg2;	// IMP=0x00000000000393be
- (id)rowControllerAtIndex:(long long)arg1;	// IMP=0x00000000000392a2
@property(readonly, nonatomic) long long numberOfRows;
- (void)setRowTypes:(id)arg1;	// IMP=0x00000000000390bc
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;	// IMP=0x0000000000038f5d
- (void)_getRowControllers:(id)arg1 rowControllerProperties:(id)arg2 forRowTypes:(id)arg3;	// IMP=0x0000000000038a98
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;	// IMP=0x0000000000038a37

@end
