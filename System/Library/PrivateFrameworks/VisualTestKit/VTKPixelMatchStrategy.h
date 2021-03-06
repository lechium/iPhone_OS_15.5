//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKColorDifferenceStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKPixelMatchStrategy : NSObject <VTKColorDifferenceStrategy>
{
}

- (double)antiAliasingDifferenceBetweenColor:(id)arg1 andColor:(id)arg2;	// IMP=0x0000000000006c0f
- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;	// IMP=0x0000000000006b2b
@property(readonly, nonatomic) double tolerance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

