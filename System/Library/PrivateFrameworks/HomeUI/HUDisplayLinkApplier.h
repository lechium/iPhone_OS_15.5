//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink;

@interface HUDisplayLinkApplier
{
    _Bool _applyOnlyOnProgressChanges;	// 8 = 0x8
    _Bool _completesWhenAtRest;	// 9 = 0x9
    _Bool _atRest;	// 10 = 0xa
    CDUnknownBlockType _progressInputBlock;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    unsigned long long _restingFrameCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004174b7
@property(nonatomic) unsigned long long restingFrameCount; // @synthesize restingFrameCount=_restingFrameCount;
@property(nonatomic, getter=isAtRest) _Bool atRest; // @synthesize atRest=_atRest;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType progressInputBlock; // @synthesize progressInputBlock=_progressInputBlock;
@property(nonatomic) _Bool completesWhenAtRest; // @synthesize completesWhenAtRest=_completesWhenAtRest;
@property(nonatomic) _Bool applyOnlyOnProgressChanges; // @synthesize applyOnlyOnProgressChanges=_applyOnlyOnProgressChanges;
- (_Bool)complete:(_Bool)arg1;	// IMP=0x00000000004173b1
- (void)_invalidateDisplayLinkIfNecessary;	// IMP=0x0000000000417357
- (void)restingStateDidChange;	// IMP=0x0000000000417351
- (double)effectiveInputProgressForBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000417323
- (void)_updateProgressForInitialUpdate:(_Bool)arg1;	// IMP=0x00000000004171ae
- (void)_displayLinkTick;	// IMP=0x000000000041719a
- (_Bool)start;	// IMP=0x000000000041701e
- (id)initWithProgressInputBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000416f23
- (id)init;	// IMP=0x0000000000416e6e

@end
