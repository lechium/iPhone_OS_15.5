//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/LPLinkViewDelegate-Protocol.h>

@class CKPinnedConversationRichLinkActivityItem, LPLinkView, NSString;

@interface CKPinnedConversationRichLinkBubble <LPLinkViewDelegate>
{
    double _pillCornerRadius;	// 8 = 0x8
    long long _activityItemViewContentScale;	// 16 = 0x10
    CKPinnedConversationRichLinkActivityItem *_richLinkActivityItem;	// 24 = 0x18
    LPLinkView *_linkView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000051bc7d
@property(retain, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
@property(readonly, nonatomic) CKPinnedConversationRichLinkActivityItem *richLinkActivityItem; // @synthesize richLinkActivityItem=_richLinkActivityItem;
- (void)setActivityItemViewContentScale:(long long)arg1;	// IMP=0x000000000051bc36
- (long long)activityItemViewContentScale;	// IMP=0x000000000051bc25
- (double)pillCornerRadius;	// IMP=0x000000000051bc13
- (void)linkViewNeedsResize:(id)arg1;	// IMP=0x000000000051bbb6
- (long long)contentViewContentMode;	// IMP=0x000000000051bbae
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000051bb80
- (void)_updateLinkMetadata;	// IMP=0x000000000051ba88
- (_Bool)supportsAlignmentWithOriginationSubAvatarFrame;	// IMP=0x000000000051ba80
- (_Bool)supportsActivityItemViewContentScale;	// IMP=0x000000000051ba78
- (void)setActivityItem:(id)arg1;	// IMP=0x000000000051b9e7
- (void)_updatePillCornerRadius;	// IMP=0x000000000051b932
- (double)contentViewHorizontalInsetForPillCornerRadius;	// IMP=0x000000000051b924
- (struct UIEdgeInsets)contentViewPadding;	// IMP=0x000000000051b906
- (id)_linkViewFromActivityItem:(id)arg1;	// IMP=0x000000000051b6f8
- (id)initWithRichLinkActivityItem:(id)arg1;	// IMP=0x000000000051b5ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

