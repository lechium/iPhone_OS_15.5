//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView
{
    _Bool _beingRemoved;	// 128 = 0x80
    UIWebBrowserView *_webBrowserView;	// 136 = 0x88
    UIWebOverflowScrollListener *_scrollListener;	// 144 = 0x90
    UIWebOverflowContentView *_overflowContentView;	// 152 = 0x98
    DOMNode *_node;	// 160 = 0xa0
    CALayer *_webLayer;	// 168 = 0xa8
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
@property(nonatomic, getter=isBeingRemoved) _Bool beingRemoved; // @synthesize beingRemoved=_beingRemoved;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView; // @synthesize overflowContentView=_overflowContentView;
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener; // @synthesize scrollListener=_scrollListener;
@property(nonatomic) UIWebBrowserView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000134e68b
- (_Bool)fixUpViewAfterInsertion;	// IMP=0x000000000134e5d8
- (id)superview;	// IMP=0x000000000134e506
- (void)willBeRemoved;	// IMP=0x000000000134e4f2
- (void)replaceLayer:(id)arg1;	// IMP=0x000000000134e4b5
- (void)dealloc;	// IMP=0x000000000134e441
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;	// IMP=0x000000000134e326

@end

