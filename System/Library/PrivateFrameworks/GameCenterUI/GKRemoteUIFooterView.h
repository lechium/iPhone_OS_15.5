//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/RemoteUITableFooter-Protocol.h>

@class GKLabel, NSString;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>
{
    _Bool _shouldApplyGameCenterTheme;	// 8 = 0x8
    int _layoutStyle;	// 12 = 0xc
    GKLabel *_textLabel;	// 16 = 0x10
    double _leftMargin;	// 24 = 0x18
    double _rightMargin;	// 32 = 0x20
    double _bottomMargin;	// 40 = 0x28
    double _paragraphMargin;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000664d0
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;
@property(nonatomic) double paragraphMargin; // @synthesize paragraphMargin=_paragraphMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) GKLabel *textLabel; // @synthesize textLabel=_textLabel;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;	// IMP=0x00000000000660cb
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x0000000000065f1a
- (id)initWithAttributes:(id)arg1;	// IMP=0x000000000006583e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
