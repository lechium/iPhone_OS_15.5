//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationTimingFunctionDescription-Protocol.h>

@class NSString;

@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription>
{
    struct CGPoint _controlPoint1;	// 8 = 0x8
    struct CGPoint _controlPoint2;	// 24 = 0x18
}

+ (id)functionWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;	// IMP=0x0000000000014914
@property(readonly, nonatomic) struct CGPoint controlPoint2; // @synthesize controlPoint2=_controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1; // @synthesize controlPoint1=_controlPoint1;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014c48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014b25
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)_initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;	// IMP=0x0000000000014966

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
