//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AUAudioUnit, AUGenericViewInternal, UIColor;

@interface AUGenericViewController : UIViewController
{
    struct OpaqueAudioComponentInstance *au;	// 8 = 0x8
    AUAudioUnit *_auAudioUnit;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
    AUGenericViewInternal *_genericView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000012cc5
@property(readonly) AUGenericViewInternal *genericView; // @synthesize genericView=_genericView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) AUAudioUnit *auAudioUnit; // @synthesize auAudioUnit=_auAudioUnit;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000012b83
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000012b0e
- (void)viewDidLoad;	// IMP=0x00000000000129c1
- (id)getTintColor;	// IMP=0x00000000000129ac
- (void)setAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x00000000000128f3
- (id)getAuAudioUnit;	// IMP=0x00000000000128de
- (void)genericViewEndGestureMessageReceived:(id)arg1;	// IMP=0x00000000000127d5
- (void)genericViewBeginGestureMessageReceived:(id)arg1;	// IMP=0x0000000000012716
- (void)genericViewNotificationMessageReceived:(id)arg1;	// IMP=0x00000000000125d9
- (id)init;	// IMP=0x000000000001251e

@end
