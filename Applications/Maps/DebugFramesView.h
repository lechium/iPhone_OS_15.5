//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface DebugFramesView : UIView
{
    NSMutableOrderedSet *_names;	// 8 = 0x8
    NSMutableDictionary *_framesByName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000aefefc
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0010000000aeefb0
- (void)setLayoutGuide:(id)arg1 forName:(id)arg2;	// IMP=0x0010000000aeeefe
- (void)setFrame:(struct CGRect)arg1 forName:(id)arg2;	// IMP=0x0010000000aeee2f
- (void)unregisterAll;	// IMP=0x0010000000aeede6
- (void)unregisterName:(id)arg1;	// IMP=0x0010000000aeed61
- (void)registerName:(id)arg1 color:(id)arg2 weight:(double)arg3 edges:(unsigned long long)arg4;	// IMP=0x0010000000aeec4e
- (void)layoutSubviews;	// IMP=0x0010000000aeebdd
- (void)didMoveToSuperview;	// IMP=0x0010000000aeeb6c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000aeea58

@end

