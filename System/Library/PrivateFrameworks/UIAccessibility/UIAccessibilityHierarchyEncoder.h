//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject
{
    _Bool _shouldResolveRemoteElements;	// 8 = 0x8
    id _rootElement;	// 16 = 0x10
    UIAccessibilityElementTraversalOptions *_traversalOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b625
@property(nonatomic) _Bool shouldResolveRemoteElements; // @synthesize shouldResolveRemoteElements=_shouldResolveRemoteElements;
@property(retain, nonatomic) UIAccessibilityElementTraversalOptions *traversalOptions; // @synthesize traversalOptions=_traversalOptions;
@property(retain, nonatomic) id rootElement; // @synthesize rootElement=_rootElement;
- (void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3;	// IMP=0x000000000000b1bf
- (struct CGRect)_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3;	// IMP=0x000000000000ad2d
- (id)encodeWithError:(id *)arg1;	// IMP=0x000000000000a8cb
- (id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2;	// IMP=0x000000000000a7d2

@end

