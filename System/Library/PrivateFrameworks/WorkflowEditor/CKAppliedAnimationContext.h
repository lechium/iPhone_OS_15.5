//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

@interface CKAppliedAnimationContext : NSObject
{
    CALayer *_targetLayer;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003012cf
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CALayer *targetLayer; // @synthesize targetLayer=_targetLayer;
- (id)initWithTargetLayer:(id)arg1 key:(id)arg2;	// IMP=0x00000000003011e9

@end

