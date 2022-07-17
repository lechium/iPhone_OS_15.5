//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFont, UIFontDescriptor;

@interface PLCommentsFontCache : NSObject
{
    UIFontDescriptor *__shortCaptionFontDescriptor;	// 8 = 0x8
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;	// 16 = 0x10
    UIFontDescriptor *__shortSubheadlineFontDescriptor;	// 24 = 0x18
    UIFontDescriptor *__bodyFontDescriptor;	// 32 = 0x20
    UIFontDescriptor *__emphasizedBodyFontDescriptor;	// 40 = 0x28
    UIFontDescriptor *__shortBodyFontDescriptor;	// 48 = 0x30
}

+ (id)sharedCache;	// IMP=0x0000000000005dd3
@property(readonly, nonatomic) UIFont *commentSendButtonFont;
@property(readonly, nonatomic) UIFont *commentEntryFont;
@property(readonly, nonatomic) UIFont *commentAttributionNameFont;
@property(readonly, nonatomic) UIFont *commentAttributionDateFont;
@property(readonly, nonatomic) UIFont *commentTextFont;
@property(readonly, nonatomic) UIFont *likeFont;
@property(readonly, nonatomic) UIFont *youLikeFont;
- (id)_shortBodyFontDescriptor;	// IMP=0x0000000000005c03
- (id)_emphasizedBodyFontDescriptor;	// IMP=0x0000000000005bbb
- (id)_bodyFontDescriptor;	// IMP=0x0000000000005b72
- (id)_shortSubheadlineFontDescriptor;	// IMP=0x0000000000005b26
- (id)_emphasizedShortCaptionFontDescriptor;	// IMP=0x0000000000005ade
- (id)_shortCaptionFontDescriptor;	// IMP=0x0000000000005a95
- (void)_invalidateCache;	// IMP=0x0000000000005a31
- (void)_contentSizesDidChange:(id)arg1;	// IMP=0x00000000000059e8
- (void)dealloc;	// IMP=0x000000000000595a
- (id)init;	// IMP=0x00000000000058de

@end
