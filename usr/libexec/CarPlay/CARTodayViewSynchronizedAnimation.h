//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CARTodayViewSynchronizedAnimation : NSObject
{
    _Bool _ready;	// 8 = 0x8
    CDUnknownBlockType _animationBlock;	// 16 = 0x10
    id _client;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000099437
@property(retain, nonatomic) id client; // @synthesize client=_client;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
- (id)description;	// IMP=0x00100000000992ca

@end

