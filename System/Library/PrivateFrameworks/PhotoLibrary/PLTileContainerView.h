//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController *_photoTileController;	// 8 = 0x8
}

- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000001d4c9
- (void)clearBackReference;	// IMP=0x000000000001d4b4
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000001d461
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001d3ff
- (id)initWithFrame:(struct CGRect)arg1 photoTileController:(id)arg2;	// IMP=0x000000000001d379

@end

