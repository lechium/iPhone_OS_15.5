//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VUISBIconProgressFractionTransition
{
    double _targetFraction;	// 8 = 0x8
}

+ (id)newTransitionToFraction:(double)arg1;	// IMP=0x0000000000068159
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x000000000006828a
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;	// IMP=0x0000000000068221
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000000068203
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x000000000006819d
- (void)updateToFraction:(double)arg1;	// IMP=0x000000000006818b

@end

