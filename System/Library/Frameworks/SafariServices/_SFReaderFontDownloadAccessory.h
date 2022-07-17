//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIProgressView;

__attribute__((visibility("hidden")))
@interface _SFReaderFontDownloadAccessory : UIView
{
    _Bool _downloading;	// 8 = 0x8
    UIButton *_downloadButton;	// 16 = 0x10
    UIProgressView *_progressView;	// 24 = 0x18
    CDUnknownBlockType _tappedDownloadBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000096255
@property(copy, nonatomic) CDUnknownBlockType tappedDownloadBlock; // @synthesize tappedDownloadBlock=_tappedDownloadBlock;
@property(nonatomic, getter=isDownloading) _Bool downloading; // @synthesize downloading=_downloading;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000961e4
- (void)_tappedDownloadButton:(id)arg1;	// IMP=0x00000000000961c4
- (id)initWithTappedDownloadBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000095b18

@end
