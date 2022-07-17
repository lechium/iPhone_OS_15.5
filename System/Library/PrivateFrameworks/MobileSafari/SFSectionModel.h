//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFBannerModel, UIMenu;

@interface SFSectionModel : NSObject
{
    CDUnknownBlockType _configurationProvider;	// 8 = 0x8
    id _identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSArray *_actions;	// 32 = 0x20
    SFBannerModel *_banner;	// 40 = 0x28
    NSArray *_itemIdentifiers;	// 48 = 0x30
    long long _numberOfRowsVisibleWhenCollapsed;	// 56 = 0x38
    long long _numberOfRowsVisibleWhenCollapsedInCompactWidth;	// 64 = 0x40
    UIMenu *_titleMenu;	// 72 = 0x48
    CDUnknownBlockType _contextMenuProvider;	// 80 = 0x50
    CDUnknownBlockType _contextMenuCommitHandler;	// 88 = 0x58
    CDUnknownBlockType _contextMenuDismissHandler;	// 96 = 0x60
    CDUnknownBlockType _dragItemProvider;	// 104 = 0x68
    CDUnknownBlockType _dropOperationProvider;	// 112 = 0x70
    CDUnknownBlockType _dropHandler;	// 120 = 0x78
    long long _itemType;	// 128 = 0x80
    SFBannerModel *_contentBanner;	// 136 = 0x88
}

+ (id)siteRowSectionWithIdentifier:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000080471
+ (id)siteRowSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(CDUnknownBlockType)arg6;	// IMP=0x000000000008037c
+ (id)richLinkSectionWithIdentifier:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000080293
+ (id)richLinkSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(CDUnknownBlockType)arg6;	// IMP=0x000000000008019e
+ (id)siteCardSectionWithIdentifier:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(CDUnknownBlockType)arg5;	// IMP=0x00000000000800b5
+ (id)siteCardSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(CDUnknownBlockType)arg6;	// IMP=0x000000000007ffb5
+ (id)siteIconSectionWithIdentifier:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(CDUnknownBlockType)arg5;	// IMP=0x000000000007fecc
+ (id)siteIconSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(CDUnknownBlockType)arg6;	// IMP=0x000000000007fdd7
+ (id)footerSectionWithIdentifier:(id)arg1 action:(id)arg2;	// IMP=0x000000000007fcbc
+ (id)bannerSectionWithIdentifier:(id)arg1 banner:(id)arg2;	// IMP=0x000000000007fc2b
+ (id)bannerSectionWithIdentifier:(id)arg1 title:(id)arg2 banner:(id)arg3;	// IMP=0x000000000007fb14
+ (id)toggleExpandedAction;	// IMP=0x000000000007fade
- (void).cxx_destruct;	// IMP=0x0000000000080cef
@property(readonly, nonatomic) SFBannerModel *contentBanner; // @synthesize contentBanner=_contentBanner;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) CDUnknownBlockType dropHandler; // @synthesize dropHandler=_dropHandler;
@property(copy, nonatomic) CDUnknownBlockType dropOperationProvider; // @synthesize dropOperationProvider=_dropOperationProvider;
@property(copy, nonatomic) CDUnknownBlockType dragItemProvider; // @synthesize dragItemProvider=_dragItemProvider;
@property(copy, nonatomic) CDUnknownBlockType contextMenuDismissHandler; // @synthesize contextMenuDismissHandler=_contextMenuDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType contextMenuCommitHandler; // @synthesize contextMenuCommitHandler=_contextMenuCommitHandler;
@property(copy, nonatomic) CDUnknownBlockType contextMenuProvider; // @synthesize contextMenuProvider=_contextMenuProvider;
@property(copy, nonatomic) UIMenu *titleMenu; // @synthesize titleMenu=_titleMenu;
@property(nonatomic) long long numberOfRowsVisibleWhenCollapsedInCompactWidth; // @synthesize numberOfRowsVisibleWhenCollapsedInCompactWidth=_numberOfRowsVisibleWhenCollapsedInCompactWidth;
@property(nonatomic) long long numberOfRowsVisibleWhenCollapsed; // @synthesize numberOfRowsVisibleWhenCollapsed=_numberOfRowsVisibleWhenCollapsed;
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(readonly, nonatomic) SFBannerModel *banner; // @synthesize banner=_banner;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CDUnknownBlockType siteRowConfigurationProvider;
@property(readonly, nonatomic) CDUnknownBlockType richLinkConfigurationProvider;
@property(readonly, nonatomic) CDUnknownBlockType siteCardConfigurationProvider;
@property(readonly, nonatomic) CDUnknownBlockType siteIconConfigurationProvider;
- (unsigned long long)hash;	// IMP=0x0000000000080b3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080aaa
- (id)description;	// IMP=0x0000000000080812
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 itemType:(long long)arg5 itemIdentifiers:(id)arg6 configurationProvider:(CDUnknownBlockType)arg7;	// IMP=0x000000000008055a

@end
