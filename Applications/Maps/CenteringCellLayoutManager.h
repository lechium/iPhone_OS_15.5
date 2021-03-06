//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCellLayoutManager.h>

__attribute__((visibility("hidden")))
@interface CenteringCellLayoutManager : UITableViewCellLayoutManager
{
    double _maximumCellContentWidth;	// 8 = 0x8
    struct UIEdgeInsets _minimumHorizontalMargins;	// 16 = 0x10
}

+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;	// IMP=0x00400000004935dd
@property(nonatomic) struct UIEdgeInsets minimumHorizontalMargins; // @synthesize minimumHorizontalMargins=_minimumHorizontalMargins;
@property(nonatomic) double maximumCellContentWidth; // @synthesize maximumCellContentWidth=_maximumCellContentWidth;
- (struct UIEdgeInsets)_marginForRowWith:(double)arg1;	// IMP=0x0010000000493f0d
- (struct CGRect)_offsetAccessoryViewFrame:(struct CGRect)arg1 forCell:(id)arg2;	// IMP=0x0010000000493d70
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;	// IMP=0x0010000000493cc8
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;	// IMP=0x0010000000493c20
- (struct CGRect)_adjustedContentViewFrame:(struct CGRect)arg1 cell:(id)arg2 rowWidth:(double)arg3 accessoryViewFrame:(struct CGRect)arg4;	// IMP=0x00100000004939f8
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;	// IMP=0x00100000004938c6
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;	// IMP=0x0010000000493794
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3;	// IMP=0x001000000049366f
- (id)initWithTableViewCellStyle:(long long)arg1;	// IMP=0x001000000049360c

@end

