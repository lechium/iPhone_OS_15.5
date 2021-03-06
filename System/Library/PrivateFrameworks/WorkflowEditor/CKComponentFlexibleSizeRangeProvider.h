//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/CKComponentSizeRangeProviding-Protocol.h>

@class NSString;

@interface CKComponentFlexibleSizeRangeProvider : NSObject <CKComponentSizeRangeProviding>
{
    long long _flexibility;	// 8 = 0x8
}

+ (id)providerWithFlexibility:(long long)arg1;	// IMP=0x000000000031c34a
- (struct CKSizeRange)sizeRangeForBoundingSize:(struct CGSize)arg1;	// IMP=0x000000000031c298
- (id)initWithFlexibility:(long long)arg1;	// IMP=0x000000000031c25b
- (id)init;	// IMP=0x000000000031c14d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

