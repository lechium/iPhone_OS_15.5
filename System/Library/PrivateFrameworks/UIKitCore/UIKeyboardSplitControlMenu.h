//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIInputSwitcherSplitMenu-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu <_UIInputSwitcherSplitMenu>
{
    struct CGSize m_preferredSize;	// 264 = 0x108
    NSArray *_items;	// 280 = 0x118
    CDUnknownBlockType _finishSplitTransitionBlock;	// 288 = 0x120
}

+ (id)activeInstance;	// IMP=0x00000000008fc905
+ (id)sharedInstance;	// IMP=0x00000000008fc895
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;	// IMP=0x00000000008fce1f
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fcdb8
- (void)setSplitAndUndocked:(_Bool)arg1;	// IMP=0x00000000008fccd5
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fcccd
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008fcc87
- (int)visibleItemForIndex:(unsigned long long)arg1;	// IMP=0x00000000008fcb28
- (unsigned long long)defaultSelectedIndex;	// IMP=0x00000000008fcb18
- (struct CGSize)preferredSize;	// IMP=0x00000000008fcac6
- (unsigned long long)numberOfItems;	// IMP=0x00000000008fcaaa
- (void)actionForItem:(id)arg1;	// IMP=0x00000000008fc92e
- (void)dealloc;	// IMP=0x00000000008fc83d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008fc52f

@end
