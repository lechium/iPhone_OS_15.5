//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPLineFragmentAdornment-Protocol.h>

@class NSString, TSUColor;

@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment>
{
    TSUColor *_color;	// 8 = 0x8
    struct CGRect _bounds;	// 16 = 0x10
}

- (void)drawAdornmentForFragment:(const void *)arg1 inContext:(struct CGContext *)arg2 withFlags:(unsigned int)arg3 state:(const void *)arg4 bounds:(struct CGRect)arg5;	// IMP=0x00000000002e790a
@property(readonly, nonatomic) _Bool isBackground;
- (void)dealloc;	// IMP=0x00000000002e78c7
- (id)initWithColor:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000002e7857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

