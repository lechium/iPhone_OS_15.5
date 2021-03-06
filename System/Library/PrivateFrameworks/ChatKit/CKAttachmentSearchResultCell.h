//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKSearchResultCell-Protocol.h>

@class CKSearchAvatarSupplementryView, NSString, UIDateLabel, UILabel;

@interface CKAttachmentSearchResultCell <CKSearchResultCell>
{
    _Bool _suppressAvatars;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIDateLabel *_dateLabel;	// 24 = 0x18
    NSString *_resultIdentifier;	// 32 = 0x20
    CKSearchAvatarSupplementryView *_avatarView;	// 40 = 0x28
    struct UIEdgeInsets marginInsets;	// 48 = 0x30
}

+ (id)reuseIdentifier;	// IMP=0x00000000002bd72e
- (void).cxx_destruct;	// IMP=0x00000000002be016
@property(retain, nonatomic) CKSearchAvatarSupplementryView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(retain, nonatomic) UIDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool suppressAvatars; // @synthesize suppressAvatars=_suppressAvatars;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002bdef8
- (void)_thumbnailGenerated:(id)arg1;	// IMP=0x00000000002bdd40
- (void)refreshForSearchTextIfNeeded:(id)arg1;	// IMP=0x00000000002bdd3a
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x00000000002bd73b
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000002bd5dd
- (void)prepareForReuse;	// IMP=0x00000000002bd4d2
- (void)layoutSubviews;	// IMP=0x00000000002bc768
@property(readonly, nonatomic) double editModeHorizontalOffset;
@property(readonly, nonatomic) struct CGPoint avatarOffsetRTL;
@property(readonly, nonatomic) struct CGPoint avatarOffsetLTR;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002bc2e0

// Remaining properties
@property(nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) _Bool _ck_editing;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

