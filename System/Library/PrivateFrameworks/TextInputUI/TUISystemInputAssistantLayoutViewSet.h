//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUIAssistantButtonBarView, UIView;

@interface TUISystemInputAssistantLayoutViewSet : NSObject
{
    TUIAssistantButtonBarView *_leftButtonBar;	// 8 = 0x8
    TUIAssistantButtonBarView *_rightButtonBar;	// 16 = 0x10
    TUIAssistantButtonBarView *_unifiedButtonBar;	// 24 = 0x18
    UIView *_centerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000204ec
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar; // @synthesize unifiedButtonBar=_unifiedButtonBar;
@property(retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar; // @synthesize rightButtonBar=_rightButtonBar;
@property(retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar; // @synthesize leftButtonBar=_leftButtonBar;

@end
