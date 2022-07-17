//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIIndexBarVisualStyle-Protocol.h>

@class NSString, UIIndexBarView;

__attribute__((visibility("hidden")))
@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle>
{
    UIIndexBarView *_indexBarView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000011f9ec4
@property(nonatomic) __weak UIIndexBarView *indexBarView; // @synthesize indexBarView=_indexBarView;
- (long long)_indexForEntryAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000011f9cea
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;	// IMP=0x00000000011f9ccc
- (id)displayEntryFromEntry:(id)arg1;	// IMP=0x00000000011f9c76
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000011f9c70
@property(readonly, nonatomic) double minLineHeight;
@property(readonly, nonatomic) _Bool overlay;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (id)initWithView:(id)arg1;	// IMP=0x00000000011f9bad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool expanded;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
