//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface ABSBundle : NSObject
{
    NSBundle *_backingBundle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018cda
@property(readonly, nonatomic) NSBundle *backingBundle; // @synthesize backingBundle=_backingBundle;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000018c85
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000018c0e
- (Class)classNamed:(id)arg1;	// IMP=0x0000000000018b65
- (id)init;	// IMP=0x0000000000018af9
- (id)initWithBackingBundle:(id)arg1;	// IMP=0x0000000000018a7b

@end
