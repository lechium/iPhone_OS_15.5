//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

@interface CKBlockContactChatItem
{
    NSAttributedString *_transcriptButtonText;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000329b74
@property(copy, nonatomic) NSAttributedString *transcriptButtonText; // @synthesize transcriptButtonText=_transcriptButtonText;
- (id)loadTranscriptText;	// IMP=0x000000000032993a
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;	// IMP=0x000000000032974a
- (Class)cellClass;	// IMP=0x0000000000329739
- (_Bool)__im_ff_commSafetyUIEnabled;	// IMP=0x00000000003296ee

@end

