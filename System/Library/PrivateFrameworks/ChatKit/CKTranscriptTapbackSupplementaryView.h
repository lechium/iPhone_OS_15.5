//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAcknowledgmentBalloonView;

@interface CKTranscriptTapbackSupplementaryView
{
    CKAcknowledgmentBalloonView *_balloonView;	// 8 = 0x8
}

+ (id)supplementaryViewKindPrefix;	// IMP=0x00000000002e86fd
- (void).cxx_destruct;	// IMP=0x00000000002e895e
@property(retain, nonatomic) CKAcknowledgmentBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x00000000002e870a
- (void)prepareForReuse;	// IMP=0x00000000002e863c
- (void)layoutSubviews;	// IMP=0x00000000002e859a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002e855a

@end
