//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXDefaultHomeScreenItemTiler-Protocol.h>

@class ATXDefaultHomeScreenItemTilerHelper, ATXDefaultWidgetStack, NSArray, NSMutableArray, NSString;

@interface ATXDefaultHomeScreenItemTilerGridSize3 : NSObject <ATXDefaultHomeScreenItemTiler>
{
    ATXDefaultWidgetStack *_defaultStack;	// 8 = 0x8
    NSMutableArray *_defaultWidgetsSmall;	// 16 = 0x10
    NSMutableArray *_defaultWidgetsMedium;	// 24 = 0x18
    NSMutableArray *_defaultWidgetsLarge;	// 32 = 0x20
    unsigned long long _widgetFamilyMask;	// 40 = 0x28
    ATXDefaultHomeScreenItemTilerHelper *_tilerHelper;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000094e4c
- (_Bool)_addMediumRow:(id)arg1;	// IMP=0x0000000000094d6d
- (_Bool)_addSmallRow:(id)arg1;	// IMP=0x0000000000094c01
- (_Bool)_addRow:(id)arg1 rowType:(unsigned long long)arg2;	// IMP=0x0000000000094b9f
- (_Bool)_addRow:(id)arg1 rowSizePreference:(unsigned long long)arg2 allowAlternateRowSizeAsBackup:(_Bool)arg3;	// IMP=0x0000000000094af4
- (_Bool)_addFirstRow:(id)arg1;	// IMP=0x00000000000948ca
@property(readonly, nonatomic) NSArray *tiledHomeScreenItems;
- (id)initWithDefaultStack:(id)arg1 defaultWidgetsSmall:(id)arg2 defaultWidgetsMedium:(id)arg3 defaultWidgetsLarge:(id)arg4 defaultWidgetsExtraLarge:(id)arg5 widgetFamilyMask:(unsigned long long)arg6;	// IMP=0x0000000000094606

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
