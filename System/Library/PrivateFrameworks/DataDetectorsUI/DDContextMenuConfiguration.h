//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIContextMenuConfiguration.h>

@class NSURL;

@interface DDContextMenuConfiguration : UIContextMenuConfiguration
{
    _Bool prefersActionMenuStyle;	// 8 = 0x8
    _Bool expandPreviewOnInteraction;	// 9 = 0x9
    CDUnknownBlockType interactionViewControllerProvider;	// 16 = 0x10
    NSURL *interactionURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000396fd
@property(retain, nonatomic) NSURL *interactionURL; // @synthesize interactionURL;
@property(copy, nonatomic) CDUnknownBlockType interactionViewControllerProvider; // @synthesize interactionViewControllerProvider;
@property(nonatomic) _Bool expandPreviewOnInteraction; // @synthesize expandPreviewOnInteraction;
@property(nonatomic) _Bool prefersActionMenuStyle; // @synthesize prefersActionMenuStyle;
- (_Bool)performPreviewActionForMenuWithAnimator:(id)arg1;	// IMP=0x00000000000392ec

@end
