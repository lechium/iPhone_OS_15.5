//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface WristDetect_3_0Output : NSObject
{
    MLMultiArray *_final_result__0;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000131528
@property(retain, nonatomic) MLMultiArray *final_result__0; // @synthesize final_result__0=_final_result__0;
- (id)featureValueForName:(id)arg1;	// IMP=0x00100000001314b4
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFinal_result__0:(id)arg1;	// IMP=0x0010000000131429

@end
