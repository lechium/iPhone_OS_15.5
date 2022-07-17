//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WFMDMVerifier : NSObject
{
    NSString *_actionName;	// 8 = 0x8
    NSArray *_contentAttributionSets;	// 16 = 0x10
}

+ (id)contentAttributionsFromContentAttributionSets:(id)arg1 withManagedLevel:(unsigned long long)arg2;	// IMP=0x00000000002f5564
- (void).cxx_destruct;	// IMP=0x00000000002f5164
@property(readonly, copy, nonatomic) NSArray *contentAttributionSets; // @synthesize contentAttributionSets=_contentAttributionSets;
@property(readonly, copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (id)errorFromFailedVerificationContentAttributionSets:(id)arg1 contentDestination:(id)arg2 destinationManagedLevel:(unsigned long long)arg3;	// IMP=0x00000000002f4d41
- (_Bool)canSendDataToContentDestination:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002f4b89
- (id)initWithAction:(id)arg1;	// IMP=0x00000000002f4a7a
- (id)initWithContentAttributionSets:(id)arg1 actionName:(id)arg2;	// IMP=0x00000000002f493b

@end
