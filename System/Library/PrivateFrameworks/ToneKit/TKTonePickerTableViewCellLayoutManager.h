//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1
{
    double _minimumTextIndentation;	// 8 = 0x8
}

@property(nonatomic) double minimumTextIndentation; // @synthesize minimumTextIndentation=_minimumTextIndentation;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(_Bool)arg3;	// IMP=0x0000000000026b1f
- (struct CGRect)_adjustedTextFrameWithOriginalTextFrame:(struct CGRect)arg1 forCell:(id)arg2;	// IMP=0x0000000000026965

@end
