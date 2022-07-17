//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer
{
    struct CGPoint mFirstTapLocation;	// 8 = 0x8
    _Bool mSavedFirstTapLocation;	// 24 = 0x18
    unsigned long long mTapCount;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned long long tapCount; // @synthesize tapCount=mTapCount;
@property(readonly, nonatomic) struct CGPoint firstTapLocation; // @synthesize firstTapLocation=mFirstTapLocation;
- (void)reset;	// IMP=0x00000000001d0cc4
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001d0ba9

@end
