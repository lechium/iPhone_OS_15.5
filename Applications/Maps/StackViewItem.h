//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, UIView;

__attribute__((visibility("hidden")))
@interface StackViewItem : NSObject
{
    UIView *_view;	// 8 = 0x8
    NSNumber *_horizontalSpacing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009a18be
@property(readonly, nonatomic) NSNumber *horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)initWithView:(id)arg1 horizontalSpacing:(id)arg2;	// IMP=0x00100000009a1811

@end

