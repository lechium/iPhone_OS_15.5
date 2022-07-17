//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKViewElement.h>

@interface IKViewElement (TVMLKitAdditions)
+ (id)tv_approximateViewElementForView:(id)arg1;	// IMP=0x00000000000a8153
- (void)retrievePresentationDocumentWithResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a793a
- (void)tv_dispatchEvent:(id)arg1 canBubble:(_Bool)arg2 isCancelable:(_Bool)arg3 extraInfo:(id)arg4 targetResponder:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000a77c1
@property(nonatomic, getter=tv_isParsedOnce, setter=tv_setParsedOnce:) _Bool tv_parsedOnce;
@property(readonly, nonatomic) long long tv_scaleMode;
- (long long)tv_scaleModeWithDefaultMode:(long long)arg1;	// IMP=0x00000000000a7582
- (long long)tv_semanticContentAttribute;	// IMP=0x00000000000a750d
- (id)itemElementsOfType:(unsigned long long)arg1;	// IMP=0x00000000000a7219
- (unsigned long long)tv_elementType;	// IMP=0x00000000000a7207
- (id)tv_associatedViewElementWithDefaultClass:(Class)arg1;	// IMP=0x00000000000a7166
- (id)tv_associatedViewElement;	// IMP=0x00000000000a7138
@property(nonatomic, setter=tv_setProxyView:) __weak id tv_proxyView;
@end
