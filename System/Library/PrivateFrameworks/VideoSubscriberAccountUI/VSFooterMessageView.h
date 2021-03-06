//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <VideoSubscriberAccountUI/PSHeaderFooterView-Protocol.h>

@class NSString, VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSFooterMessageView : UIView <PSHeaderFooterView>
{
    NSString *_primaryMessage;	// 8 = 0x8
    NSString *_secondaryMessage;	// 16 = 0x10
    NSString *_tertiaryMessage;	// 24 = 0x18
    VSFontCenter *_fontCenter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004fe80
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(copy, nonatomic) NSString *tertiaryMessage; // @synthesize tertiaryMessage=_tertiaryMessage;
@property(copy, nonatomic) NSString *secondaryMessage; // @synthesize secondaryMessage=_secondaryMessage;
@property(copy, nonatomic) NSString *primaryMessage; // @synthesize primaryMessage=_primaryMessage;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004fd62
- (double)preferredHeightForWidth:(double)arg1;	// IMP=0x000000000004fd34
- (void)dealloc;	// IMP=0x000000000004fcfe
- (id)initWithSpecifier:(id)arg1;	// IMP=0x000000000004f2d1

@end

