//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSOrderedSet, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoSmilesCommentCell : UITableViewCell
{
    _Bool _isVideo;	// 8 = 0x8
    _Bool _usesCompactSeparators;	// 9 = 0x9
    UILabel *_smileContentLabel;	// 16 = 0x10
    NSOrderedSet *_userLikes;	// 24 = 0x18
    UIView *_styledSeparatorView;	// 32 = 0x20
}

+ (double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;	// IMP=0x000000000029731f
+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(_Bool)arg3;	// IMP=0x0000000000296d9a
+ (id)_smileStringForComments:(id)arg1;	// IMP=0x000000000029697e
- (void).cxx_destruct;	// IMP=0x000000000029693c
@property(readonly, retain, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property(nonatomic) _Bool usesCompactSeparators; // @synthesize usesCompactSeparators=_usesCompactSeparators;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSOrderedSet *userLikes; // @synthesize userLikes=_userLikes;
@property(readonly, retain, nonatomic) UILabel *smileContentLabel; // @synthesize smileContentLabel=_smileContentLabel;
- (void)layoutSubviews;	// IMP=0x00000000002965ed
- (void)_updateContent;	// IMP=0x000000000029647f
- (void)prepareForReuse;	// IMP=0x000000000029643c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000296259

@end
