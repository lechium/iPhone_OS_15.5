//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIUninstallNotifier : NSObject
{
    NSArray *_removals;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005d08f
@property(readonly, nonatomic) NSArray *removals; // @synthesize removals=_removals;
- (void)performRemovalWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005cc75
- (id)initWithContainersToRemove:(id)arg1;	// IMP=0x001000000005cc0a

@end
