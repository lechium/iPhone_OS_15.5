//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SKUILabelViewElement, SKUIPaletteViewElement, SKUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesTemplateViewElement
{
    SKUIPhysicalCirclesTemplateDOMFeature *_scriptInterface;	// 8 = 0x8
}

+ (id)supportedFeatures;	// IMP=0x00000000001629f7
- (void).cxx_destruct;	// IMP=0x0000000000162a6f
@property(readonly, nonatomic) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface; // @synthesize scriptInterface=_scriptInterface;
@property(readonly, nonatomic) SKUILabelViewElement *titleElement;
@property(readonly, nonatomic) SKUILabelViewElement *subtitleElement;
@property(readonly, nonatomic) SKUIPaletteViewElement *footerPaletteElement;
- (void)dispatchRemovedEventWithChildViewElement:(id)arg1;	// IMP=0x0000000000162425
@property(readonly, nonatomic) NSArray *circleItemElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001622cb

@end

