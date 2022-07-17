//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SBIconListModelRepairUtilities : NSObject
{
}

+ (unsigned long long)_maxGridCellIndexWithIconCount:(unsigned long long)arg1 gridCellInfo:(id)arg2;	// IMP=0x000000000025b593
+ (id)_firstIconOfSizeClass:(unsigned long long)arg1 withIcons:(id)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000025b500
+ (_Bool)_findAndRepairSingleIconGaps:(id)arg1 gridCellInfo:(id)arg2;	// IMP=0x000000000025b377
+ (_Bool)_findAndRepairWidgetSizedGaps:(id)arg1 widgetGridSizeClass:(unsigned long long)arg2 widgetGridSize:(struct SBHIconGridSize)arg3 iconLayoutBehavior:(unsigned long long)arg4 gridCellInfo:(id)arg5;	// IMP=0x000000000025aea0
+ (_Bool)_findAndRepairEmptyRows:(id)arg1 avoidingIcons:(id)arg2 gridCellInfo:(id)arg3;	// IMP=0x000000000025ab93
+ (id)repairModelByEliminatingGapsInIcons:(id)arg1 avoidingIcons:(id)arg2 gridSize:(struct SBHIconGridSize)arg3 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes)arg4 iconLayoutBehavior:(unsigned long long)arg5;	// IMP=0x000000000025a74f

@end
