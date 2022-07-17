//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@class TSDRep;

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer
{
    TSDRep *mTouchedRep;	// 8 = 0x8
    _Bool mIgnoreTargetAction;	// 16 = 0x10
}

@property(nonatomic) _Bool ignoreTargetAction; // @synthesize ignoreTargetAction=mIgnoreTargetAction;
- (id)touchedRep;	// IMP=0x00000000001bbd68
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001bbb3f
- (void)reset;	// IMP=0x00000000001bbae6

@end
