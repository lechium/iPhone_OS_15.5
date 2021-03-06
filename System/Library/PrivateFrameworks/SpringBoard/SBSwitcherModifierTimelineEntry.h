//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBSwitcherModifierEventResponseSnapshot, SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject
{
    SBSwitcherModifierEventSnapshot *_eventSnapshot;	// 8 = 0x8
    SBSwitcherModifierStackSnapshot *_postEventStackSnapshot;	// 16 = 0x10
    SBSwitcherModifierEventResponseSnapshot *_responseSnapshot;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006b6d01
@property(retain, nonatomic) SBSwitcherModifierEventResponseSnapshot *responseSnapshot; // @synthesize responseSnapshot=_responseSnapshot;
@property(retain, nonatomic) SBSwitcherModifierStackSnapshot *postEventStackSnapshot; // @synthesize postEventStackSnapshot=_postEventStackSnapshot;
@property(retain, nonatomic) SBSwitcherModifierEventSnapshot *eventSnapshot; // @synthesize eventSnapshot=_eventSnapshot;

@end

