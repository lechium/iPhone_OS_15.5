//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol SXIssueCoverViewProvider;

@interface SXIssueCoverComponentView
{
    id <SXIssueCoverViewProvider> _viewProvider;	// 8 = 0x8
    UIView *_coverView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000471bb
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(readonly, nonatomic) id <SXIssueCoverViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void)renderIssueCover;	// IMP=0x0000000000046df1
- (void)discardContents;	// IMP=0x0000000000046d74
- (void)renderContents;	// IMP=0x0000000000046d33
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;	// IMP=0x0000000000046cbe
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5;	// IMP=0x0000000000046c2f

@end
