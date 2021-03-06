//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

@interface CKMessageStatusChatItem
{
    _Bool _buttonSizeLoaded;	// 8 = 0x8
    _Bool _labelSizeLoaded;	// 9 = 0x9
    NSAttributedString *_transcriptButtonText;	// 16 = 0x10
    struct CGSize _buttonSize;	// 24 = 0x18
    struct CGSize _labelSize;	// 40 = 0x28
    struct UIEdgeInsets _buttonTextAlignmentInsets;	// 56 = 0x38
    struct UIEdgeInsets _labelTextAlignmentInsets;	// 88 = 0x58
}

+ (id)thePastDateFormatter;	// IMP=0x00000000000f5c8d
+ (id)thisWeekRelativeDateFormatter;	// IMP=0x00000000000f5c21
+ (id)todayDateFormatter;	// IMP=0x00000000000f5bca
+ (id)createImageAsTextAttachment;	// IMP=0x00000000000f3a88
- (void).cxx_destruct;	// IMP=0x00000000000f8362
@property(nonatomic, getter=isLabelSizeLoaded) _Bool labelSizeLoaded; // @synthesize labelSizeLoaded=_labelSizeLoaded;
@property(nonatomic, getter=isButtonSizeLoaded) _Bool buttonSizeLoaded; // @synthesize buttonSizeLoaded=_buttonSizeLoaded;
@property(copy, nonatomic) NSAttributedString *transcriptButtonText; // @synthesize transcriptButtonText=_transcriptButtonText;
@property(readonly, nonatomic) _Bool shouldHideDuringDarkFSM;
- (struct CGSize)loadButtonSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;	// IMP=0x00000000000f80d7
- (struct CGSize)loadLabelSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;	// IMP=0x00000000000f7dc6
@property(readonly, nonatomic) _Bool allowsEffectAutoPlayback;
- (id)loadTranscriptButtonText;	// IMP=0x00000000000f60ea
- (id)effectsControlStatusTextForEffectStyleID:(id)arg1;	// IMP=0x00000000000f5d75
- (unsigned long long)count;	// IMP=0x00000000000f5b86
- (id)time;	// IMP=0x00000000000f5b36
- (_Bool)isFromMe;	// IMP=0x00000000000f5af2
- (long long)expireStatusType;	// IMP=0x00000000000f5aae
- (long long)statusType;	// IMP=0x00000000000f5a6a
- (id)now;	// IMP=0x00000000000f5a51
@property(readonly, nonatomic) BOOL statusAlignment;
@property(readonly, nonatomic) long long buttonType;
@property(readonly, nonatomic) struct UIEdgeInsets buttonTextAlignmentInsets; // @synthesize buttonTextAlignmentInsets=_buttonTextAlignmentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets labelTextAlignmentInsets; // @synthesize labelTextAlignmentInsets=_labelTextAlignmentInsets;
@property(readonly, nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;	// IMP=0x00000000000f5574
- (id)loadTranscriptText;	// IMP=0x00000000000f3e42
- (struct CGSize)size;	// IMP=0x00000000000f3d8f
- (_Bool)wantsDrawerLayout;	// IMP=0x00000000000f3d19
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;	// IMP=0x00000000000f3c64
- (void)unloadSize;	// IMP=0x00000000000f3c1d
- (void)unloadTranscriptText;	// IMP=0x00000000000f3bd3
- (Class)cellClass;	// IMP=0x00000000000f3b93
- (BOOL)transcriptOrientation;	// IMP=0x00000000000f3b7b
- (struct UIEdgeInsets)contentInsets;	// IMP=0x00000000000f3b5c
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;	// IMP=0x0000000000452bc4
- (unsigned long long)layoutType;	// IMP=0x0000000000452bb9

@end

