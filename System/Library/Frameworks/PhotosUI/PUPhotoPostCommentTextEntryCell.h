//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class PUPhotoCommentEntryView;

__attribute__((visibility("hidden")))
@interface PUPhotoPostCommentTextEntryCell : UITableViewCell
{
    PUPhotoCommentEntryView *_textEntryView;	// 8 = 0x8
}

+ (void)preferredContentSizeDidChange;	// IMP=0x000000000029aa7b
+ (double)heightForWidth:(double)arg1;	// IMP=0x000000000029a861
- (void).cxx_destruct;	// IMP=0x00000000002996d7
@property(retain, nonatomic) PUPhotoCommentEntryView *textEntryView; // @synthesize textEntryView=_textEntryView;
- (void)layoutSubviews;	// IMP=0x00000000002995df
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000299501

@end
