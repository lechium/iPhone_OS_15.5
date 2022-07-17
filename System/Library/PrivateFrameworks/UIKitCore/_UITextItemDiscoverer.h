//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextItemDiscoverable-Protocol.h>

@class NSString, UIView;
@protocol UICoordinateSpace, _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable>
{
    UIView<_UITextContent> *_view;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010d562b
@property(readonly, nonatomic) __weak UIView<_UITextContent> *view; // @synthesize view=_view;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;	// IMP=0x00000000010d54a6
- (id)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000010d4f97
- (_Bool)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;	// IMP=0x00000000010d4c8c
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;	// IMP=0x00000000010d4160
- (id)visibleTextRange;	// IMP=0x00000000010d3ec2
- (struct CGRect)_visibleBounds;	// IMP=0x00000000010d3d5c
- (id)_textReferenceView;	// IMP=0x00000000010d3ced
@property(readonly, nonatomic) id <UICoordinateSpace> textItemCoordinateSpace;
- (id)initWithView:(id)arg1;	// IMP=0x00000000010d3c73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
