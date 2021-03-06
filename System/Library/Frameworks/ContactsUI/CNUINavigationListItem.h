//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUINavigationListItemContent-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol CNUINavigationListItemContent;

@interface CNUINavigationListItem : NSObject <CNUINavigationListItemContent>
{
    id <CNUINavigationListItemContent> _content;	// 8 = 0x8
    CNUINavigationListItem *_parent;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_subtitle;	// 48 = 0x30
    CNUINavigationListItem *_defaultItem;	// 56 = 0x38
    NSArray *_items;	// 64 = 0x40
}

+ (id)itemForActionItem:(id)arg1 isGrouped:(_Bool)arg2;	// IMP=0x0000000000112217
+ (id)navigationListItemsForUserActionListModel:(id)arg1;	// IMP=0x0000000000111c83
+ (id)favoritesNavigationListItemsForUserActionListModel:(id)arg1;	// IMP=0x0000000000111bb1
+ (id)faceTimeNavigationListItemsForUserActionListModel:(id)arg1;	// IMP=0x00000000001118ac
+ (id)localizedLabelForActionItem:(id)arg1 usingPropertyLabel:(_Bool)arg2;	// IMP=0x000000000011151c
+ (id)navigationListItemForContactProperty:(id)arg1;	// IMP=0x0000000000112351
- (void).cxx_destruct;	// IMP=0x000000000019f24a
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak CNUINavigationListItem *defaultItem; // @synthesize defaultItem=_defaultItem;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak CNUINavigationListItem *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) id <CNUINavigationListItemContent> content; // @synthesize content=_content;
- (id)initWithTitle:(id)arg1 image:(id)arg2;	// IMP=0x000000000019f09b
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000019f087
- (id)init;	// IMP=0x000000000019f06e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

