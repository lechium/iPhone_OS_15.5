//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject
{
    SGMBadInteractionIgnored *_badInteractionIgnored;	// 8 = 0x8
}

+ (void)recordInteractionIgnoredWithReason:(struct SGMInteractionIgnoredReason_)arg1;	// IMP=0x000000000007f5bd
+ (id)instance;	// IMP=0x000000000007f58d
- (void).cxx_destruct;	// IMP=0x000000000007f57d
@property(retain, nonatomic) SGMBadInteractionIgnored *badInteractionIgnored; // @synthesize badInteractionIgnored=_badInteractionIgnored;
- (id)init;	// IMP=0x000000000007f4f7

@end

