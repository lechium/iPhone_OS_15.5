//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink;

@interface IMDisplayLink_iOS
{
    CADisplayLink *_displayLink;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000c9ed
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (_Bool)isValid;	// IMP=0x000000000000c9b3
- (void)invalidate;	// IMP=0x000000000000c971
- (void)schedule;	// IMP=0x000000000000c875
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000000c78e

@end
