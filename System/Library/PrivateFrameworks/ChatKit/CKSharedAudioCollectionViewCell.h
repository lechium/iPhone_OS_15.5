//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAudioProgressView, UIDateLabel;

__attribute__((visibility("hidden")))
@interface CKSharedAudioCollectionViewCell
{
    CKAudioProgressView *_audioPlaybackView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x00000000003d3360
- (void).cxx_destruct;	// IMP=0x00000000003d388f
@property(retain, nonatomic) CKAudioProgressView *audioPlaybackView; // @synthesize audioPlaybackView=_audioPlaybackView;
- (void)layoutSubviews;	// IMP=0x00000000003d3692
- (id)formattedCreatedDateTextFromDate:(id)arg1;	// IMP=0x00000000003d35d2
- (id)formattedDurationTextForAsset:(id)arg1;	// IMP=0x00000000003d350d
- (void)configureWithAttachmentItem:(id)arg1;	// IMP=0x00000000003d336d

// Remaining properties
@property(retain, nonatomic) UIDateLabel *previewTitleLabel; // @dynamic previewTitleLabel;

@end

