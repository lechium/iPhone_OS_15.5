//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, _AVSimplePlayerLayerView;

@interface AVPictureInPicturePlayerLayerView : UIView
{
    _AVSimplePlayerLayerView *_simplePlayerLayerView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004d3b
- (void)detachPlayerLayer;	// IMP=0x0000000000004cc1
- (void)attachPlayerLayer;	// IMP=0x0000000000004a9b
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;

@end

