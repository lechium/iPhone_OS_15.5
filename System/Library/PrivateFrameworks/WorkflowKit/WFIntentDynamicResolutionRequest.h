//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFIntentDynamicResolutionRequest : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    CDUnknownBlockType _resolutionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a3601
@property(copy, nonatomic) CDUnknownBlockType resolutionBlock; // @synthesize resolutionBlock=_resolutionBlock;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)cancel;	// IMP=0x00000000001a35d5
- (id)init;	// IMP=0x00000000001a3583

@end

