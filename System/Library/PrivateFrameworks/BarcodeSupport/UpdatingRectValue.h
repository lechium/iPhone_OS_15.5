//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface UpdatingRectValue : NSValue
{
    CDUnknownBlockType _updateBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cea1
- (struct CGRect)CGRectValue;	// IMP=0x000000000000ce80
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cdf7

@end
