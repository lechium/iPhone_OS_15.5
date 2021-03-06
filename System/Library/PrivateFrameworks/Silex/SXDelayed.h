//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SXDelayed : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    SXDelayed *_strongReference;	// 24 = 0x18
}

+ (id)execute:(CDUnknownBlockType)arg1 delay:(double)arg2;	// IMP=0x000000000013eb8d
- (void).cxx_destruct;	// IMP=0x000000000013ee87
@property(retain, nonatomic) SXDelayed *strongReference; // @synthesize strongReference=_strongReference;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)cancel;	// IMP=0x000000000013ee0f
- (void)invoke;	// IMP=0x000000000013ed95
- (id)initWithBlock:(CDUnknownBlockType)arg1 delay:(double)arg2;	// IMP=0x000000000013ec12

@end

