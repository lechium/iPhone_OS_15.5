//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/BSSimpleAssertion.h>

@interface SBMainStatusBarContentAssertion : BSSimpleAssertion
{
    _Bool _animated;	// 8 = 0x8
    _Bool _dateAndTimeVisible;	// 9 = 0x9
    double _duration;	// 16 = 0x10
}

@property(nonatomic) _Bool dateAndTimeVisible; // @synthesize dateAndTimeVisible=_dateAndTimeVisible;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2;	// IMP=0x000000000067b672

@end

